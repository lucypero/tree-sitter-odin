const
  newline = '\n',
  terminator = ';',

  hexDigit = /[0-9a-fA-F]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  binaryDigit = /[01]/,

  hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
  octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
  decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
  binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),

  hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
  octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
  decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
  binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

  intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral),

  unicodeLetter = /[a-zA-Zα-ωΑ-Ωµ]/,
  unicodeDigit = /[0-9]/,
  unicodeChar = /./,
  unicodeValue = unicodeChar,
  letter = choice(unicodeLetter, '_')

module.exports = grammar({
  name: 'odin',

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

    _statement: $ => choice(
      $.return_statement,
      $._simple_statement,
    ),

    _simple_statement: $ => seq(choice(
      $._expression,
    ), terminator),

    return_statement: $ => seq('return', $.int_literal, terminator),


    // ----------- Expressions -----------

    _expression: $ => choice(
      $.call_expression,
      $.int_literal,
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



    int_literal: $ => token(intLiteral),

    number: $ => choice(
      $.int_literal
    ),
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
