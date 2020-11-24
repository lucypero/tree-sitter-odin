const
  terminator = ';',

// |   alternation
// ()  grouping
// []  option (0 or 1 times)
// {}  repetition (0 to n times)

// letter        = unicode_letter | "_" .
// binary_digit  = "0" … "1" .
// octal_digit   = "0" … "7" .
// decimal_digit = "0" … "9" .
// dozenal_digit = "0" … "9" | "A" … "B" | "a" … "b" .
// hex_digit     = "0" … "9" | "A" … "F" | "a" … "f" .

// binary_char  = binary_digit  | "_" .
// octal_char   = octal_digit   | "_" .
// decimal_char = decimal_digit | "_" .
// dozenal_char = dozenal_digit | "_" .
// hex_char     = hex_digit     | "_" .

// decimals = decimal_digit { decimal_char } .


  binaryDigit = /[01]/,
  octalDigit = /[0-7]/,
  decimalDigit = /[0-9]/,
  dozenalDigit = /[0-9a-bA-B]/,
  hexDigit = /[0-9a-fA-F]/,

  decimalChar = choice(decimalDigit, '_'),

  decimals = seq(decimalDigit, repeat(decimalChar))

// NOTE(lucypero): I did integer and floating point literals before reading the spec well, so they are unnecessarily complicated... could do a rewrite
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


// imaginary_lit = (decimals | float_lit) "i" .

  imaginaryLiteral = seq(choice(decimals, floatLiteral), 'i');

// Runes


// newline        = /* the Unicode code point U+000A */
// unicode_char   = /* an arbitrary Unicode code point except newline */
// unicode_letter = /* a Unicode code point classified as "Letter" */
// unicode_digit  = /* a Unicode code point classified as "Number, decimal digit" */

// rune_lit         = "'" ( unicode_value | byte_value ) "'" .
// unicode_value    = unicode_char | little_u_value | big_u_value | escaped_char .
// byte_value       = octal_byte_value | hex_byte_value .
// octal_byte_value = `\` octal_digit octal_digit octal_digit .
// hex_byte_value   = `\` "x" hex_digit hex_digit .
// little_u_value   = `\` "u" hex_digit hex_digit hex_digit hex_digit .
// big_u_value      = `\` "U" hex_digit hex_digit hex_digit hex_digit
//                            hex_digit hex_digit hex_digit hex_digit .
// escaped_char     = `\` ( "a" | "b" | "e" | f" | "n" | "r" | "t" | "v" | `\` | "'" | `"` ) .


// rune // signed 32 bit integer
//      // represents a Unicode code point
//      // is a distinct type to `i32`

  unicodeChar = /./,
  unicodeLetter = /[a-zA-Zα-ωΑ-Ωµ]/,
  unicodeDigit = /[0-9]/,

  littleUValue = seq('\\', 'u', hexDigit, hexDigit, hexDigit, hexDigit),
  bigUValue = seq('\\', 'U', hexDigit, hexDigit, hexDigit, hexDigit, 
                             hexDigit, hexDigit, hexDigit, hexDigit),
  escapedChar = seq('\\', choice('a', 'b', 'e', 'f', 'n', 'r', 't', 'v', '\\', "'", '"')),
  unicodeValue = choice(unicodeChar, littleUValue, bigUValue, escapedChar),

  octalByteValue = seq('\\', octalDigit, octalDigit, octalDigit),
  hexByteValue = seq('\\', 'x', hexDigit, hexDigit),
  byteValue = choice(octalByteValue, hexByteValue),

  runeLiteral = seq("'",choice(unicodeValue, byteValue),"'"),


// strings

