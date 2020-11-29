#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 321
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 163
#define ALIAS_COUNT 6
#define TOKEN_COUNT 81
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_package = 1,
  anon_sym_import = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_COLON = 4,
  anon_sym_COLON_COLON = 5,
  anon_sym_proc = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_COMMA = 8,
  sym_identifier = 9,
  anon_sym_LBRACE = 10,
  anon_sym_RBRACE = 11,
  anon_sym_SEMI = 12,
  anon_sym_EQ = 13,
  anon_sym_return = 14,
  sym_escape_sequence = 15,
  anon_sym_DOT = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  sym_int_literal = 19,
  sym_float_literal = 20,
  sym_imaginary_literal = 21,
  sym_rune_literal = 22,
  sym_string_literal = 23,
  sym_line_comment = 24,
  sym_range_op = 25,
  anon_sym_EQ_EQ = 26,
  anon_sym_BANG_EQ = 27,
  anon_sym_LT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_GT = 30,
  anon_sym_GT_EQ = 31,
  anon_sym_in = 32,
  anon_sym_not_in = 33,
  anon_sym_PLUS = 34,
  anon_sym_DASH = 35,
  anon_sym_PIPE = 36,
  anon_sym_TILDE = 37,
  anon_sym_STAR = 38,
  anon_sym_SLASH = 39,
  anon_sym_PERCENT = 40,
  anon_sym_PERCENT_PERCENT = 41,
  anon_sym_LT_LT = 42,
  anon_sym_GT_GT = 43,
  anon_sym_AMP = 44,
  anon_sym_AMP_TILDE = 45,
  anon_sym_PIPE_PIPE = 46,
  anon_sym_AMP_AMP = 47,
  anon_sym_POUNDpartial = 48,
  anon_sym_LBRACK = 49,
  anon_sym_RBRACK = 50,
  anon_sym_LBRACK_RBRACK = 51,
  anon_sym_LBRACKdynamic_RBRACK = 52,
  anon_sym_map = 53,
  anon_sym_CARET = 54,
  anon_sym_bit_set = 55,
  anon_sym_opaque = 56,
  anon_sym_POUND = 57,
  anon_sym_simd = 58,
  anon_sym_relative = 59,
  anon_sym_where = 60,
  anon_sym_DOLLAR = 61,
  anon_sym_typeid = 62,
  anon_sym_align = 63,
  anon_sym_packed = 64,
  anon_sym_raw_union = 65,
  anon_sym_no_nil = 66,
  anon_sym_maybe = 67,
  anon_sym_using = 68,
  anon_sym_struct = 69,
  anon_sym_union = 70,
  anon_sym_enum = 71,
  anon_sym_bit_field = 72,
  anon_sym_optional_ok = 73,
  anon_sym_no_alias = 74,
  anon_sym_c_vararg = 75,
  anon_sym_auto_cast = 76,
  anon_sym_const = 77,
  anon_sym_DOT_DOT = 78,
  anon_sym_type = 79,
  sym_block_comment = 80,
  sym_source_file = 81,
  sym__top_level_declaration = 82,
  sym_package_clause = 83,
  sym_import_declaration = 84,
  sym_package_import = 85,
  sym_proc_declaration = 86,
  sym_parameter_list = 87,
  sym__type_identifier = 88,
  sym__package_identifier = 89,
  sym__collection_identifier = 90,
  sym_block = 91,
  sym__statement = 92,
  sym_declaration_statement = 93,
  sym_assignment_statement = 94,
  sym__simple_statement = 95,
  sym_return_statement = 96,
  sym__expression = 97,
  sym_call_expression = 98,
  sym_argument_list = 99,
  sym__number = 100,
  sym__array_length = 101,
  sym__enumerated_array_type = 102,
  sym__element_type = 103,
  sym_array_type = 104,
  sym_slice_type = 105,
  sym_dynamic_array_type = 106,
  sym_map_type = 107,
  sym_pointer_type = 108,
  sym_bitset_key_type = 109,
  sym_bitset_type = 110,
  sym_opaque_type = 111,
  sym_simd_vector_type = 112,
  sym_relative_pointer_type = 113,
  sym_relative_slice_type = 114,
  sym_identifier_list = 115,
  sym_expression_list = 116,
  sym_where_clause = 117,
  sym_polymorphic_name = 118,
  sym_polymorphic_name_list = 119,
  sym_type_or_with_specialization = 120,
  sym_polymorphic_parameter = 121,
  sym_polymorphic_parameter_list = 122,
  sym_struct_type_tags = 123,
  sym_union_type_tags = 124,
  sym_bitfield_tags = 125,
  sym_struct_field_decl = 126,
  sym_struct_field_list = 127,
  sym_element = 128,
  sym_element_list = 129,
  sym_struct_type = 130,
  sym_union_type = 131,
  sym_enum_type = 132,
  sym_bitfield_field = 133,
  sym_bitfield_field_list = 134,
  sym_bitfield_fields = 135,
  sym_bitfield_type = 136,
  sym_procedure_tags = 137,
  sym_procedure_type = 138,
  sym_signature = 139,
  sym_result = 140,
  sym_parameters = 141,
  sym_parameter_prefixes = 142,
  sym_parameter_decl = 143,
  sym_plain_parameters = 144,
  sym_plain_parameter_list = 145,
  sym_plain_parameter_decl = 146,
  sym_helper_type = 147,
  sym_type_name = 148,
  sym__type_literal = 149,
  sym_type = 150,
  aux_sym_source_file_repeat1 = 151,
  aux_sym_parameter_list_repeat1 = 152,
  aux_sym_block_repeat1 = 153,
  aux_sym_argument_list_repeat1 = 154,
  aux_sym_identifier_list_repeat1 = 155,
  aux_sym_expression_list_repeat1 = 156,
  aux_sym_polymorphic_name_list_repeat1 = 157,
  aux_sym_polymorphic_parameter_list_repeat1 = 158,
  aux_sym_struct_field_list_repeat1 = 159,
  aux_sym_element_list_repeat1 = 160,
  aux_sym_bitfield_field_list_repeat1 = 161,
  aux_sym_plain_parameter_list_repeat1 = 162,
  alias_sym_array_length = 163,
  alias_sym_collection_identifier = 164,
  alias_sym_element_type = 165,
  alias_sym_enumerated_array_type = 166,
  alias_sym_package_identifier = 167,
  alias_sym_type_identifier = 168,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_package] = "package",
  [anon_sym_import] = "import",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_COLON] = ":",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_proc] = "proc",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOT] = ".",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_rune_literal] = "rune_literal",
  [sym_string_literal] = "string_literal",
  [sym_line_comment] = "line_comment",
  [sym_range_op] = "range_op",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_in] = "in",
  [anon_sym_not_in] = "not_in",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_AMP] = "&",
  [anon_sym_AMP_TILDE] = "&~",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_POUNDpartial] = "#partial",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACKdynamic_RBRACK] = "[dynamic]",
  [anon_sym_map] = "map",
  [anon_sym_CARET] = "^",
  [anon_sym_bit_set] = "bit_set",
  [anon_sym_opaque] = "opaque",
  [anon_sym_POUND] = "#",
  [anon_sym_simd] = "simd",
  [anon_sym_relative] = "relative",
  [anon_sym_where] = "where",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_typeid] = "typeid",
  [anon_sym_align] = "align",
  [anon_sym_packed] = "packed",
  [anon_sym_raw_union] = "raw_union",
  [anon_sym_no_nil] = "no_nil",
  [anon_sym_maybe] = "maybe",
  [anon_sym_using] = "using",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_enum] = "enum",
  [anon_sym_bit_field] = "bit_field",
  [anon_sym_optional_ok] = "optional_ok",
  [anon_sym_no_alias] = "no_alias",
  [anon_sym_c_vararg] = "c_vararg",
  [anon_sym_auto_cast] = "auto_cast",
  [anon_sym_const] = "const",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_type] = "type",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_package_clause] = "package_clause",
  [sym_import_declaration] = "import_declaration",
  [sym_package_import] = "package_import",
  [sym_proc_declaration] = "proc_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym__type_identifier] = "_type_identifier",
  [sym__package_identifier] = "_package_identifier",
  [sym__collection_identifier] = "_collection_identifier",
  [sym_block] = "block",
  [sym__statement] = "_statement",
  [sym_declaration_statement] = "declaration_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym__simple_statement] = "_simple_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym__number] = "_number",
  [sym__array_length] = "_array_length",
  [sym__enumerated_array_type] = "_enumerated_array_type",
  [sym__element_type] = "_element_type",
  [sym_array_type] = "array_type",
  [sym_slice_type] = "slice_type",
  [sym_dynamic_array_type] = "dynamic_array_type",
  [sym_map_type] = "map_type",
  [sym_pointer_type] = "pointer_type",
  [sym_bitset_key_type] = "bitset_key_type",
  [sym_bitset_type] = "bitset_type",
  [sym_opaque_type] = "opaque_type",
  [sym_simd_vector_type] = "simd_vector_type",
  [sym_relative_pointer_type] = "relative_pointer_type",
  [sym_relative_slice_type] = "relative_slice_type",
  [sym_identifier_list] = "identifier_list",
  [sym_expression_list] = "expression_list",
  [sym_where_clause] = "where_clause",
  [sym_polymorphic_name] = "polymorphic_name",
  [sym_polymorphic_name_list] = "polymorphic_name_list",
  [sym_type_or_with_specialization] = "type_or_with_specialization",
  [sym_polymorphic_parameter] = "polymorphic_parameter",
  [sym_polymorphic_parameter_list] = "polymorphic_parameter_list",
  [sym_struct_type_tags] = "struct_type_tags",
  [sym_union_type_tags] = "union_type_tags",
  [sym_bitfield_tags] = "bitfield_tags",
  [sym_struct_field_decl] = "struct_field_decl",
  [sym_struct_field_list] = "struct_field_list",
  [sym_element] = "element",
  [sym_element_list] = "element_list",
  [sym_struct_type] = "struct_type",
  [sym_union_type] = "union_type",
  [sym_enum_type] = "enum_type",
  [sym_bitfield_field] = "bitfield_field",
  [sym_bitfield_field_list] = "bitfield_field_list",
  [sym_bitfield_fields] = "bitfield_fields",
  [sym_bitfield_type] = "bitfield_type",
  [sym_procedure_tags] = "procedure_tags",
  [sym_procedure_type] = "procedure_type",
  [sym_signature] = "signature",
  [sym_result] = "result",
  [sym_parameters] = "parameters",
  [sym_parameter_prefixes] = "parameter_prefixes",
  [sym_parameter_decl] = "parameter_decl",
  [sym_plain_parameters] = "plain_parameters",
  [sym_plain_parameter_list] = "plain_parameter_list",
  [sym_plain_parameter_decl] = "plain_parameter_decl",
  [sym_helper_type] = "helper_type",
  [sym_type_name] = "type_name",
  [sym__type_literal] = "_type_literal",
  [sym_type] = "type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_polymorphic_name_list_repeat1] = "polymorphic_name_list_repeat1",
  [aux_sym_polymorphic_parameter_list_repeat1] = "polymorphic_parameter_list_repeat1",
  [aux_sym_struct_field_list_repeat1] = "struct_field_list_repeat1",
  [aux_sym_element_list_repeat1] = "element_list_repeat1",
  [aux_sym_bitfield_field_list_repeat1] = "bitfield_field_list_repeat1",
  [aux_sym_plain_parameter_list_repeat1] = "plain_parameter_list_repeat1",
  [alias_sym_array_length] = "array_length",
  [alias_sym_collection_identifier] = "collection_identifier",
  [alias_sym_element_type] = "element_type",
  [alias_sym_enumerated_array_type] = "enumerated_array_type",
  [alias_sym_package_identifier] = "package_identifier",
  [alias_sym_type_identifier] = "type_identifier",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_rune_literal] = sym_rune_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_line_comment] = sym_line_comment,
  [sym_range_op] = sym_range_op,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not_in] = anon_sym_not_in,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_AMP_TILDE] = anon_sym_AMP_TILDE,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_POUNDpartial] = anon_sym_POUNDpartial,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACKdynamic_RBRACK] = anon_sym_LBRACKdynamic_RBRACK,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_bit_set] = anon_sym_bit_set,
  [anon_sym_opaque] = anon_sym_opaque,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_simd] = anon_sym_simd,
  [anon_sym_relative] = anon_sym_relative,
  [anon_sym_where] = anon_sym_where,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_typeid] = anon_sym_typeid,
  [anon_sym_align] = anon_sym_align,
  [anon_sym_packed] = anon_sym_packed,
  [anon_sym_raw_union] = anon_sym_raw_union,
  [anon_sym_no_nil] = anon_sym_no_nil,
  [anon_sym_maybe] = anon_sym_maybe,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_bit_field] = anon_sym_bit_field,
  [anon_sym_optional_ok] = anon_sym_optional_ok,
  [anon_sym_no_alias] = anon_sym_no_alias,
  [anon_sym_c_vararg] = anon_sym_c_vararg,
  [anon_sym_auto_cast] = anon_sym_auto_cast,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_type] = anon_sym_type,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym_package_clause] = sym_package_clause,
  [sym_import_declaration] = sym_import_declaration,
  [sym_package_import] = sym_package_import,
  [sym_proc_declaration] = sym_proc_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym__type_identifier] = sym__type_identifier,
  [sym__package_identifier] = sym__package_identifier,
  [sym__collection_identifier] = sym__collection_identifier,
  [sym_block] = sym_block,
  [sym__statement] = sym__statement,
  [sym_declaration_statement] = sym_declaration_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym__simple_statement] = sym__simple_statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__number] = sym__number,
  [sym__array_length] = sym__array_length,
  [sym__enumerated_array_type] = sym__enumerated_array_type,
  [sym__element_type] = sym__element_type,
  [sym_array_type] = sym_array_type,
  [sym_slice_type] = sym_slice_type,
  [sym_dynamic_array_type] = sym_dynamic_array_type,
  [sym_map_type] = sym_map_type,
  [sym_pointer_type] = sym_pointer_type,
  [sym_bitset_key_type] = sym_bitset_key_type,
  [sym_bitset_type] = sym_bitset_type,
  [sym_opaque_type] = sym_opaque_type,
  [sym_simd_vector_type] = sym_simd_vector_type,
  [sym_relative_pointer_type] = sym_relative_pointer_type,
  [sym_relative_slice_type] = sym_relative_slice_type,
  [sym_identifier_list] = sym_identifier_list,
  [sym_expression_list] = sym_expression_list,
  [sym_where_clause] = sym_where_clause,
  [sym_polymorphic_name] = sym_polymorphic_name,
  [sym_polymorphic_name_list] = sym_polymorphic_name_list,
  [sym_type_or_with_specialization] = sym_type_or_with_specialization,
  [sym_polymorphic_parameter] = sym_polymorphic_parameter,
  [sym_polymorphic_parameter_list] = sym_polymorphic_parameter_list,
  [sym_struct_type_tags] = sym_struct_type_tags,
  [sym_union_type_tags] = sym_union_type_tags,
  [sym_bitfield_tags] = sym_bitfield_tags,
  [sym_struct_field_decl] = sym_struct_field_decl,
  [sym_struct_field_list] = sym_struct_field_list,
  [sym_element] = sym_element,
  [sym_element_list] = sym_element_list,
  [sym_struct_type] = sym_struct_type,
  [sym_union_type] = sym_union_type,
  [sym_enum_type] = sym_enum_type,
  [sym_bitfield_field] = sym_bitfield_field,
  [sym_bitfield_field_list] = sym_bitfield_field_list,
  [sym_bitfield_fields] = sym_bitfield_fields,
  [sym_bitfield_type] = sym_bitfield_type,
  [sym_procedure_tags] = sym_procedure_tags,
  [sym_procedure_type] = sym_procedure_type,
  [sym_signature] = sym_signature,
  [sym_result] = sym_result,
  [sym_parameters] = sym_parameters,
  [sym_parameter_prefixes] = sym_parameter_prefixes,
  [sym_parameter_decl] = sym_parameter_decl,
  [sym_plain_parameters] = sym_plain_parameters,
  [sym_plain_parameter_list] = sym_plain_parameter_list,
  [sym_plain_parameter_decl] = sym_plain_parameter_decl,
  [sym_helper_type] = sym_helper_type,
  [sym_type_name] = sym_type_name,
  [sym__type_literal] = sym__type_literal,
  [sym_type] = sym_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_identifier_list_repeat1] = aux_sym_identifier_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_polymorphic_name_list_repeat1] = aux_sym_polymorphic_name_list_repeat1,
  [aux_sym_polymorphic_parameter_list_repeat1] = aux_sym_polymorphic_parameter_list_repeat1,
  [aux_sym_struct_field_list_repeat1] = aux_sym_struct_field_list_repeat1,
  [aux_sym_element_list_repeat1] = aux_sym_element_list_repeat1,
  [aux_sym_bitfield_field_list_repeat1] = aux_sym_bitfield_field_list_repeat1,
  [aux_sym_plain_parameter_list_repeat1] = aux_sym_plain_parameter_list_repeat1,
  [alias_sym_array_length] = alias_sym_array_length,
  [alias_sym_collection_identifier] = alias_sym_collection_identifier,
  [alias_sym_element_type] = alias_sym_element_type,
  [alias_sym_enumerated_array_type] = alias_sym_enumerated_array_type,
  [alias_sym_package_identifier] = alias_sym_package_identifier,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_rune_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_range_op] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDpartial] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdynamic_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_opaque] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_simd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_relative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_typeid] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_align] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_packed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_raw_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maybe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bit_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional_ok] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_alias] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_c_vararg] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym_package_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_import_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_package_import] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__type_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__package_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__collection_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__array_length] = {
    .visible = false,
    .named = true,
  },
  [sym__enumerated_array_type] = {
    .visible = false,
    .named = true,
  },
  [sym__element_type] = {
    .visible = false,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_slice_type] = {
    .visible = true,
    .named = true,
  },
  [sym_dynamic_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bitset_key_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bitset_type] = {
    .visible = true,
    .named = true,
  },
  [sym_opaque_type] = {
    .visible = true,
    .named = true,
  },
  [sym_simd_vector_type] = {
    .visible = true,
    .named = true,
  },
  [sym_relative_pointer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_relative_slice_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_where_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_polymorphic_name] = {
    .visible = true,
    .named = true,
  },
  [sym_polymorphic_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym_type_or_with_specialization] = {
    .visible = true,
    .named = true,
  },
  [sym_polymorphic_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_polymorphic_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_type_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_element] = {
    .visible = true,
    .named = true,
  },
  [sym_element_list] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_type] = {
    .visible = true,
    .named = true,
  },
  [sym_union_type] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_type] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_field] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_field_list] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_bitfield_type] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [sym_result] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_prefixes] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_plain_parameter_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_helper_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_name] = {
    .visible = true,
    .named = true,
  },
  [sym__type_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_identifier_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_polymorphic_name_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_polymorphic_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_element_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bitfield_field_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plain_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_array_length] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_collection_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_element_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_enumerated_array_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_package_identifier] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arguments = 1,
  field_body = 2,
  field_collection = 3,
  field_function = 4,
  field_name = 5,
  field_package = 6,
  field_parameters = 7,
  field_result = 8,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_collection] = "collection",
  [field_function] = "function",
  [field_name] = "name",
  [field_package] = "package",
  [field_parameters] = "parameters",
  [field_result] = "result",
};

