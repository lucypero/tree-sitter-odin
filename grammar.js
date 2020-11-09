const
newline = '\n',
  terminator = ';',

  binaryDigit = /[01]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  dozenalDigit = /[0-9a-bA-B]/,
  hexDigit = /[0-9a-fA-F]/,

  binaryDigits = seq(binaryDigit, repeat(seq(repeat('_'), binaryDigit))),
  octalDigits = seq(octalDigit, repeat(seq(repeat('_'), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(repeat('_'), decimalDigit))),
  dozenalDigits = seq(dozenalDigit, repeat(seq(repeat('_'), dozenalDigit))),
  hexDigits = seq(hexDigit, repeat(seq(repeat('_'), hexDigit))),

  binaryLiteral = seq('0', 'b', repeat('_'), binaryDigits, repeat('_')),
  octalLiteral = seq('0', 'o', repeat('_'), octalDigits, repeat('_')),
  decimalLiteral = seq(optional(seq('0', 'd', repeat('_'))), decimalDigits, repeat('_')),
  dozenalLiteral = seq('0', 'z', repeat('_'), dozenalDigits, repeat('_')),
  hexLiteral = seq('0', choice('x', 'X'), repeat('_'), hexDigits, repeat('_')),

  intLiteral = choice(binaryLiteral, octalLiteral, decimalLiteral, 
    dozenalLiteral, hexLiteral),


  // float_lit = decimal_float_lit | hexadecimal_float32_lit | hexadecimal_float64_lit .
  // decimal_float_lit = decimals "." [decimals] [exponent] |
  //                     decimals exponent |
  //                     "." decimals [exponent] .
  // decimals = decimal_digit { decimal_char } .
  // exponent = ( "e" | "E" ) [ "+" | "-" ] decimals .

  // hexadecimal_float32_lit = "0h" hex_digit hex_char hex_char hex_char
//                           hex_char hex_char hex_char hex_char .
  // hexadecimal_float64_lit = "0h" hex_digit hex_char hex_char hex_char
//                           hex_char hex_char hex_char hex_char
//                           hex_char hex_char hex_char hex_char
//                           hex_char hex_char hex_char hex_char .



  //decimal and hexadecimal

floatNoExp = choice(
  seq(decimalDigits, repeat('_'), '.', repeat('_'), optional(decimalDigits), repeat('_')),
  seq(optional(seq(decimalDigits, repeat('_'))), '.', repeat('_'), decimalDigits, repeat('_'))),

  floatDecimal = seq(choice(
    floatNoExp,
    seq(decimalDigits, repeat('_'))),
    optional(seq(
      choice('e','E'), 
      optional(choice('+', '-')),
      repeat('_'),
      optional(decimalDigits),
      repeat('_')))),

  hexDigitWithUnderscore = seq(hexDigit, repeat('_')),

  floatHexadecimal32 = seq('0', 'h', repeat('_'), hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore),

  floatHexadecimal64 = seq('0', 'h', repeat('_'), hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore, hexDigitWithUnderscore),

  floatLiteral = choice(floatDecimal, floatHexadecimal32, floatHexadecimal64),

  unicodeLetter = /[a-zA-Zα-ωΑ-Ωµ]/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,
  letter = choice(unicodeLetter, '_')

module.exports = grammar({
  name: 'odin',

  extras: $ => [
    /\s/,
    $.line_comment,
    $.block_comment,
  ],

  externals: $ => [
    $.block_comment,
  ],

  rules: {

    source_file: $ => repeat(
      $._top_level_declaration,
    ),

    _top_level_declaration: $ => choice(
      $.package_clause,
      $.import_declaration,
      $.proc_declaration,
    ),

    package_clause: $ => seq(
      'package',
      $._package_identifier
    ),

    import_declaration: $ => seq(
      'import',
      '"',
      $.package_import,
      '"',
    ),

    package_import: $ => seq(
      field('collection', $._collection_identifier),
      ':',
      field('package', $._package_identifier),
    ),

    proc_declaration: $ => prec.right(1,seq(
      field('name', $.identifier),
      '::',
      'proc',
      field('parameters', $.parameter_list),
      optional(seq(
        '->',
        field('result', $._type_identifier)
      )),
      field('body', $.block)
    )),

    parameter_list: $ => seq(
      '(',
        optional(seq(
          commaSep($.parameter_declaration),
          optional(',')
        )),
        ')'
    ),

    parameter_declaration: $ => seq(
      $.identifier,
      ':',
      $._type_identifier,
    ),

    identifier: $ => token(seq(
      letter,
      repeat(choice(letter, unicodeDigit))
    )),

    _type_identifier: $ => alias($.identifier, $.type_identifier),
    _package_identifier: $ => alias($.identifier, $.package_identifier),
    _collection_identifier: $ => alias($.identifier, $.collection_identifier),

    block: $ => seq(
      '{',
          repeat($._statement),
          '}'
    ),

    // ----------- Statements -----------

    _statement: $ => prec(5 , choice(
      seq(choice(
        $.return_statement,
        $._simple_statement,
        $.declaration_statement,
        $.assignment_statement,
      ), terminator)
    )),

    // n : int;
    declaration_statement : $ => prec(5, seq(
      $.identifier,
      ":",
      $._type_identifier,
    )),

    assignment_statement : $ => prec(5,seq(
      $.identifier,
      "=",
      choice(
        $.identifier,
        $._expression,
      )
    )),

    _simple_statement: $ => choice(
      $._expression,
    ),

    return_statement: $ => seq('return', $._expression),


    // ----------- Expressions -----------

    _expression: $ => choice(
      $.call_expression,
      $._number,
      $.identifier,
      $.string_literal,
    ),

    string_literal: $ => seq(
      '"',
      repeat(choice(
        token.immediate(prec(1, /[^"\n\\]+/)),
        $.escape_sequence
      )),
      '"'
    ),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

    call_expression: $ => seq(
      optional(seq($._package_identifier,'.')),
      field('function', $.identifier),
      field('arguments', $.argument_list)
    ),

    argument_list: $ => seq(
      '(',
        optional(seq(
          choice($._expression),
          repeat(seq(',', choice($._expression))),
          optional(',')
        )),
        ')'
    ),


    // ----------- Number -----------
    // https://odin-lang.org/ref/spec/#integer-literals
    // https://odin-lang.org/docs/overview/#numbers

    int_literal: $ => token(intLiteral),
    float_literal: $=> token(floatLiteral),

    _number: $ => choice(
      $.float_literal,
      $.int_literal,
    ),

    comment: $ => choice(
      $.line_comment,
      $.block_comment
    ),

    line_comment: $ => token(seq(
      '//', /.*/
    )),

  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