// string_lit             = raw_string_lit | interpreted_string_lit .
// raw_string_lit         = "`" { unicode_char | newline } "`" .
// interpreted_string_lit = `"` { unicode_value | byte_value } `"` .


  newline = /\n/,

  rawStringLiteral = seq('`', repeat(choice(unicodeChar, newline)),'`'),
  interpretedStringLiteral = seq('"', repeat(choice(unicodeValue, byteValue)), '"'),

  stringLiteral = choice(rawStringLiteral, interpretedStringLiteral),
  // stringLiteral = interpretedStringLiteral,

  letter = choice(unicodeLetter, '_'),




   
  

  



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
      $.rune_literal,
      $.string_literal,
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
    imaginary_literal: $=> token(imaginaryLiteral),

    _number: $ => choice(
      $.float_literal,
      $.int_literal,
      $.imaginary_literal,
    ),

    rune_literal: $ => token(runeLiteral),
    string_literal: $ => token(stringLiteral),

    comment: $ => choice(
      $.line_comment,
      $.block_comment
    ),

    line_comment: $ => token(seq(
      '//', /.*/
    )),

    // ----------- Operators -----------

    // binary_op  = "||" | "&&" | rel_op | add_op | mul_op | contain_op .
    // range_op   = ".." | "..<" .
    // rel_op     = "==" | "!=" | "<" | "<=" | ">" | ">=" .
    // contain_op =  "in" | "not_in" .
    // add_op     = "+" | "-" | "|" | "~"  .
    // mul_op     = "*" | "/" | "%" | "%%" | "<<" | ">>" | "&" | "&~" .

    range_op: $ => token(choice('..', '..<')),
    rel_op: $ => choice('==', '!=', '<', '<=', '>', '>='),
    contain_op: $ => choice('in', 'not_in'),
    add_op: $ => choice('+', '-', '|', '~'),
    mul_op: $ => choice('*', '/', '%', '%%', '<<', '>>', '&', '&~'),

    binary_op: $ => choice('||', '&&', $.rel_op, $.add_op, $.mul_op, $.contain_op),

    // ----------- Types -----------

// Type = TypeName | TypeLit | "(" Type ")" | HelperType | Expression .
// TypeName = identifier | PolymorphicName .
// TypeLit = "typeid" |
//           ArrayType | SliceType | DynamicArrayType | MapType |
//           StructType | UnionType | EnumType | BitFieldType |
//           PointerType | ProcedureType |
//           BitSetType |
//           OpaqueType |
//           SimdVectorType |
//           RelativePointerType | RelativeSliceType .

// HelperType = "#" "type" Type .
// TypeOrWithSpecialization = Type | ( ("typeid" | PolymorphicName) "/" TypeOrWithSpecialization )

    _array_length: $ => alias($._expression, $.array_length),
    _enumerated_array_type: $ => alias($.type, $.enumerated_array_type),
    _element_type: $ => alias($.type, $.element_type),
    array_type: $ => seq(optional('#partial'), '[' , choice($._array_length, $._enumerated_array_type), ']', $._element_type),

    slice_type: $ => seq('[]', $.type),
    dynamic_array_type: $ => seq('[dynamic]', $.type),
    map_type: $ => seq('map', '[', $.type, ']', $.type),
    pointer_type: $ => seq('^', $.type),
    bitset_key_type: $ => choice($.type, seq($._expression, $.range_op, $._expression)),
    bitset_type: $ => seq('bit_set', '[', $.bitset_key_type, optional(seq(';', $.type)), ']'),
    opaque_type: $ => seq('opaque', $.type),
    simd_vector_type: $ => choice($.array_type, seq('#', 'simd', $.array_type)),
    relative_pointer_type: $ => seq('#', 'relative', '(', $.type, optional(','), ')', $.pointer_type),
    relative_slice_type: $ => seq('#', 'relative', '(', $.type, optional(','), ')', $.slice_type),


    // NOTE(lucypero): struct type

    //identifier list (put this somewhere else)
// IdentifierList = identifier { "," identifier } .
    identifier_list: $ => seq($.identifier, repeat(seq(',', $.identifier))),