static const TSFieldMapSlice ts_field_map_slices[12] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
  [6] = {.index = 5, .length = 4},
  [7] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_collection, 0},
    {field_package, 2},
  [2] =
    {field_body, 4},
    {field_name, 0},
    {field_parameters, 3},
  [5] =
    {field_body, 6},
    {field_name, 0},
    {field_parameters, 3},
    {field_result, 5},
  [9] =
    {field_arguments, 1},
    {field_function, 0},
  [11] =
    {field_arguments, 3},
    {field_function, 2},
};

static TSSymbol ts_alias_sequences[12][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_package_identifier,
  },
  [2] = {
    [0] = alias_sym_collection_identifier,
  },
  [5] = {
    [0] = alias_sym_type_identifier,
  },
  [8] = {
    [0] = alias_sym_array_length,
  },
  [9] = {
    [0] = alias_sym_enumerated_array_type,
  },
  [11] = {
    [0] = alias_sym_element_type,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym__expression, 2,
    sym__expression,
    alias_sym_array_length,
  sym_type, 3,
    sym_type,
    alias_sym_element_type,
    alias_sym_enumerated_array_type,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '%') ADVANCE(327);
      if (lookahead == '&') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == '*') ADVANCE(325);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '<') ADVANCE(315);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == '\\') ADVANCE(24);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '^') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '|') ADVANCE(323);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(293);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == '^') ADVANCE(343);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'c' ||
          lookahead == 'd' ||
          ('f' <= lookahead && lookahead <= 'l') ||
          lookahead == 'n' ||
          lookahead == 'q' ||
          lookahead == 'r' ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'e') ADVANCE(243);
      if (lookahead == 'm') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(231);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 't') ADVANCE(214);
      if (lookahead == 'u') ADVANCE(247);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '0') ADVANCE(293);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == ']') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(143);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == '.') ADVANCE(36);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(293);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '[') ADVANCE(336);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == '`') ADVANCE(195);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          (lookahead < '0' || '7' < lookahead) &&
          lookahead != 'U' &&
          lookahead != '\\' &&
          lookahead != 'u' &&
          lookahead != 'x') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(11);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == 'u') ADVANCE(7);
      if (lookahead == 'x') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(4);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'a') ADVANCE(219);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(306);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(312);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(376);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(314);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(209);
      END_STATE();
    case 24:
      if (lookahead == 'U') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(185);
      if (lookahead == 'x') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (lookahead != 0) ADVANCE(284);
      END_STATE();
    case 25:
      if (lookahead == '\\') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == ']') ADVANCE(340);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(297);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(88);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(170);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(104);
      END_STATE();
    case 44:
      if (lookahead == '_') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 45:
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(173);
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(147);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(154);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(92);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(153);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(80);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(207);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(160);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(350);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(356);
      END_STATE();
    case 78:
      if (lookahead == 'd') ADVANCE(368);
      END_STATE();
    case 79:
      if (lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 82:
      if (lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 83:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(351);
      END_STATE();
    case 85:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 88:
      if (lookahead == 'f') ADVANCE(106);
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 'g') ADVANCE(360);
      END_STATE();
    case 90:
      if (lookahead == 'g') ADVANCE(372);
      END_STATE();
    case 91:
      if (lookahead == 'g') ADVANCE(123);
      END_STATE();
    case 92:
      if (lookahead == 'g') ADVANCE(83);
      END_STATE();
    case 93:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 94:
      if (lookahead == 'i') ADVANCE(117);
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 96:
      if (lookahead == 'i') ADVANCE(157);
      END_STATE();
    case 97:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 98:
      if (lookahead == 'i') ADVANCE(110);
      END_STATE();
    case 99:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 100:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(137);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 103:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 104:
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 107:
      if (lookahead == 'i') ADVANCE(138);
      END_STATE();
    case 108:
      if (lookahead == 'k') ADVANCE(370);
      END_STATE();
    case 109:
      if (lookahead == 'k') ADVANCE(63);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(358);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(163);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead == 't') ADVANCE(168);
      END_STATE();
    case 114:
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 115:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 116:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 117:
      if (lookahead == 'm') ADVANCE(76);
      END_STATE();
    case 118:
      if (lookahead == 'm') ADVANCE(366);
      END_STATE();
    case 119:
      if (lookahead == 'm') ADVANCE(145);
      if (lookahead == 'n') ADVANCE(319);
      END_STATE();
    case 120:
      if (lookahead == 'm') ADVANCE(102);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(166);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(355);
      END_STATE();
    case 124:
      if (lookahead == 'n') ADVANCE(364);
      END_STATE();
    case 125:
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 127:
      if (lookahead == 'n') ADVANCE(357);
      END_STATE();
    case 128:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 129:
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 135:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 136:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 137:
      if (lookahead == 'o') ADVANCE(124);
      END_STATE();
    case 138:
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 139:
      if (lookahead == 'o') ADVANCE(151);
      END_STATE();
    case 140:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 141:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 142:
      if (lookahead == 'p') ADVANCE(341);
      if (lookahead == 'y') ADVANCE(70);
      END_STATE();
    case 143:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 144:
      if (lookahead == 'p') ADVANCE(79);
      END_STATE();
    case 145:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 146:
      if (lookahead == 'q') ADVANCE(169);
      END_STATE();
    case 147:
      if (lookahead == 'r') ADVANCE(164);
      END_STATE();
    case 148:
      if (lookahead == 'r') ADVANCE(167);
      END_STATE();
    case 149:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 150:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 151:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 152:
      if (lookahead == 'r') ADVANCE(126);
      END_STATE();
    case 153:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 154:
      if (lookahead == 's') ADVANCE(371);
      END_STATE();
    case 155:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 156:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 157:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 158:
      if (lookahead == 't') ADVANCE(375);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(201);
      END_STATE();
    case 160:
      if (lookahead == 't') ADVANCE(362);
      END_STATE();
    case 161:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 164:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 167:
      if (lookahead == 'u') ADVANCE(75);
      END_STATE();
    case 168:
      if (lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 169:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 170:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 171:
      if (lookahead == 'v') ADVANCE(84);
      END_STATE();
    case 172:
      if (lookahead == 'v') ADVANCE(65);
      END_STATE();
    case 173:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 174:
      if (lookahead == 'y') ADVANCE(130);
      END_STATE();
    case 175:
      if (lookahead == 'y') ADVANCE(144);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(176);
      END_STATE();
    case 178:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == '\'') ADVANCE(307);
      if (lookahead == 'U') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead == 'x') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(177);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 195:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(195);
      if (lookahead == '`') ADVANCE(309);
      END_STATE();
    case 196:
      if (eof) ADVANCE(198);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(349);
      if (lookahead == '$') ADVANCE(353);
      if (lookahead == '%') ADVANCE(327);
      if (lookahead == '&') ADVANCE(331);
      if (lookahead == '\'') ADVANCE(25);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == '*') ADVANCE(325);
      if (lookahead == '+') ADVANCE(321);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(322);
      if (lookahead == '.') ADVANCE(287);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == '0') ADVANCE(299);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '<') ADVANCE(315);
      if (lookahead == '=') ADVANCE(281);
      if (lookahead == '>') ADVANCE(317);
      if (lookahead == '[') ADVANCE(337);
      if (lookahead == ']') ADVANCE(338);
      if (lookahead == '^') ADVANCE(343);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'e') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'm') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead == 'o') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(57);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 't') ADVANCE(175);
      if (lookahead == 'u') ADVANCE(129);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '|') ADVANCE(323);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '~') ADVANCE(324);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(196)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 197:
      if (eof) ADVANCE(198);
      if (lookahead == '"') ADVANCE(203);
      if (lookahead == '#') ADVANCE(348);
      if (lookahead == '(') ADVANCE(290);
      if (lookahead == ')') ADVANCE(291);
      if (lookahead == ',') ADVANCE(210);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == '/') ADVANCE(326);
      if (lookahead == ':') ADVANCE(204);
      if (lookahead == ';') ADVANCE(279);
      if (lookahead == '=') ADVANCE(280);
      if (lookahead == '[') ADVANCE(336);
      if (lookahead == ']') ADVANCE(338);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'i') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(271);
      if (lookahead == '{') ADVANCE(277);
      if (lookahead == '}') ADVANCE(278);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(197)
      END_STATE();
    case 198:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'f') ADVANCE(255);
      if (lookahead == 's') ADVANCE(263);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'y') ADVANCE(237);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'u') ADVANCE(249);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(202);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(211);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(363);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(345);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(374);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(241);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 't') ADVANCE(217);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'r') ADVANCE(220);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'r') ADVANCE(240);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'q') ADVANCE(218);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'p') ADVANCE(239);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'p') ADVANCE(342);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'p') ADVANCE(262);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'o') ADVANCE(230);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'o') ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'n') ADVANCE(215);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'n') ADVANCE(365);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'n') ADVANCE(258);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'n') ADVANCE(253);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'm') ADVANCE(367);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'l') ADVANCE(266);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'k') ADVANCE(272);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'i') ADVANCE(265);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'i') ADVANCE(242);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'i') ADVANCE(261);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'i') ADVANCE(246);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'g') ADVANCE(361);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'e') ADVANCE(347);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'e') ADVANCE(250);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'd') ADVANCE(354);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'd') ADVANCE(369);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'c') ADVANCE(251);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'c') ADVANCE(208);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'c') ADVANCE(222);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'c') ADVANCE(274);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(313);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(377);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(312);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(376);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(304);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == '_') ADVANCE(292);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'h') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(305);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'z') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(296);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(27);
      if (lookahead == '_') ADVANCE(294);
      if (lookahead == 'b') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'o') ADVANCE(30);
      if (lookahead == 'z') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(301);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(300);
      if (lookahead == '_') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(303);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_rune_literal);
      if (lookahead == '\'') ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(195);
      if (lookahead == '`') ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_range_op);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_range_op);
      if (lookahead == '<') ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(329);
      if (lookahead == '=') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(318);
      if (lookahead == '>') ADVANCE(330);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_not_in);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(209);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(333);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(310);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(328);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(334);
      if (lookahead == '~') ADVANCE(332);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(anon_sym_AMP_TILDE);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_POUNDpartial);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(339);
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_LBRACKdynamic_RBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_bit_set);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_bit_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_opaque);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_simd);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_relative);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_packed);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_raw_union);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_no_nil);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_maybe);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_bit_field);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_bit_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_optional_ok);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_no_alias);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_c_vararg);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_auto_cast);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_auto_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(276);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '<') ADVANCE(311);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 197, .external_lex_state = 1},
  [2] = {.lex_state = 1, .external_lex_state = 1},
  [3] = {.lex_state = 1, .external_lex_state = 1},
  [4] = {.lex_state = 1, .external_lex_state = 1},
  [5] = {.lex_state = 1, .external_lex_state = 1},
  [6] = {.lex_state = 1, .external_lex_state = 1},
  [7] = {.lex_state = 1, .external_lex_state = 1},
  [8] = {.lex_state = 1, .external_lex_state = 1},
  [9] = {.lex_state = 1, .external_lex_state = 1},
  [10] = {.lex_state = 1, .external_lex_state = 1},
  [11] = {.lex_state = 1, .external_lex_state = 1},
  [12] = {.lex_state = 1, .external_lex_state = 1},
  [13] = {.lex_state = 1, .external_lex_state = 1},
  [14] = {.lex_state = 1, .external_lex_state = 1},
  [15] = {.lex_state = 1, .external_lex_state = 1},
  [16] = {.lex_state = 1, .external_lex_state = 1},
  [17] = {.lex_state = 1, .external_lex_state = 1},
  [18] = {.lex_state = 1, .external_lex_state = 1},
  [19] = {.lex_state = 1, .external_lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 1},
  [21] = {.lex_state = 1, .external_lex_state = 1},
  [22] = {.lex_state = 1, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 1, .external_lex_state = 1},
  [25] = {.lex_state = 1, .external_lex_state = 1},
  [26] = {.lex_state = 1, .external_lex_state = 1},
  [27] = {.lex_state = 1, .external_lex_state = 1},
  [28] = {.lex_state = 1, .external_lex_state = 1},
  [29] = {.lex_state = 2, .external_lex_state = 1},
  [30] = {.lex_state = 2, .external_lex_state = 1},
  [31] = {.lex_state = 2, .external_lex_state = 1},
  [32] = {.lex_state = 14, .external_lex_state = 1},
  [33] = {.lex_state = 197, .external_lex_state = 1},
  [34] = {.lex_state = 2, .external_lex_state = 1},
  [35] = {.lex_state = 3, .external_lex_state = 1},
  [36] = {.lex_state = 3, .external_lex_state = 1},
  [37] = {.lex_state = 3, .external_lex_state = 1},
  [38] = {.lex_state = 3, .external_lex_state = 1},
  [39] = {.lex_state = 3, .external_lex_state = 1},
  [40] = {.lex_state = 3, .external_lex_state = 1},
  [41] = {.lex_state = 3, .external_lex_state = 1},
  [42] = {.lex_state = 14, .external_lex_state = 1},
  [43] = {.lex_state = 3, .external_lex_state = 1},
  [44] = {.lex_state = 3, .external_lex_state = 1},
  [45] = {.lex_state = 15, .external_lex_state = 1},
  [46] = {.lex_state = 3, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 3, .external_lex_state = 1},
  [49] = {.lex_state = 15, .external_lex_state = 1},
  [50] = {.lex_state = 15, .external_lex_state = 1},
  [51] = {.lex_state = 3, .external_lex_state = 1},
  [52] = {.lex_state = 15, .external_lex_state = 1},
  [53] = {.lex_state = 15, .external_lex_state = 1},
  [54] = {.lex_state = 15, .external_lex_state = 1},
  [55] = {.lex_state = 15, .external_lex_state = 1},
  [56] = {.lex_state = 3, .external_lex_state = 1},
  [57] = {.lex_state = 3, .external_lex_state = 1},
  [58] = {.lex_state = 3, .external_lex_state = 1},
  [59] = {.lex_state = 14, .external_lex_state = 1},
  [60] = {.lex_state = 3, .external_lex_state = 1},
  [61] = {.lex_state = 3, .external_lex_state = 1},
  [62] = {.lex_state = 3, .external_lex_state = 1},
  [63] = {.lex_state = 197, .external_lex_state = 1},
  [64] = {.lex_state = 197, .external_lex_state = 1},
  [65] = {.lex_state = 197, .external_lex_state = 1},
  [66] = {.lex_state = 197, .external_lex_state = 1},
  [67] = {.lex_state = 197, .external_lex_state = 1},
  [68] = {.lex_state = 197, .external_lex_state = 1},
  [69] = {.lex_state = 197, .external_lex_state = 1},
  [70] = {.lex_state = 197, .external_lex_state = 1},
  [71] = {.lex_state = 14, .external_lex_state = 1},
  [72] = {.lex_state = 197, .external_lex_state = 1},
  [73] = {.lex_state = 197, .external_lex_state = 1},
  [74] = {.lex_state = 197, .external_lex_state = 1},
  [75] = {.lex_state = 197, .external_lex_state = 1},
  [76] = {.lex_state = 197, .external_lex_state = 1},
  [77] = {.lex_state = 197, .external_lex_state = 1},
  [78] = {.lex_state = 197, .external_lex_state = 1},
  [79] = {.lex_state = 197, .external_lex_state = 1},
  [80] = {.lex_state = 197, .external_lex_state = 1},
  [81] = {.lex_state = 197, .external_lex_state = 1},
  [82] = {.lex_state = 197, .external_lex_state = 1},
  [83] = {.lex_state = 197, .external_lex_state = 1},
  [84] = {.lex_state = 197, .external_lex_state = 1},
  [85] = {.lex_state = 197, .external_lex_state = 1},
  [86] = {.lex_state = 197, .external_lex_state = 1},
  [87] = {.lex_state = 197, .external_lex_state = 1},
  [88] = {.lex_state = 2, .external_lex_state = 1},
  [89] = {.lex_state = 197, .external_lex_state = 1},
  [90] = {.lex_state = 197, .external_lex_state = 1},
  [91] = {.lex_state = 197, .external_lex_state = 1},
  [92] = {.lex_state = 197, .external_lex_state = 1},
  [93] = {.lex_state = 197, .external_lex_state = 1},
  [94] = {.lex_state = 197, .external_lex_state = 1},
  [95] = {.lex_state = 197, .external_lex_state = 1},
  [96] = {.lex_state = 197, .external_lex_state = 1},
  [97] = {.lex_state = 197, .external_lex_state = 1},
  [98] = {.lex_state = 197, .external_lex_state = 1},
  [99] = {.lex_state = 197, .external_lex_state = 1},
  [100] = {.lex_state = 197, .external_lex_state = 1},
  [101] = {.lex_state = 197, .external_lex_state = 1},
  [102] = {.lex_state = 197, .external_lex_state = 1},
  [103] = {.lex_state = 197, .external_lex_state = 1},
  [104] = {.lex_state = 197, .external_lex_state = 1},
  [105] = {.lex_state = 197, .external_lex_state = 1},
  [106] = {.lex_state = 197, .external_lex_state = 1},
  [107] = {.lex_state = 197, .external_lex_state = 1},
  [108] = {.lex_state = 197, .external_lex_state = 1},
  [109] = {.lex_state = 197, .external_lex_state = 1},
  [110] = {.lex_state = 197, .external_lex_state = 1},
  [111] = {.lex_state = 197, .external_lex_state = 1},
  [112] = {.lex_state = 197, .external_lex_state = 1},
  [113] = {.lex_state = 197, .external_lex_state = 1},
  [114] = {.lex_state = 197, .external_lex_state = 1},
  [115] = {.lex_state = 3, .external_lex_state = 1},
  [116] = {.lex_state = 15, .external_lex_state = 1},
  [117] = {.lex_state = 1, .external_lex_state = 1},
  [118] = {.lex_state = 15, .external_lex_state = 1},
  [119] = {.lex_state = 1, .external_lex_state = 1},
  [120] = {.lex_state = 1, .external_lex_state = 1},
  [121] = {.lex_state = 1, .external_lex_state = 1},
  [122] = {.lex_state = 1, .external_lex_state = 1},
  [123] = {.lex_state = 3, .external_lex_state = 1},
  [124] = {.lex_state = 1, .external_lex_state = 1},
  [125] = {.lex_state = 1, .external_lex_state = 1},
  [126] = {.lex_state = 3, .external_lex_state = 1},
  [127] = {.lex_state = 3, .external_lex_state = 1},
  [128] = {.lex_state = 3, .external_lex_state = 1},
  [129] = {.lex_state = 1, .external_lex_state = 1},
  [130] = {.lex_state = 3, .external_lex_state = 1},
  [131] = {.lex_state = 1, .external_lex_state = 1},
  [132] = {.lex_state = 3, .external_lex_state = 1},
  [133] = {.lex_state = 1, .external_lex_state = 1},
  [134] = {.lex_state = 197, .external_lex_state = 1},
  [135] = {.lex_state = 20, .external_lex_state = 1},
  [136] = {.lex_state = 20, .external_lex_state = 1},
  [137] = {.lex_state = 20, .external_lex_state = 1},
  [138] = {.lex_state = 197, .external_lex_state = 1},
  [139] = {.lex_state = 1, .external_lex_state = 1},
  [140] = {.lex_state = 20, .external_lex_state = 1},
  [141] = {.lex_state = 197, .external_lex_state = 1},
  [142] = {.lex_state = 15, .external_lex_state = 1},
  [143] = {.lex_state = 197, .external_lex_state = 1},
  [144] = {.lex_state = 197, .external_lex_state = 1},
  [145] = {.lex_state = 3, .external_lex_state = 1},
  [146] = {.lex_state = 197, .external_lex_state = 1},
  [147] = {.lex_state = 15, .external_lex_state = 1},
  [148] = {.lex_state = 197, .external_lex_state = 1},
  [149] = {.lex_state = 197, .external_lex_state = 1},
  [150] = {.lex_state = 197, .external_lex_state = 1},
  [151] = {.lex_state = 197, .external_lex_state = 1},
  [152] = {.lex_state = 197, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 0, .external_lex_state = 1},
  [155] = {.lex_state = 0, .external_lex_state = 1},
  [156] = {.lex_state = 20, .external_lex_state = 1},
  [157] = {.lex_state = 197, .external_lex_state = 1},
  [158] = {.lex_state = 197, .external_lex_state = 1},
  [159] = {.lex_state = 0, .external_lex_state = 1},
  [160] = {.lex_state = 197, .external_lex_state = 1},
  [161] = {.lex_state = 197, .external_lex_state = 1},
  [162] = {.lex_state = 0, .external_lex_state = 1},
  [163] = {.lex_state = 197, .external_lex_state = 1},
  [164] = {.lex_state = 197, .external_lex_state = 1},
  [165] = {.lex_state = 197, .external_lex_state = 1},
  [166] = {.lex_state = 1, .external_lex_state = 1},
  [167] = {.lex_state = 197, .external_lex_state = 1},
  [168] = {.lex_state = 0, .external_lex_state = 1},
  [169] = {.lex_state = 197, .external_lex_state = 1},
  [170] = {.lex_state = 3, .external_lex_state = 1},
  [171] = {.lex_state = 0, .external_lex_state = 1},
  [172] = {.lex_state = 3, .external_lex_state = 1},
  [173] = {.lex_state = 0, .external_lex_state = 1},
  [174] = {.lex_state = 197, .external_lex_state = 1},
  [175] = {.lex_state = 0, .external_lex_state = 1},
  [176] = {.lex_state = 3, .external_lex_state = 1},
  [177] = {.lex_state = 0, .external_lex_state = 1},
  [178] = {.lex_state = 0, .external_lex_state = 1},
  [179] = {.lex_state = 0, .external_lex_state = 1},
  [180] = {.lex_state = 0, .external_lex_state = 1},
  [181] = {.lex_state = 197, .external_lex_state = 1},
  [182] = {.lex_state = 197, .external_lex_state = 1},
  [183] = {.lex_state = 15, .external_lex_state = 1},
  [184] = {.lex_state = 0, .external_lex_state = 1},
  [185] = {.lex_state = 0, .external_lex_state = 1},
  [186] = {.lex_state = 0, .external_lex_state = 1},
  [187] = {.lex_state = 197, .external_lex_state = 1},
  [188] = {.lex_state = 0, .external_lex_state = 1},
  [189] = {.lex_state = 0, .external_lex_state = 1},
  [190] = {.lex_state = 0, .external_lex_state = 1},
  [191] = {.lex_state = 197, .external_lex_state = 1},
  [192] = {.lex_state = 0, .external_lex_state = 1},
  [193] = {.lex_state = 3, .external_lex_state = 1},
  [194] = {.lex_state = 0, .external_lex_state = 1},
  [195] = {.lex_state = 15, .external_lex_state = 1},
  [196] = {.lex_state = 0, .external_lex_state = 1},
  [197] = {.lex_state = 0, .external_lex_state = 1},
  [198] = {.lex_state = 0, .external_lex_state = 1},
  [199] = {.lex_state = 0, .external_lex_state = 1},
  [200] = {.lex_state = 0, .external_lex_state = 1},
  [201] = {.lex_state = 0, .external_lex_state = 1},
  [202] = {.lex_state = 0, .external_lex_state = 1},
  [203] = {.lex_state = 0, .external_lex_state = 1},
  [204] = {.lex_state = 0, .external_lex_state = 1},
  [205] = {.lex_state = 197, .external_lex_state = 1},
  [206] = {.lex_state = 3, .external_lex_state = 1},
  [207] = {.lex_state = 0, .external_lex_state = 1},
  [208] = {.lex_state = 15, .external_lex_state = 1},
  [209] = {.lex_state = 0, .external_lex_state = 1},
  [210] = {.lex_state = 197, .external_lex_state = 1},
  [211] = {.lex_state = 0, .external_lex_state = 1},
  [212] = {.lex_state = 0, .external_lex_state = 1},
  [213] = {.lex_state = 0, .external_lex_state = 1},
  [214] = {.lex_state = 3, .external_lex_state = 1},
  [215] = {.lex_state = 3, .external_lex_state = 1},
  [216] = {.lex_state = 0, .external_lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 1},
  [218] = {.lex_state = 0, .external_lex_state = 1},
  [219] = {.lex_state = 0, .external_lex_state = 1},
  [220] = {.lex_state = 0, .external_lex_state = 1},
  [221] = {.lex_state = 0, .external_lex_state = 1},
  [222] = {.lex_state = 3, .external_lex_state = 1},
  [223] = {.lex_state = 3, .external_lex_state = 1},
  [224] = {.lex_state = 3, .external_lex_state = 1},
  [225] = {.lex_state = 0, .external_lex_state = 1},
  [226] = {.lex_state = 0, .external_lex_state = 1},
  [227] = {.lex_state = 0, .external_lex_state = 1},
  [228] = {.lex_state = 0, .external_lex_state = 1},
  [229] = {.lex_state = 0, .external_lex_state = 1},
  [230] = {.lex_state = 3, .external_lex_state = 1},
  [231] = {.lex_state = 0, .external_lex_state = 1},
  [232] = {.lex_state = 3, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 0, .external_lex_state = 1},
  [235] = {.lex_state = 3, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 0, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {.lex_state = 0, .external_lex_state = 1},
  [241] = {.lex_state = 0, .external_lex_state = 1},
  [242] = {.lex_state = 0, .external_lex_state = 1},
  [243] = {.lex_state = 0, .external_lex_state = 1},
  [244] = {.lex_state = 0, .external_lex_state = 1},
  [245] = {.lex_state = 0, .external_lex_state = 1},
  [246] = {.lex_state = 0, .external_lex_state = 1},
  [247] = {.lex_state = 0, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 0, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 0, .external_lex_state = 1},
  [253] = {.lex_state = 0, .external_lex_state = 1},
  [254] = {.lex_state = 0, .external_lex_state = 1},
  [255] = {.lex_state = 0, .external_lex_state = 1},
  [256] = {.lex_state = 0, .external_lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 0, .external_lex_state = 1},
  [259] = {.lex_state = 0, .external_lex_state = 1},
  [260] = {.lex_state = 197, .external_lex_state = 1},
  [261] = {.lex_state = 0, .external_lex_state = 1},
  [262] = {.lex_state = 197, .external_lex_state = 1},
  [263] = {.lex_state = 1, .external_lex_state = 1},
  [264] = {.lex_state = 0, .external_lex_state = 1},
  [265] = {.lex_state = 0, .external_lex_state = 1},
  [266] = {.lex_state = 0, .external_lex_state = 1},
  [267] = {.lex_state = 0, .external_lex_state = 1},
  [268] = {.lex_state = 197, .external_lex_state = 1},
  [269] = {.lex_state = 0, .external_lex_state = 1},
  [270] = {.lex_state = 197, .external_lex_state = 1},
  [271] = {.lex_state = 0, .external_lex_state = 1},
  [272] = {.lex_state = 0, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 0, .external_lex_state = 1},
  [275] = {.lex_state = 3, .external_lex_state = 1},
  [276] = {.lex_state = 0, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 0, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 1, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 1, .external_lex_state = 1},
  [284] = {.lex_state = 0, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 3, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 0, .external_lex_state = 1},
  [291] = {.lex_state = 0, .external_lex_state = 1},
  [292] = {.lex_state = 3, .external_lex_state = 1},
  [293] = {.lex_state = 197, .external_lex_state = 1},
  [294] = {.lex_state = 0, .external_lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 0, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 197, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 0, .external_lex_state = 1},
  [305] = {.lex_state = 197, .external_lex_state = 1},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 197, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 0, .external_lex_state = 1},
  [310] = {.lex_state = 0, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 0, .external_lex_state = 1},
  [315] = {.lex_state = 3, .external_lex_state = 1},
  [316] = {.lex_state = 0, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 0, .external_lex_state = 1},
  [320] = {.lex_state = 197, .external_lex_state = 1},
};