//expression list (put this somewhere else)
// ExpressionList = Expression { "," Expression } .
    expression_list: $ => seq($._expression, repeat(seq(',', $._expression))),


// WhereClause = "where" ExpressionList .
    where_clause: $ => seq('where', $.expression_list),


// PolymorphicParameter = (IdentifierList | PolymorphicNameList) [":"] TypeOrWithSpecialization .
// PolymorphicParameterList = "(" PolymorphicParameter { "," PolymorphicParameter } [ "," ] ")" .

// PolymorphicName = "$" identifier .
// PolymorphicNameList = PolymorphicName { "," PolymorphicName } .

    polymorphic_name : $ => seq('$', $.identifier),
    polymorphic_name_list : $ => seq($.polymorphic_name, repeat(seq(',', $.polymorphic_name))),

// TypeOrWithSpecialization = Type | ( ("typeid" | PolymorphicName) "/" TypeOrWithSpecialization ) .
    type_or_with_specialization : $ => choice($.type, seq(choice('typeid', $.polymorphic_name), '/', $.type_or_with_specialization)),

    polymorphic_parameter : $ => seq(choice($.identifier_list, $.polymorphic_name_list), ':', $.type_or_with_specialization),
    polymorphic_parameter_list: $ => seq('(', $.polymorphic_parameter, repeat(seq(',', $.polymorphic_parameter)), optional(','), ')'),

//     StructTypeTags = [ ( "#" "align" Expression ) | ("#" "packed") | ("#" "raw_union") ] .
//     UnionTypeTags  = [ ( "#" "align" Expression ) | ("#" "no_nil") |("#" "maybe") ] .
//     BitFieldTags   = [ ( "#" "align" Expression ) ] .
//     StructFieldDecl = ( [ ("using") ]  IdentifierList ":" Type ) .
//     StructFieldList = StructFieldDecl { "," StructFieldDecl } .
//     Element = identifier [ "=" Expression ] .
//     ElementList = Element { "," Element } .
//     StructType = "struct" [PolymorphicParameterList] [StructTypeTags] [WhereClause] "{" StructFieldList [ "," ] "}" .
//     UnionType  = "union"  [PolymorphicParameterList] [UnionTypeTags] [WhereClause]  "{" ExpressionList  [ "," ] "}" .
//     EnumType   = "enum" [ Type ] "{" ElementList [ "," ] "}" .
    struct_type_tags : $ => optional(choice(seq('#', 'align', $._expression), seq('#', 'packed'), seq('#', 'raw_union'))),
    union_type_tags : $ => optional(choice(seq('#', 'align', $._expression), seq('#', 'no_nil'), seq('#', 'maybe'))),
    bitfield_tags : $ => optional(seq('#', 'align', $._expression)),
    struct_field_decl : $ => seq(optional('using'), $.identifier_list, ':', $.type),
    struct_field_list : $ => seq($.struct_field_decl, repeat(seq(',', $.struct_field_decl))),
    element : $ => seq($.identifier, optional(seq('=', $._expression))),
    element_list : $ => seq($.element, repeat(seq(',', $.element))),
    struct_type : $ => seq('struct', optional($.polymorphic_parameter_list),
                                     optional($.struct_type_tags),
                                     optional($.where_clause),
                            '{', $.struct_field_list, optional(','), '}'),
    union_type : $ => seq('union', optional($.polymorphic_parameter_list),
                                     optional($.union_type_tags),
                                     optional($.where_clause),
                            '{', $.expression_list, optional(','), '}'),
    enum_type : $ => seq('enum', optional($.type), '{', $.element_list, optional(','), '}'),


// BitFieldField = IdentifierList ":" Expression .
// BitFieldFieldList = BitFieldField { "," BitFieldField } .
// BitFieldFields = [ BitFieldFieldList [ "," ] ] .
// BitFieldType = "bit_field" (BitFieldTags) "{" BitFieldFields "}" .

    bitfield_field : $ => seq($.identifier_list, ':', $._expression),
    bitfield_field_list : $ => seq($.bitfield_field, repeat(seq(',', $.bitfield_field))),
    bitfield_fields : $ => optional(seq($.bitfield_field_list, optional(','))),
    bitfield_type : $ => seq('bit_field', $.bitfield_tags, '{', $.bitfield_fields, '}'),

// ProcedureTags = "#" "optional_ok" .
// ProcedureType = "proc" Signature .
    // NOTE(lucypero): what is this.. i think this is not written well
// Signature = Parameters | [ "->" Result ] [ ProcedureTags ] .
    procedure_tags : $ => seq('#', 'optional_ok'),
    procedure_type : $ => seq('proc', $.signature),

    // NOTE(lucypero): this might be wrong
    signature : $ => choice($.parameters, optional(seq('->', $.result)), optional($.procedure_tags)),

// Result = PlainParameters | Type .

    result : $ => choice($.plain_parameters, $.type),

// Parameters = "(" [ ParameterList [","] ] ")" .
// ParameterList = ParameterDecl { "," ParameterDecl } .
// ParameterPrefixes = "using" | ("#" "no_alias") | ("#" "c_vararg") | "auto_cast" | ("#" "const") .
// ParameterDecl = [ [ParameterPrefixes]  (IdentifierList | PolymorphicNameList) [ [":"] ".." TypeOrWithSpecialization ] ] .

    parameters : $ => seq('(', optional(seq($.parameter_list, optional(','))), ')'),
    parameter_list : $ => seq($.parameter_decl, repeat(seq(',', $.parameter_decl))),
    parameter_prefixes : $ => choice('using', seq('#', 'no_alias'), seq('#', 'c_vararg'), 'auto_cast', seq('#', 'const')),
    parameter_decl : $ => optional(seq(optional($.parameter_prefixes), choice($.identifier_list, $.polymorphic_name_list), optional(seq(optional(':'), '..', $.type_or_with_specialization)))),

// PlainParameters = "(" [ PlainParameterList [","] ] ")" .
// PlainParameterList = PlainParameterDecl { "," PlainParameterDecl } .
// PlainParameterDecl = [ (IdentifierList | PolymorphicNameList) [ [":"] ".." TypeOrWithSpecialization ] ] .

    plain_parameters : $ => seq('(', optional(seq($.plain_parameter_list, optional(','))), ')'),
    plain_parameter_list : $ => seq($.plain_parameter_decl, repeat(seq(',', $.plain_parameter_decl))),
    plain_parameter_decl : $ => optional(seq(choice($.identifier_list, $.polymorphic_name_list), optional(seq(optional(':'), '..', $.type_or_with_specialization)))),


// HelperType = "#" "type" Type .
    helper_type : $ => seq('#', 'type', $.type),

    // NOTE(lucypero): bill says this is old and will be removed i think
    _qualified_identifier : $ => alias($.identifier, $.qualified_identifier),

    type_name: $ => choice($.identifier, $._qualified_identifier),


    // TODO(lucypero): 

// TypeLit = "typeid" |
//           ArrayType | SliceType | DynamicArrayType | MapType |
//           StructType | UnionType | EnumType | BitFieldType |
//           PointerType | ProcedureType |
//           BitSetType |
//           OpaqueType |
//           SimdVectorType |
//           RelativePointerType | RelativeSliceType .

    type_literal: $ => choice('typeid', $.array_type, $.slice_type, $.dynamic_array_type,
      $.map_type, $.struct_type, $.union_type, $.enum_type, $.bitfield_type,
      $.pointer_type, $.procedure_type, $.bitset_type, 
      $.opaque_type, $.simd_vector_type, $.relative_pointer_type, $.relative_slice_type),

    type: $ => choice($.type_name, $.type_literal, seq("(", $.type, ")"), $.helper_type),
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}