enum {
  ts_external_token_block_comment = 0,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_block_comment] = sym_block_comment,
};

static bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_block_comment] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_rune_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_range_op] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not_in] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_AMP_TILDE] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_POUNDpartial] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdynamic_RBRACK] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_bit_set] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_simd] = ACTIONS(1),
    [anon_sym_relative] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_align] = ACTIONS(1),
    [anon_sym_packed] = ACTIONS(1),
    [anon_sym_raw_union] = ACTIONS(1),
    [anon_sym_no_nil] = ACTIONS(1),
    [anon_sym_maybe] = ACTIONS(1),
    [anon_sym_using] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_bit_field] = ACTIONS(1),
    [anon_sym_optional_ok] = ACTIONS(1),
    [anon_sym_no_alias] = ACTIONS(1),
    [anon_sym_c_vararg] = ACTIONS(1),
    [anon_sym_auto_cast] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(312),
    [sym__top_level_declaration] = STATE(64),
    [sym_package_clause] = STATE(64),
    [sym_import_declaration] = STATE(64),
    [sym_proc_declaration] = STATE(64),
    [aux_sym_source_file_repeat1] = STATE(64),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    STATE(139), 1,
      sym_polymorphic_name,
    STATE(178), 1,
      sym_plain_parameter_decl,
    STATE(243), 1,
      sym_plain_parameter_list,
    STATE(261), 1,
      sym__package_identifier,
    STATE(279), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    STATE(166), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [115] = 28,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    STATE(284), 1,
      sym__expression,
    STATE(289), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    STATE(288), 2,
      sym__array_length,
      sym__enumerated_array_type,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 18,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [223] = 28,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    STATE(284), 1,
      sym__expression,
    STATE(289), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    STATE(317), 2,
      sym__array_length,
      sym__enumerated_array_type,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 18,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [331] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    STATE(65), 1,
      sym_result,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    STATE(103), 2,
      sym_plain_parameters,
      sym_type,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [437] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_LBRACE,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    STATE(296), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [542] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(163), 1,
      sym_type,
    STATE(164), 1,
      sym_type_or_with_specialization,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [647] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(163), 1,
      sym_type,
    STATE(242), 1,
      sym_type_or_with_specialization,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [752] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(158), 1,
      sym_type_or_with_specialization,
    STATE(163), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [857] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(163), 1,
      sym_type,
    STATE(251), 1,
      sym_type_or_with_specialization,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [962] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(83), 1,
      sym__element_type,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(114), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1067] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(150), 1,
      sym_type_or_with_specialization,
    STATE(163), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1172] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(163), 1,
      sym_type,
    STATE(252), 1,
      sym_type_or_with_specialization,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1277] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(112), 1,
      sym__element_type,
    STATE(114), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1382] = 27,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    ACTIONS(61), 1,
      anon_sym_typeid,
    STATE(146), 1,
      sym_polymorphic_name,
    STATE(163), 1,
      sym_type,
    STATE(165), 1,
      sym_type_or_with_specialization,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1487] = 28,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(169), 1,
      sym__expression,
    STATE(240), 1,
      sym_type,
    STATE(241), 1,
      sym_bitset_key_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 18,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1594] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(229), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1696] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(106), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1798] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(84), 1,
      sym_type,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [1900] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(226), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2002] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    STATE(264), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2104] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    STATE(279), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2206] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(87), 1,
      sym_type,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2308] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(101), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2410] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(248), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2512] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(102), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2614] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(104), 1,
      sym_type,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2716] = 26,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(33), 1,
      anon_sym_map,
    ACTIONS(35), 1,
      anon_sym_CARET,
    ACTIONS(37), 1,
      anon_sym_bit_set,
    ACTIONS(39), 1,
      anon_sym_opaque,
    ACTIONS(41), 1,
      anon_sym_POUND,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(45), 1,
      anon_sym_typeid,
    ACTIONS(47), 1,
      anon_sym_struct,
    ACTIONS(49), 1,
      anon_sym_union,
    ACTIONS(51), 1,
      anon_sym_enum,
    ACTIONS(53), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(95), 1,
      sym_polymorphic_name,
    STATE(261), 1,
      sym__package_identifier,
    STATE(309), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(72), 19,
      sym__expression,
      sym_array_type,
      sym_slice_type,
      sym_dynamic_array_type,
      sym_map_type,
      sym_pointer_type,
      sym_bitset_type,
      sym_opaque_type,
      sym_simd_vector_type,
      sym_relative_pointer_type,
      sym_relative_slice_type,
      sym_struct_type,
      sym_union_type,
      sym_enum_type,
      sym_bitfield_type,
      sym_procedure_type,
      sym_helper_type,
      sym_type_name,
      sym__type_literal,
  [2818] = 10,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_RBRACE,
    ACTIONS(68), 1,
      anon_sym_return,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(71), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(29), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(74), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(266), 5,
      sym_declaration_statement,
      sym_assignment_statement,
      sym__simple_statement,
      sym_return_statement,
      sym__expression,
  [2859] = 10,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    ACTIONS(81), 1,
      anon_sym_return,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(29), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(266), 5,
      sym_declaration_statement,
      sym_assignment_statement,
      sym__simple_statement,
      sym_return_statement,
      sym__expression,
  [2900] = 10,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_return,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(30), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
    STATE(266), 5,
      sym_declaration_statement,
      sym_assignment_statement,
      sym__simple_statement,
      sym_return_statement,
      sym__expression,
  [2941] = 11,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_polymorphic_name,
    STATE(145), 1,
      sym_parameter_prefixes,
    STATE(148), 1,
      sym_parameter_decl,
    STATE(239), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(91), 2,
      anon_sym_using,
      anon_sym_auto_cast,
    STATE(125), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [2978] = 5,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(93), 9,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3003] = 3,
    ACTIONS(101), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(99), 10,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_DOT_DOT,
  [3023] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(159), 1,
      sym__expression,
    STATE(254), 1,
      sym_expression_list,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3053] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3083] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(159), 1,
      sym__expression,
    STATE(238), 1,
      sym_expression_list,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3113] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    STATE(236), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3143] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(159), 1,
      sym__expression,
    STATE(219), 1,
      sym_expression_list,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3173] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3203] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(159), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    STATE(319), 1,
      sym_expression_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3233] = 10,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_polymorphic_name,
    STATE(145), 1,
      sym_parameter_prefixes,
    STATE(148), 1,
      sym_parameter_decl,
    STATE(205), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(91), 2,
      anon_sym_using,
      anon_sym_auto_cast,
    STATE(125), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [3267] = 8,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(159), 1,
      sym__expression,
    STATE(234), 1,
      sym_expression_list,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3297] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(245), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3324] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(111), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3341] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(231), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3368] = 5,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(93), 7,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_where,
  [3391] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(261), 1,
      sym__package_identifier,
    STATE(274), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3418] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(93), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3435] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(115), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3452] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(236), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3479] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3496] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(119), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3513] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3530] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(123), 10,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      sym_range_op,
      anon_sym_RBRACK,
      anon_sym_POUND,
      anon_sym_where,
  [3547] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(216), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3574] = 7,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(261), 1,
      sym__package_identifier,
    STATE(314), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3601] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(218), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3628] = 9,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(89), 1,
      anon_sym_POUND,
    STATE(117), 1,
      sym_polymorphic_name,
    STATE(145), 1,
      sym_parameter_prefixes,
    STATE(160), 1,
      sym_parameter_decl,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(91), 2,
      anon_sym_using,
      anon_sym_auto_cast,
    STATE(125), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [3659] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(221), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3686] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(261), 1,
      sym__package_identifier,
    STATE(272), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3713] = 7,
    ACTIONS(103), 1,
      sym_identifier,
    STATE(200), 1,
      sym__expression,
    STATE(261), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(49), 2,
      sym_call_expression,
      sym__number,
    ACTIONS(23), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [3740] = 6,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_package,
    ACTIONS(132), 1,
      anon_sym_import,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [3764] = 6,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(138), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(63), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [3788] = 4,
    ACTIONS(142), 1,
      anon_sym_POUND,
    STATE(82), 1,
      sym_procedure_tags,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(140), 7,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3808] = 5,
    ACTIONS(142), 1,
      anon_sym_POUND,
    ACTIONS(144), 1,
      anon_sym_DASH_GT,
    STATE(97), 1,
      sym_procedure_tags,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(146), 6,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3830] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(148), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3845] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(150), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3860] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3875] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(154), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3890] = 7,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_argument_list,
    STATE(119), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 3,
      anon_sym_COLON,
      anon_sym_COMMA,
      anon_sym_DOT_DOT,
  [3915] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3930] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(160), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3945] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(162), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3960] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(164), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3975] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(166), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [3990] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(168), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4005] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(170), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4020] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4035] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(174), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4050] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(176), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4065] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(178), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4080] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(180), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4095] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(182), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4110] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(184), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4125] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(186), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4140] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(188), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4155] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(190), 4,
      sym_identifier,
      anon_sym_return,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(192), 4,
      anon_sym_RBRACE,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_string_literal,
  [4172] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4187] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(196), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4202] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4217] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(200), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4232] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(202), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4247] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(204), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4262] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(206), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4277] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(208), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4292] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(210), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4307] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(212), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4322] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(214), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4337] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(216), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4352] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(218), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4367] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(220), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4382] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(222), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4397] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(224), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4412] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(226), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4427] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4442] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(230), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4457] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(232), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4472] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(234), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4487] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4502] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(238), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4517] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4532] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4547] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(244), 8,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_POUND,
  [4562] = 7,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_polymorphic_name,
    STATE(253), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [4586] = 8,
    ACTIONS(250), 1,
      anon_sym_LBRACE,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      anon_sym_where,
    STATE(142), 1,
      sym_polymorphic_parameter_list,
    STATE(197), 1,
      sym_struct_type_tags,
    STATE(294), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4612] = 4,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 5,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4630] = 8,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(262), 1,
      anon_sym_LBRACE,
    ACTIONS(264), 1,
      anon_sym_POUND,
    STATE(147), 1,
      sym_polymorphic_parameter_list,
    STATE(194), 1,
      sym_union_type_tags,
    STATE(295), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4656] = 3,
    STATE(124), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 6,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4672] = 3,
    STATE(121), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 6,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4688] = 4,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(121), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 5,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4706] = 3,
    STATE(119), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(156), 6,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4722] = 7,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    STATE(182), 1,
      sym_polymorphic_name,
    STATE(253), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [4746] = 4,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 5,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4764] = 4,
    ACTIONS(282), 1,
      anon_sym_COLON,
    ACTIONS(286), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [4781] = 6,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(117), 1,
      sym_polymorphic_name,
    STATE(246), 1,
      sym_plain_parameter_decl,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(166), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [4802] = 7,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_bitfield_field,
    STATE(213), 1,
      sym_bitfield_field_list,
    STATE(271), 1,
      sym_bitfield_fields,
    STATE(307), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4825] = 6,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(182), 1,
      sym_polymorphic_name,
    STATE(204), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [4846] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 6,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4859] = 7,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(292), 1,
      anon_sym_RBRACE,
    STATE(179), 1,
      sym_bitfield_field,
    STATE(213), 1,
      sym_bitfield_field_list,
    STATE(306), 1,
      sym_bitfield_fields,
    STATE(307), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4882] = 4,
    ACTIONS(294), 1,
      anon_sym_COLON,
    ACTIONS(298), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(296), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [4899] = 6,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(182), 1,
      sym_polymorphic_name,
    STATE(253), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(320), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [4920] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(277), 6,
      anon_sym_COLON,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [4933] = 7,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    ACTIONS(300), 1,
      anon_sym_COLON,
    ACTIONS(302), 1,
      anon_sym_EQ,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4956] = 6,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_using,
    STATE(211), 1,
      sym_struct_field_decl,
    STATE(258), 1,
      sym_struct_field_list,
    STATE(270), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4976] = 6,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_using,
    STATE(211), 1,
      sym_struct_field_decl,
    STATE(237), 1,
      sym_struct_field_list,
    STATE(270), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [4996] = 6,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_using,
    STATE(211), 1,
      sym_struct_field_decl,
    STATE(257), 1,
      sym_struct_field_list,
    STATE(270), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5016] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 3,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5032] = 4,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(120), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 3,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_DOT_DOT,
  [5048] = 6,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_using,
    STATE(211), 1,
      sym_struct_field_decl,
    STATE(220), 1,
      sym_struct_field_list,
    STATE(270), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5068] = 4,
    ACTIONS(314), 1,
      anon_sym_COMMA,
    STATE(141), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 3,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5084] = 6,
    ACTIONS(254), 1,
      anon_sym_POUND,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(185), 1,
      sym_struct_type_tags,
    STATE(318), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5104] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(319), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5118] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(95), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5132] = 5,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    ACTIONS(288), 1,
      sym_identifier,
    STATE(117), 1,
      sym_polymorphic_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(131), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [5150] = 3,
    ACTIONS(321), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(206), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5164] = 6,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(264), 1,
      anon_sym_POUND,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(173), 1,
      sym_union_type_tags,
    STATE(310), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5184] = 4,
    ACTIONS(310), 1,
      anon_sym_COMMA,
    STATE(138), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(325), 3,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5200] = 3,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(329), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5213] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(331), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5224] = 3,
    ACTIONS(333), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(335), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5237] = 3,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(339), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5250] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(343), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5265] = 4,
    ACTIONS(345), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5280] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(35), 1,
      anon_sym_CARET,
    STATE(76), 1,
      sym_pointer_type,
    STATE(79), 1,
      sym_slice_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5297] = 5,
    ACTIONS(304), 1,
      sym_identifier,
    ACTIONS(306), 1,
      anon_sym_using,
    STATE(249), 1,
      sym_struct_field_decl,
    STATE(270), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5314] = 3,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(352), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5327] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(354), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5338] = 4,
    ACTIONS(341), 1,
      anon_sym_COMMA,
    STATE(153), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(356), 2,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5353] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5364] = 3,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(360), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5377] = 5,
    ACTIONS(93), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    ACTIONS(113), 1,
      anon_sym_DOT,
    STATE(50), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5394] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(362), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5405] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(364), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5416] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(366), 4,
      anon_sym_DASH_GT,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RPAREN,
  [5427] = 4,
    ACTIONS(368), 1,
      anon_sym_COLON,
    ACTIONS(372), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(370), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5442] = 3,
    ACTIONS(374), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(376), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [5455] = 5,
    ACTIONS(29), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(35), 1,
      anon_sym_CARET,
    STATE(68), 1,
      sym_pointer_type,
    STATE(100), 1,
      sym_slice_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5472] = 3,
    ACTIONS(378), 1,
      sym_range_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [5484] = 4,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(217), 1,
      sym_bitfield_field,
    STATE(307), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5498] = 4,
    ACTIONS(380), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_parameters,
    STATE(93), 1,
      sym_signature,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5512] = 4,
    ACTIONS(382), 1,
      sym_identifier,
    STATE(302), 1,
      sym__collection_identifier,
    STATE(303), 1,
      sym_package_import,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5526] = 4,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    STATE(278), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5540] = 3,
    ACTIONS(388), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(386), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [5552] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(199), 1,
      aux_sym_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5566] = 4,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(175), 1,
      sym_element,
    STATE(227), 1,
      sym_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5580] = 4,
    ACTIONS(396), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_plain_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5594] = 4,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(403), 1,
      anon_sym_RPAREN,
    STATE(207), 1,
      aux_sym_plain_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5608] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(407), 1,
      anon_sym_RBRACE,
    STATE(189), 1,
      aux_sym_bitfield_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5622] = 4,
    ACTIONS(409), 1,
      anon_sym_simd,
    ACTIONS(411), 1,
      anon_sym_relative,
    ACTIONS(413), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5636] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    ACTIONS(417), 1,
      anon_sym_POUND,
    STATE(298), 1,
      sym_bitfield_tags,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5650] = 4,
    ACTIONS(258), 1,
      anon_sym_COLON,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    STATE(210), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5664] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(419), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_where,
  [5674] = 4,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5688] = 4,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    STATE(282), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5702] = 4,
    ACTIONS(425), 1,
      anon_sym_COMMA,
    ACTIONS(428), 1,
      anon_sym_RPAREN,
    STATE(186), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5716] = 4,
    ACTIONS(156), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(191), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5730] = 4,
    ACTIONS(432), 1,
      anon_sym_COMMA,
    ACTIONS(435), 1,
      anon_sym_RPAREN,
    STATE(188), 1,
      aux_sym_polymorphic_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5744] = 4,
    ACTIONS(405), 1,
      anon_sym_COMMA,
    ACTIONS(437), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_bitfield_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5758] = 4,
    ACTIONS(439), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_struct_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5772] = 4,
    ACTIONS(266), 1,
      anon_sym_COLON,
    ACTIONS(430), 1,
      anon_sym_COMMA,
    STATE(124), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5786] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(444), 3,
      anon_sym_no_alias,
      anon_sym_c_vararg,
      anon_sym_const,
  [5796] = 4,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(175), 1,
      sym_element,
    STATE(247), 1,
      sym_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5810] = 4,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    STATE(310), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5824] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_where,
  [5834] = 3,
    ACTIONS(448), 1,
      anon_sym_align,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(450), 2,
      anon_sym_no_nil,
      anon_sym_maybe,
  [5846] = 4,
    ACTIONS(256), 1,
      anon_sym_where,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    STATE(318), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5860] = 4,
    ACTIONS(452), 1,
      anon_sym_COMMA,
    ACTIONS(455), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5874] = 4,
    ACTIONS(390), 1,
      anon_sym_COMMA,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(198), 1,
      aux_sym_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5888] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(348), 3,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [5898] = 3,
    ACTIONS(459), 1,
      anon_sym_align,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 2,
      anon_sym_packed,
      anon_sym_raw_union,
  [5910] = 4,
    ACTIONS(463), 1,
      anon_sym_COMMA,
    ACTIONS(465), 1,
      anon_sym_RPAREN,
    STATE(184), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5924] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RBRACE,
    STATE(190), 1,
      aux_sym_struct_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5938] = 4,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    ACTIONS(473), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_polymorphic_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5952] = 4,
    ACTIONS(475), 1,
      anon_sym_DASH_GT,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(152), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5966] = 4,
    ACTIONS(25), 1,
      anon_sym_POUNDpartial,
    ACTIONS(479), 1,
      anon_sym_LBRACK,
    STATE(90), 1,
      sym_array_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5980] = 4,
    ACTIONS(401), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(177), 1,
      aux_sym_plain_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [5994] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(483), 3,
      anon_sym_LBRACE,
      anon_sym_POUND,
      anon_sym_where,
  [6004] = 4,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
    ACTIONS(485), 1,
      anon_sym_COMMA,
    STATE(188), 1,
      aux_sym_polymorphic_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6018] = 4,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(268), 1,
      anon_sym_COLON,
    STATE(121), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6032] = 4,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(487), 1,
      anon_sym_RBRACE,
    STATE(203), 1,
      aux_sym_struct_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6046] = 4,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RBRACE,
    STATE(212), 1,
      aux_sym_bitfield_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6060] = 3,
    ACTIONS(494), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6071] = 3,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(244), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6082] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(500), 2,
      sym_identifier,
      anon_sym_DOLLAR,
  [6091] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(502), 2,
      anon_sym_LBRACE,
      anon_sym_where,
  [6100] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6109] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(504), 2,
      anon_sym_LBRACE,
      anon_sym_where,
  [6118] = 3,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6129] = 3,
    ACTIONS(510), 1,
      anon_sym_COMMA,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6140] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6149] = 3,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(293), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6160] = 3,
    ACTIONS(394), 1,
      sym_identifier,
    STATE(228), 1,
      sym_element,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6171] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(516), 2,
      sym_identifier,
      anon_sym_DOLLAR,
  [6180] = 3,
    ACTIONS(43), 1,
      anon_sym_DOLLAR,
    STATE(129), 1,
      sym_polymorphic_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6191] = 3,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6202] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6213] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(455), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6222] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(526), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6231] = 3,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(287), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6242] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(530), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6251] = 3,
    ACTIONS(498), 1,
      sym_identifier,
    STATE(299), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6262] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(532), 2,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [6271] = 3,
    ACTIONS(534), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6282] = 3,
    ACTIONS(528), 1,
      sym_identifier,
    STATE(167), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6293] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(428), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6302] = 3,
    ACTIONS(538), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6313] = 3,
    ACTIONS(542), 1,
      anon_sym_COMMA,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6324] = 3,
    ACTIONS(546), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6335] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(550), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [6344] = 3,
    ACTIONS(552), 1,
      anon_sym_SEMI,
    ACTIONS(554), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6355] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(556), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6364] = 3,
    ACTIONS(558), 1,
      anon_sym_COMMA,
    ACTIONS(560), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6375] = 3,
    ACTIONS(477), 1,
      anon_sym_LBRACE,
    STATE(149), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6386] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(562), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [6395] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(399), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6404] = 3,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(566), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6415] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(568), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6424] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(442), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [6433] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(570), 2,
      anon_sym_LBRACE,
      anon_sym_where,
  [6442] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(572), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6451] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(574), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6460] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(435), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [6469] = 3,
    ACTIONS(576), 1,
      anon_sym_COMMA,
    ACTIONS(578), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6480] = 3,
    ACTIONS(97), 1,
      anon_sym_LPAREN,
    STATE(55), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6491] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(580), 2,
      anon_sym_LBRACE,
      anon_sym_where,
  [6500] = 3,
    ACTIONS(582), 1,
      anon_sym_COMMA,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6511] = 3,
    ACTIONS(586), 1,
      anon_sym_COMMA,
    ACTIONS(588), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6522] = 2,
    ACTIONS(590), 1,
      anon_sym_align,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6530] = 2,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6538] = 2,
    ACTIONS(594), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6546] = 2,
    ACTIONS(596), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6554] = 2,
    ACTIONS(598), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6562] = 2,
    ACTIONS(600), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6570] = 2,
    ACTIONS(584), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6578] = 2,
    ACTIONS(602), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6586] = 2,
    ACTIONS(604), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6594] = 2,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6602] = 2,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6610] = 2,
    ACTIONS(608), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6618] = 2,
    ACTIONS(610), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6626] = 2,
    ACTIONS(612), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6634] = 2,
    ACTIONS(614), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6642] = 2,
    ACTIONS(616), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6650] = 2,
    ACTIONS(618), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6658] = 2,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6666] = 2,
    ACTIONS(524), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6674] = 2,
    ACTIONS(622), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6682] = 2,
    ACTIONS(624), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6690] = 2,
    ACTIONS(298), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6698] = 2,
    ACTIONS(508), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6706] = 2,
    ACTIONS(626), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6714] = 2,
    ACTIONS(628), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6722] = 2,
    ACTIONS(630), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6730] = 2,
    ACTIONS(632), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6738] = 2,
    ACTIONS(634), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6746] = 2,
    ACTIONS(636), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6754] = 2,
    ACTIONS(638), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6762] = 2,
    ACTIONS(640), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6770] = 2,
    ACTIONS(642), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6778] = 2,
    ACTIONS(512), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6786] = 2,
    ACTIONS(644), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6794] = 2,
    ACTIONS(646), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6802] = 2,
    ACTIONS(317), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6810] = 2,
    ACTIONS(323), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6818] = 2,
    ACTIONS(648), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6826] = 2,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6834] = 2,
    ACTIONS(650), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6842] = 2,
    ACTIONS(652), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6850] = 2,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6858] = 2,
    ACTIONS(654), 1,
      anon_sym_optional_ok,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6866] = 2,
    ACTIONS(656), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6874] = 2,
    ACTIONS(658), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6882] = 2,
    ACTIONS(660), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6890] = 2,
    ACTIONS(662), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6898] = 2,
    ACTIONS(290), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6906] = 2,
    ACTIONS(664), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6914] = 2,
    ACTIONS(666), 1,
      anon_sym_proc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6922] = 2,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6930] = 2,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6938] = 2,
    ACTIONS(670), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6946] = 2,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6954] = 2,
    ACTIONS(674), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6962] = 2,
    ACTIONS(676), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6970] = 2,
    ACTIONS(678), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6978] = 2,
    ACTIONS(680), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6986] = 2,
    ACTIONS(682), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [6994] = 2,
    ACTIONS(423), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7002] = 2,
    ACTIONS(684), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [7010] = 2,
    ACTIONS(686), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 115,
  [SMALL_STATE(4)] = 223,
  [SMALL_STATE(5)] = 331,
  [SMALL_STATE(6)] = 437,
  [SMALL_STATE(7)] = 542,
  [SMALL_STATE(8)] = 647,
  [SMALL_STATE(9)] = 752,
  [SMALL_STATE(10)] = 857,
  [SMALL_STATE(11)] = 962,
  [SMALL_STATE(12)] = 1067,
  [SMALL_STATE(13)] = 1172,
  [SMALL_STATE(14)] = 1277,
  [SMALL_STATE(15)] = 1382,
  [SMALL_STATE(16)] = 1487,
  [SMALL_STATE(17)] = 1594,
  [SMALL_STATE(18)] = 1696,
  [SMALL_STATE(19)] = 1798,
  [SMALL_STATE(20)] = 1900,
  [SMALL_STATE(21)] = 2002,
  [SMALL_STATE(22)] = 2104,
  [SMALL_STATE(23)] = 2206,
  [SMALL_STATE(24)] = 2308,
  [SMALL_STATE(25)] = 2410,
  [SMALL_STATE(26)] = 2512,
  [SMALL_STATE(27)] = 2614,
  [SMALL_STATE(28)] = 2716,
  [SMALL_STATE(29)] = 2818,
  [SMALL_STATE(30)] = 2859,
  [SMALL_STATE(31)] = 2900,
  [SMALL_STATE(32)] = 2941,
  [SMALL_STATE(33)] = 2978,
  [SMALL_STATE(34)] = 3003,
  [SMALL_STATE(35)] = 3023,
  [SMALL_STATE(36)] = 3053,
  [SMALL_STATE(37)] = 3083,
  [SMALL_STATE(38)] = 3113,
  [SMALL_STATE(39)] = 3143,
  [SMALL_STATE(40)] = 3173,
  [SMALL_STATE(41)] = 3203,
  [SMALL_STATE(42)] = 3233,
  [SMALL_STATE(43)] = 3267,
  [SMALL_STATE(44)] = 3297,
  [SMALL_STATE(45)] = 3324,
  [SMALL_STATE(46)] = 3341,
  [SMALL_STATE(47)] = 3368,
  [SMALL_STATE(48)] = 3391,
  [SMALL_STATE(49)] = 3418,
  [SMALL_STATE(50)] = 3435,
  [SMALL_STATE(51)] = 3452,
  [SMALL_STATE(52)] = 3479,
  [SMALL_STATE(53)] = 3496,
  [SMALL_STATE(54)] = 3513,
  [SMALL_STATE(55)] = 3530,
  [SMALL_STATE(56)] = 3547,
  [SMALL_STATE(57)] = 3574,
  [SMALL_STATE(58)] = 3601,
  [SMALL_STATE(59)] = 3628,
  [SMALL_STATE(60)] = 3659,
  [SMALL_STATE(61)] = 3686,
  [SMALL_STATE(62)] = 3713,
  [SMALL_STATE(63)] = 3740,
  [SMALL_STATE(64)] = 3764,
  [SMALL_STATE(65)] = 3788,
  [SMALL_STATE(66)] = 3808,
  [SMALL_STATE(67)] = 3830,
  [SMALL_STATE(68)] = 3845,
  [SMALL_STATE(69)] = 3860,
  [SMALL_STATE(70)] = 3875,
  [SMALL_STATE(71)] = 3890,
  [SMALL_STATE(72)] = 3915,
  [SMALL_STATE(73)] = 3930,
  [SMALL_STATE(74)] = 3945,
  [SMALL_STATE(75)] = 3960,
  [SMALL_STATE(76)] = 3975,
  [SMALL_STATE(77)] = 3990,
  [SMALL_STATE(78)] = 4005,
  [SMALL_STATE(79)] = 4020,
  [SMALL_STATE(80)] = 4035,
  [SMALL_STATE(81)] = 4050,
  [SMALL_STATE(82)] = 4065,
  [SMALL_STATE(83)] = 4080,
  [SMALL_STATE(84)] = 4095,
  [SMALL_STATE(85)] = 4110,
  [SMALL_STATE(86)] = 4125,
  [SMALL_STATE(87)] = 4140,
  [SMALL_STATE(88)] = 4155,
  [SMALL_STATE(89)] = 4172,
  [SMALL_STATE(90)] = 4187,
  [SMALL_STATE(91)] = 4202,
  [SMALL_STATE(92)] = 4217,
  [SMALL_STATE(93)] = 4232,
  [SMALL_STATE(94)] = 4247,
  [SMALL_STATE(95)] = 4262,
  [SMALL_STATE(96)] = 4277,
  [SMALL_STATE(97)] = 4292,
  [SMALL_STATE(98)] = 4307,
  [SMALL_STATE(99)] = 4322,
  [SMALL_STATE(100)] = 4337,
  [SMALL_STATE(101)] = 4352,
  [SMALL_STATE(102)] = 4367,
  [SMALL_STATE(103)] = 4382,
  [SMALL_STATE(104)] = 4397,
  [SMALL_STATE(105)] = 4412,
  [SMALL_STATE(106)] = 4427,
  [SMALL_STATE(107)] = 4442,
  [SMALL_STATE(108)] = 4457,
  [SMALL_STATE(109)] = 4472,
  [SMALL_STATE(110)] = 4487,
  [SMALL_STATE(111)] = 4502,
  [SMALL_STATE(112)] = 4517,
  [SMALL_STATE(113)] = 4532,
  [SMALL_STATE(114)] = 4547,
  [SMALL_STATE(115)] = 4562,
  [SMALL_STATE(116)] = 4586,
  [SMALL_STATE(117)] = 4612,
  [SMALL_STATE(118)] = 4630,
  [SMALL_STATE(119)] = 4656,
  [SMALL_STATE(120)] = 4672,
  [SMALL_STATE(121)] = 4688,
  [SMALL_STATE(122)] = 4706,
  [SMALL_STATE(123)] = 4722,
  [SMALL_STATE(124)] = 4746,
  [SMALL_STATE(125)] = 4764,
  [SMALL_STATE(126)] = 4781,
  [SMALL_STATE(127)] = 4802,
  [SMALL_STATE(128)] = 4825,
  [SMALL_STATE(129)] = 4846,
  [SMALL_STATE(130)] = 4859,
  [SMALL_STATE(131)] = 4882,
  [SMALL_STATE(132)] = 4899,
  [SMALL_STATE(133)] = 4920,
  [SMALL_STATE(134)] = 4933,
  [SMALL_STATE(135)] = 4956,
  [SMALL_STATE(136)] = 4976,
  [SMALL_STATE(137)] = 4996,
  [SMALL_STATE(138)] = 5016,
  [SMALL_STATE(139)] = 5032,
  [SMALL_STATE(140)] = 5048,
  [SMALL_STATE(141)] = 5068,
  [SMALL_STATE(142)] = 5084,
  [SMALL_STATE(143)] = 5104,
  [SMALL_STATE(144)] = 5118,
  [SMALL_STATE(145)] = 5132,
  [SMALL_STATE(146)] = 5150,
  [SMALL_STATE(147)] = 5164,
  [SMALL_STATE(148)] = 5184,
  [SMALL_STATE(149)] = 5200,
  [SMALL_STATE(150)] = 5213,
  [SMALL_STATE(151)] = 5224,
  [SMALL_STATE(152)] = 5237,
  [SMALL_STATE(153)] = 5250,
  [SMALL_STATE(154)] = 5265,
  [SMALL_STATE(155)] = 5280,
  [SMALL_STATE(156)] = 5297,
  [SMALL_STATE(157)] = 5314,
  [SMALL_STATE(158)] = 5327,
  [SMALL_STATE(159)] = 5338,
  [SMALL_STATE(160)] = 5353,
  [SMALL_STATE(161)] = 5364,
  [SMALL_STATE(162)] = 5377,
  [SMALL_STATE(163)] = 5394,
  [SMALL_STATE(164)] = 5405,
  [SMALL_STATE(165)] = 5416,
  [SMALL_STATE(166)] = 5427,
  [SMALL_STATE(167)] = 5442,
  [SMALL_STATE(168)] = 5455,
  [SMALL_STATE(169)] = 5472,
  [SMALL_STATE(170)] = 5484,
  [SMALL_STATE(171)] = 5498,
  [SMALL_STATE(172)] = 5512,
  [SMALL_STATE(173)] = 5526,
  [SMALL_STATE(174)] = 5540,
  [SMALL_STATE(175)] = 5552,
  [SMALL_STATE(176)] = 5566,
  [SMALL_STATE(177)] = 5580,
  [SMALL_STATE(178)] = 5594,
  [SMALL_STATE(179)] = 5608,
  [SMALL_STATE(180)] = 5622,
  [SMALL_STATE(181)] = 5636,
  [SMALL_STATE(182)] = 5650,
  [SMALL_STATE(183)] = 5664,
  [SMALL_STATE(184)] = 5674,
  [SMALL_STATE(185)] = 5688,
  [SMALL_STATE(186)] = 5702,
  [SMALL_STATE(187)] = 5716,
  [SMALL_STATE(188)] = 5730,
  [SMALL_STATE(189)] = 5744,
  [SMALL_STATE(190)] = 5758,
  [SMALL_STATE(191)] = 5772,
  [SMALL_STATE(192)] = 5786,
  [SMALL_STATE(193)] = 5796,
  [SMALL_STATE(194)] = 5810,
  [SMALL_STATE(195)] = 5824,
  [SMALL_STATE(196)] = 5834,
  [SMALL_STATE(197)] = 5846,
  [SMALL_STATE(198)] = 5860,
  [SMALL_STATE(199)] = 5874,
  [SMALL_STATE(200)] = 5888,
  [SMALL_STATE(201)] = 5898,
  [SMALL_STATE(202)] = 5910,
  [SMALL_STATE(203)] = 5924,
  [SMALL_STATE(204)] = 5938,
  [SMALL_STATE(205)] = 5952,
  [SMALL_STATE(206)] = 5966,
  [SMALL_STATE(207)] = 5980,
  [SMALL_STATE(208)] = 5994,
  [SMALL_STATE(209)] = 6004,
  [SMALL_STATE(210)] = 6018,
  [SMALL_STATE(211)] = 6032,
  [SMALL_STATE(212)] = 6046,
  [SMALL_STATE(213)] = 6060,
  [SMALL_STATE(214)] = 6071,
  [SMALL_STATE(215)] = 6082,
  [SMALL_STATE(216)] = 6091,
  [SMALL_STATE(217)] = 6100,
  [SMALL_STATE(218)] = 6109,
  [SMALL_STATE(219)] = 6118,
  [SMALL_STATE(220)] = 6129,
  [SMALL_STATE(221)] = 6140,
  [SMALL_STATE(222)] = 6149,
  [SMALL_STATE(223)] = 6160,
  [SMALL_STATE(224)] = 6171,
  [SMALL_STATE(225)] = 6180,
  [SMALL_STATE(226)] = 6191,
  [SMALL_STATE(227)] = 6202,
  [SMALL_STATE(228)] = 6213,
  [SMALL_STATE(229)] = 6222,
  [SMALL_STATE(230)] = 6231,
  [SMALL_STATE(231)] = 6242,
  [SMALL_STATE(232)] = 6251,
  [SMALL_STATE(233)] = 6262,
  [SMALL_STATE(234)] = 6271,
  [SMALL_STATE(235)] = 6282,
  [SMALL_STATE(236)] = 6293,
  [SMALL_STATE(237)] = 6302,
  [SMALL_STATE(238)] = 6313,
  [SMALL_STATE(239)] = 6324,
  [SMALL_STATE(240)] = 6335,
  [SMALL_STATE(241)] = 6344,
  [SMALL_STATE(242)] = 6355,
  [SMALL_STATE(243)] = 6364,
  [SMALL_STATE(244)] = 6375,
  [SMALL_STATE(245)] = 6386,
  [SMALL_STATE(246)] = 6395,
  [SMALL_STATE(247)] = 6404,
  [SMALL_STATE(248)] = 6415,
  [SMALL_STATE(249)] = 6424,
  [SMALL_STATE(250)] = 6433,
  [SMALL_STATE(251)] = 6442,
  [SMALL_STATE(252)] = 6451,
  [SMALL_STATE(253)] = 6460,
  [SMALL_STATE(254)] = 6469,
  [SMALL_STATE(255)] = 6480,
  [SMALL_STATE(256)] = 6491,
  [SMALL_STATE(257)] = 6500,
  [SMALL_STATE(258)] = 6511,
  [SMALL_STATE(259)] = 6522,
  [SMALL_STATE(260)] = 6530,
  [SMALL_STATE(261)] = 6538,
  [SMALL_STATE(262)] = 6546,
  [SMALL_STATE(263)] = 6554,
  [SMALL_STATE(264)] = 6562,
  [SMALL_STATE(265)] = 6570,
  [SMALL_STATE(266)] = 6578,
  [SMALL_STATE(267)] = 6586,
  [SMALL_STATE(268)] = 6594,
  [SMALL_STATE(269)] = 6602,
  [SMALL_STATE(270)] = 6610,
  [SMALL_STATE(271)] = 6618,
  [SMALL_STATE(272)] = 6626,
  [SMALL_STATE(273)] = 6634,
  [SMALL_STATE(274)] = 6642,
  [SMALL_STATE(275)] = 6650,
  [SMALL_STATE(276)] = 6658,
  [SMALL_STATE(277)] = 6666,
  [SMALL_STATE(278)] = 6674,
  [SMALL_STATE(279)] = 6682,
  [SMALL_STATE(280)] = 6690,
  [SMALL_STATE(281)] = 6698,
  [SMALL_STATE(282)] = 6706,
  [SMALL_STATE(283)] = 6714,
  [SMALL_STATE(284)] = 6722,
  [SMALL_STATE(285)] = 6730,
  [SMALL_STATE(286)] = 6738,
  [SMALL_STATE(287)] = 6746,
  [SMALL_STATE(288)] = 6754,
  [SMALL_STATE(289)] = 6762,
  [SMALL_STATE(290)] = 6770,
  [SMALL_STATE(291)] = 6778,
  [SMALL_STATE(292)] = 6786,
  [SMALL_STATE(293)] = 6794,
  [SMALL_STATE(294)] = 6802,
  [SMALL_STATE(295)] = 6810,
  [SMALL_STATE(296)] = 6818,
  [SMALL_STATE(297)] = 6826,
  [SMALL_STATE(298)] = 6834,
  [SMALL_STATE(299)] = 6842,
  [SMALL_STATE(300)] = 6850,
  [SMALL_STATE(301)] = 6858,
  [SMALL_STATE(302)] = 6866,
  [SMALL_STATE(303)] = 6874,
  [SMALL_STATE(304)] = 6882,
  [SMALL_STATE(305)] = 6890,
  [SMALL_STATE(306)] = 6898,
  [SMALL_STATE(307)] = 6906,
  [SMALL_STATE(308)] = 6914,
  [SMALL_STATE(309)] = 6922,
  [SMALL_STATE(310)] = 6930,
  [SMALL_STATE(311)] = 6938,
  [SMALL_STATE(312)] = 6946,
  [SMALL_STATE(313)] = 6954,
  [SMALL_STATE(314)] = 6962,
  [SMALL_STATE(315)] = 6970,
  [SMALL_STATE(316)] = 6978,
  [SMALL_STATE(317)] = 6986,
  [SMALL_STATE(318)] = 6994,
  [SMALL_STATE(319)] = 7002,
  [SMALL_STATE(320)] = 7010,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(134),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(48),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(49),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_name, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polymorphic_name, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 10),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(235),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(316),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(315),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_pointer_type, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 8),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 7),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_pointer_type, 7),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 8),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_slice_type, 7),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameters, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameters, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 5),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_helper_type, 3),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 6),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simd_vector_type, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 5),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_type, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 6),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_slice_type, 6),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opaque_type, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 5),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_tags, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameters, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_type, 6),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_type, 4),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_type, 1, .production_id = 11),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_name_list, 1),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_name_list, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_polymorphic_name_list_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_polymorphic_name_list_repeat1, 2), SHIFT_REPEAT(225),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(286),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 2),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(59),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 1),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [331] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 4),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(62),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_or_with_specialization, 3),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 4),
  [362] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_or_with_specialization, 1),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 3),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 5),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_decl, 1),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_clause, 2),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_clause, 2),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_list, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [396] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_parameter_list_repeat1, 2), SHIFT_REPEAT(126),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_parameter_list_repeat1, 2),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_list, 1),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_field_list, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter_list, 4),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(51),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [432] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_polymorphic_parameter_list_repeat1, 2), SHIFT_REPEAT(132),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_polymorphic_parameter_list_repeat1, 2),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_field_list, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_list_repeat1, 2), SHIFT_REPEAT(156),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_list_repeat1, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter_list, 5),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [452] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_list_repeat1, 2), SHIFT_REPEAT(223),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_list_repeat1, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_list, 2),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_list, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [481] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_list, 2),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter_list, 3),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_list, 1),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_field_list_repeat1, 2), SHIFT_REPEAT(170),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_field_list_repeat1, 2),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_fields, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [500] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_prefixes, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type_tags, 3),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_tags, 3),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_field, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_prefixes, 1),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_decl, 4),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_key_type, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_decl, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_key_type, 3),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_decl, 3),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_tags, 2),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter, 3),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_decl, 4),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type_tags, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_tags, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_fields, 2),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_length, 1, .production_id = 8),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3, .production_id = 3),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_array_type, 1, .production_id = 9),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_identifier, 1, .production_id = 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [672] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_odin_external_scanner_create(void);
void tree_sitter_odin_external_scanner_destroy(void *);
bool tree_sitter_odin_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_odin_external_scanner_serialize(void *, char *);
void tree_sitter_odin_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_odin(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_odin_external_scanner_create,
      tree_sitter_odin_external_scanner_destroy,
      tree_sitter_odin_external_scanner_scan,
      tree_sitter_odin_external_scanner_serialize,
      tree_sitter_odin_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
