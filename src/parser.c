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

#define LANGUAGE_VERSION 11
#define STATE_COUNT 436
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 195
#define ALIAS_COUNT 4
#define TOKEN_COUNT 93
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_SEMI = 1,
  anon_sym_package = 2,
  anon_sym_POUND = 3,
  anon_sym_assert = 4,
  anon_sym_panic = 5,
  anon_sym_import = 6,
  anon_sym_foreign = 7,
  anon_sym_LBRACE = 8,
  anon_sym_COMMA = 9,
  anon_sym_RBRACE = 10,
  sym_identifier = 11,
  anon_sym_bounds_check = 12,
  anon_sym_no_bounds_check = 13,
  anon_sym_proc = 14,
  anon_sym_return = 15,
  anon_sym_EQ = 16,
  anon_sym_distinct = 17,
  anon_sym_LPAREN = 18,
  anon_sym_RPAREN = 19,
  anon_sym_COLON = 20,
  anon_sym_AT = 21,
  anon_sym_QMARK = 22,
  anon_sym_if = 23,
  anon_sym_else = 24,
  anon_sym_when = 25,
  anon_sym_DOT_DOT = 26,
  sym_int_literal = 27,
  sym_float_literal = 28,
  sym_imaginary_literal = 29,
  sym_rune_lit = 30,
  sym_string_lit = 31,
  sym_line_comment = 32,
  sym_range_op = 33,
  anon_sym_EQ_EQ = 34,
  anon_sym_BANG_EQ = 35,
  anon_sym_LT = 36,
  anon_sym_LT_EQ = 37,
  anon_sym_GT = 38,
  anon_sym_GT_EQ = 39,
  anon_sym_in = 40,
  anon_sym_not_in = 41,
  anon_sym_PLUS = 42,
  anon_sym_DASH = 43,
  anon_sym_PIPE = 44,
  anon_sym_TILDE = 45,
  anon_sym_STAR = 46,
  anon_sym_SLASH = 47,
  anon_sym_PERCENT = 48,
  anon_sym_PERCENT_PERCENT = 49,
  anon_sym_LT_LT = 50,
  anon_sym_GT_GT = 51,
  anon_sym_AMP = 52,
  anon_sym_AMP_TILDE = 53,
  anon_sym_PIPE_PIPE = 54,
  anon_sym_AMP_AMP = 55,
  anon_sym_BANG = 56,
  anon_sym_auto_cast = 57,
  anon_sym_inline = 58,
  anon_sym_no_inline = 59,
  anon_sym_cast = 60,
  anon_sym_transmute = 61,
  anon_sym_POUNDpartial = 62,
  anon_sym_LBRACK = 63,
  anon_sym_RBRACK = 64,
  anon_sym_LBRACK_RBRACK = 65,
  anon_sym_LBRACKdynamic_RBRACK = 66,
  anon_sym_map = 67,
  anon_sym_CARET = 68,
  anon_sym_bit_set = 69,
  anon_sym_opaque = 70,
  anon_sym_simd = 71,
  anon_sym_relative = 72,
  anon_sym_where = 73,
  anon_sym_DOLLAR = 74,
  anon_sym_typeid = 75,
  anon_sym_align = 76,
  anon_sym_packed = 77,
  anon_sym_raw_union = 78,
  anon_sym_no_nil = 79,
  anon_sym_maybe = 80,
  anon_sym_using = 81,
  anon_sym_struct = 82,
  anon_sym_union = 83,
  anon_sym_enum = 84,
  anon_sym_bit_field = 85,
  anon_sym_optional_ok = 86,
  anon_sym_DASH_GT = 87,
  anon_sym_no_alias = 88,
  anon_sym_c_vararg = 89,
  anon_sym_const = 90,
  anon_sym_type = 91,
  sym_block_comment = 92,
  sym_source_file = 93,
  sym_package_decl = 94,
  sym__package_name = 95,
  sym__top_level_decl = 96,
  sym_const_assert_panic = 97,
  sym_import_decl = 98,
  sym__import_path = 99,
  sym_foreign_import_decl = 100,
  sym_foreign_import_paths = 101,
  sym_foreign_import_path_list = 102,
  sym_foreign_block_decl = 103,
  sym_procedure_group = 104,
  sym_const_expression = 105,
  sym_const_expression_list = 106,
  sym_const_decl = 107,
  sym_var_decl = 108,
  sym_value_decl = 109,
  sym_attribute = 110,
  sym__expression = 111,
  sym_binary_expr = 112,
  sym_ternary_expr = 113,
  sym_question_ternary_expr = 114,
  sym_if_ternary_expr = 115,
  sym_when_ternary_expr = 116,
  sym_condition = 117,
  sym_unary_expr = 118,
  sym_atom_expr = 119,
  sym_call_expr = 120,
  sym_argument_element = 121,
  sym_argument_element_list = 122,
  sym_arguments = 123,
  sym_rel_op = 124,
  sym_contain_op = 125,
  sym_add_op = 126,
  sym_mul_op = 127,
  sym_binary_op = 128,
  sym__array_length = 129,
  sym__enumerated_array_type = 130,
  sym__element_type = 131,
  sym_array_type = 132,
  sym_slice_type = 133,
  sym_dynamic_array_type = 134,
  sym_map_type = 135,
  sym_pointer_type = 136,
  sym_bitset_key_type = 137,
  sym_bitset_type = 138,
  sym_opaque_type = 139,
  sym_simd_vector_type = 140,
  sym_relative_pointer_type = 141,
  sym_relative_slice_type = 142,
  sym_identifier_list = 143,
  sym_expression_list = 144,
  sym_where_clause = 145,
  sym_polymorphic_name = 146,
  sym_polymorphic_name_list = 147,
  sym_type_or_with_specialization = 148,
  sym_polymorphic_parameter = 149,
  sym_polymorphic_parameter_list = 150,
  sym_struct_type_tags = 151,
  sym_union_type_tags = 152,
  sym_bitfield_tags = 153,
  sym_struct_field_decl = 154,
  sym_struct_field_list = 155,
  sym_element = 156,
  sym_element_list = 157,
  sym_struct_type = 158,
  sym_union_type = 159,
  sym_enum_type = 160,
  sym_bitfield_field = 161,
  sym_bitfield_field_list = 162,
  sym_bitfield_fields = 163,
  sym_bitfield_type = 164,
  sym_procedure_tags = 165,
  sym_procedure_type = 166,
  sym_signature = 167,
  sym_result = 168,
  sym_parameters = 169,
  sym_parameter_list = 170,
  sym_parameter_prefixes = 171,
  sym_parameter_decl = 172,
  sym_plain_parameters = 173,
  sym_plain_parameter_list = 174,
  sym_plain_parameter_decl = 175,
  sym_helper_type = 176,
  sym_type_name = 177,
  sym__type_literal = 178,
  sym_type = 179,
  aux_sym_source_file_repeat1 = 180,
  aux_sym__top_level_decl_repeat1 = 181,
  aux_sym_foreign_import_path_list_repeat1 = 182,
  aux_sym_foreign_block_decl_repeat1 = 183,
  aux_sym_const_expression_list_repeat1 = 184,
  aux_sym_argument_element_list_repeat1 = 185,
  aux_sym_identifier_list_repeat1 = 186,
  aux_sym_expression_list_repeat1 = 187,
  aux_sym_polymorphic_name_list_repeat1 = 188,
  aux_sym_polymorphic_parameter_list_repeat1 = 189,
  aux_sym_struct_field_list_repeat1 = 190,
  aux_sym_element_list_repeat1 = 191,
  aux_sym_bitfield_field_list_repeat1 = 192,
  aux_sym_parameter_list_repeat1 = 193,
  aux_sym_plain_parameter_list_repeat1 = 194,
  alias_sym_array_length = 195,
  alias_sym_element_type = 196,
  alias_sym_enumerated_array_type = 197,
  alias_sym_package_name = 198,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [anon_sym_package] = "package",
  [anon_sym_POUND] = "#",
  [anon_sym_assert] = "assert",
  [anon_sym_panic] = "panic",
  [anon_sym_import] = "import",
  [anon_sym_foreign] = "foreign",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_bounds_check] = "bounds_check",
  [anon_sym_no_bounds_check] = "no_bounds_check",
  [anon_sym_proc] = "proc",
  [anon_sym_return] = "return",
  [anon_sym_EQ] = "=",
  [anon_sym_distinct] = "distinct",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [anon_sym_QMARK] = "?",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_when] = "when",
  [anon_sym_DOT_DOT] = "..",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_rune_lit] = "rune_lit",
  [sym_string_lit] = "import_path",
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
  [anon_sym_BANG] = "!",
  [anon_sym_auto_cast] = "auto_cast",
  [anon_sym_inline] = "inline",
  [anon_sym_no_inline] = "no_inline",
  [anon_sym_cast] = "cast",
  [anon_sym_transmute] = "transmute",
  [anon_sym_POUNDpartial] = "#partial",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_LBRACKdynamic_RBRACK] = "[dynamic]",
  [anon_sym_map] = "map",
  [anon_sym_CARET] = "^",
  [anon_sym_bit_set] = "bit_set",
  [anon_sym_opaque] = "opaque",
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
  [anon_sym_DASH_GT] = "->",
  [anon_sym_no_alias] = "no_alias",
  [anon_sym_c_vararg] = "c_vararg",
  [anon_sym_const] = "const",
  [anon_sym_type] = "type",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym_package_decl] = "package_decl",
  [sym__package_name] = "_package_name",
  [sym__top_level_decl] = "_top_level_decl",
  [sym_const_assert_panic] = "const_assert_panic",
  [sym_import_decl] = "import_decl",
  [sym__import_path] = "_import_path",
  [sym_foreign_import_decl] = "foreign_import_decl",
  [sym_foreign_import_paths] = "foreign_import_paths",
  [sym_foreign_import_path_list] = "foreign_import_path_list",
  [sym_foreign_block_decl] = "foreign_block_decl",
  [sym_procedure_group] = "procedure_group",
  [sym_const_expression] = "const_expression",
  [sym_const_expression_list] = "const_expression_list",
  [sym_const_decl] = "const_decl",
  [sym_var_decl] = "var_decl",
  [sym_value_decl] = "value_decl",
  [sym_attribute] = "attribute",
  [sym__expression] = "_expression",
  [sym_binary_expr] = "binary_expr",
  [sym_ternary_expr] = "ternary_expr",
  [sym_question_ternary_expr] = "question_ternary_expr",
  [sym_if_ternary_expr] = "if_ternary_expr",
  [sym_when_ternary_expr] = "when_ternary_expr",
  [sym_condition] = "condition",
  [sym_unary_expr] = "unary_expr",
  [sym_atom_expr] = "atom_expr",
  [sym_call_expr] = "call_expr",
  [sym_argument_element] = "argument_element",
  [sym_argument_element_list] = "argument_element_list",
  [sym_arguments] = "arguments",
  [sym_rel_op] = "rel_op",
  [sym_contain_op] = "contain_op",
  [sym_add_op] = "add_op",
  [sym_mul_op] = "mul_op",
  [sym_binary_op] = "binary_op",
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
  [sym_parameter_list] = "parameter_list",
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
  [aux_sym__top_level_decl_repeat1] = "_top_level_decl_repeat1",
  [aux_sym_foreign_import_path_list_repeat1] = "foreign_import_path_list_repeat1",
  [aux_sym_foreign_block_decl_repeat1] = "foreign_block_decl_repeat1",
  [aux_sym_const_expression_list_repeat1] = "const_expression_list_repeat1",
  [aux_sym_argument_element_list_repeat1] = "argument_element_list_repeat1",
  [aux_sym_identifier_list_repeat1] = "identifier_list_repeat1",
  [aux_sym_expression_list_repeat1] = "expression_list_repeat1",
  [aux_sym_polymorphic_name_list_repeat1] = "polymorphic_name_list_repeat1",
  [aux_sym_polymorphic_parameter_list_repeat1] = "polymorphic_parameter_list_repeat1",
  [aux_sym_struct_field_list_repeat1] = "struct_field_list_repeat1",
  [aux_sym_element_list_repeat1] = "element_list_repeat1",
  [aux_sym_bitfield_field_list_repeat1] = "bitfield_field_list_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_plain_parameter_list_repeat1] = "plain_parameter_list_repeat1",
  [alias_sym_array_length] = "array_length",
  [alias_sym_element_type] = "element_type",
  [alias_sym_enumerated_array_type] = "enumerated_array_type",
  [alias_sym_package_name] = "package_name",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_package] = anon_sym_package,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_assert] = anon_sym_assert,
  [anon_sym_panic] = anon_sym_panic,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_foreign] = anon_sym_foreign,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_bounds_check] = anon_sym_bounds_check,
  [anon_sym_no_bounds_check] = anon_sym_no_bounds_check,
  [anon_sym_proc] = anon_sym_proc,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_distinct] = anon_sym_distinct,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_when] = anon_sym_when,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_rune_lit] = sym_rune_lit,
  [sym_string_lit] = sym_string_lit,
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
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_auto_cast] = anon_sym_auto_cast,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_no_inline] = anon_sym_no_inline,
  [anon_sym_cast] = anon_sym_cast,
  [anon_sym_transmute] = anon_sym_transmute,
  [anon_sym_POUNDpartial] = anon_sym_POUNDpartial,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_LBRACKdynamic_RBRACK] = anon_sym_LBRACKdynamic_RBRACK,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_bit_set] = anon_sym_bit_set,
  [anon_sym_opaque] = anon_sym_opaque,
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
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_no_alias] = anon_sym_no_alias,
  [anon_sym_c_vararg] = anon_sym_c_vararg,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_type] = anon_sym_type,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym_package_decl] = sym_package_decl,
  [sym__package_name] = sym__package_name,
  [sym__top_level_decl] = sym__top_level_decl,
  [sym_const_assert_panic] = sym_const_assert_panic,
  [sym_import_decl] = sym_import_decl,
  [sym__import_path] = sym__import_path,
  [sym_foreign_import_decl] = sym_foreign_import_decl,
  [sym_foreign_import_paths] = sym_foreign_import_paths,
  [sym_foreign_import_path_list] = sym_foreign_import_path_list,
  [sym_foreign_block_decl] = sym_foreign_block_decl,
  [sym_procedure_group] = sym_procedure_group,
  [sym_const_expression] = sym_const_expression,
  [sym_const_expression_list] = sym_const_expression_list,
  [sym_const_decl] = sym_const_decl,
  [sym_var_decl] = sym_var_decl,
  [sym_value_decl] = sym_value_decl,
  [sym_attribute] = sym_attribute,
  [sym__expression] = sym__expression,
  [sym_binary_expr] = sym_binary_expr,
  [sym_ternary_expr] = sym_ternary_expr,
  [sym_question_ternary_expr] = sym_question_ternary_expr,
  [sym_if_ternary_expr] = sym_if_ternary_expr,
  [sym_when_ternary_expr] = sym_when_ternary_expr,
  [sym_condition] = sym_condition,
  [sym_unary_expr] = sym_unary_expr,
  [sym_atom_expr] = sym_atom_expr,
  [sym_call_expr] = sym_call_expr,
  [sym_argument_element] = sym_argument_element,
  [sym_argument_element_list] = sym_argument_element_list,
  [sym_arguments] = sym_arguments,
  [sym_rel_op] = sym_rel_op,
  [sym_contain_op] = sym_contain_op,
  [sym_add_op] = sym_add_op,
  [sym_mul_op] = sym_mul_op,
  [sym_binary_op] = sym_binary_op,
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
  [sym_parameter_list] = sym_parameter_list,
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
  [aux_sym__top_level_decl_repeat1] = aux_sym__top_level_decl_repeat1,
  [aux_sym_foreign_import_path_list_repeat1] = aux_sym_foreign_import_path_list_repeat1,
  [aux_sym_foreign_block_decl_repeat1] = aux_sym_foreign_block_decl_repeat1,
  [aux_sym_const_expression_list_repeat1] = aux_sym_const_expression_list_repeat1,
  [aux_sym_argument_element_list_repeat1] = aux_sym_argument_element_list_repeat1,
  [aux_sym_identifier_list_repeat1] = aux_sym_identifier_list_repeat1,
  [aux_sym_expression_list_repeat1] = aux_sym_expression_list_repeat1,
  [aux_sym_polymorphic_name_list_repeat1] = aux_sym_polymorphic_name_list_repeat1,
  [aux_sym_polymorphic_parameter_list_repeat1] = aux_sym_polymorphic_parameter_list_repeat1,
  [aux_sym_struct_field_list_repeat1] = aux_sym_struct_field_list_repeat1,
  [aux_sym_element_list_repeat1] = aux_sym_element_list_repeat1,
  [aux_sym_bitfield_field_list_repeat1] = aux_sym_bitfield_field_list_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_plain_parameter_list_repeat1] = aux_sym_plain_parameter_list_repeat1,
  [alias_sym_array_length] = alias_sym_array_length,
  [alias_sym_element_type] = alias_sym_element_type,
  [alias_sym_enumerated_array_type] = alias_sym_enumerated_array_type,
  [alias_sym_package_name] = alias_sym_package_name,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_package] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_assert] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_panic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_foreign] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bounds_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_bounds_check] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_distinct] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_when] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [sym_rune_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_string_lit] = {
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
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_auto_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cast] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_transmute] = {
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
  [anon_sym_DASH_GT] = {
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
  [anon_sym_const] = {
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
  [sym_package_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__package_name] = {
    .visible = false,
    .named = true,
  },
  [sym__top_level_decl] = {
    .visible = false,
    .named = true,
  },
  [sym_const_assert_panic] = {
    .visible = true,
    .named = true,
  },
  [sym_import_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__import_path] = {
    .visible = false,
    .named = true,
  },
  [sym_foreign_import_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_import_paths] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_import_path_list] = {
    .visible = true,
    .named = true,
  },
  [sym_foreign_block_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_procedure_group] = {
    .visible = true,
    .named = true,
  },
  [sym_const_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_const_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_const_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_var_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_value_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_ternary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_question_ternary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_if_ternary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_when_ternary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_atom_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_element] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_element_list] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_rel_op] = {
    .visible = true,
    .named = true,
  },
  [sym_contain_op] = {
    .visible = true,
    .named = true,
  },
  [sym_add_op] = {
    .visible = true,
    .named = true,
  },
  [sym_mul_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
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
  [sym_parameter_list] = {
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
  [aux_sym__top_level_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreign_import_path_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_foreign_block_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_expression_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_element_list_repeat1] = {
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
  [aux_sym_parameter_list_repeat1] = {
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
  [alias_sym_element_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_enumerated_array_type] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_package_name] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_package_name,
  },
  [2] = {
    [0] = sym_condition,
  },
  [3] = {
    [0] = sym_unary_expr,
  },
  [4] = {
    [0] = sym_atom_expr,
  },
  [5] = {
    [0] = alias_sym_array_length,
  },
  [6] = {
    [0] = alias_sym_enumerated_array_type,
  },
  [7] = {
    [0] = alias_sym_element_type,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(253);
      if (lookahead == '!') ADVANCE(403);
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '\'') ADVANCE(26);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(390);
      if (lookahead == '.') ADVANCE(18);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead == '0') ADVANCE(358);
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == ';') ADVANCE(254);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '>') ADVANCE(381);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '^') ADVANCE(418);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead == 'a') ADVANCE(145);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'd') ADVANCE(136);
      if (lookahead == 'e') ADVANCE(151);
      if (lookahead == 'f') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == 'r') ADVANCE(60);
      if (lookahead == 's') ADVANCE(119);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead == 'u') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == ';') ADVANCE(254);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(343);
      if (lookahead == '>') ADVANCE(381);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '[') ADVANCE(411);
      if (lookahead == ']') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'v') ||
          ('x' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead == 'n') ADVANCE(301);
      if (lookahead == 'w') ADVANCE(319);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '~') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(23);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '%') ADVANCE(395);
      if (lookahead == '&') ADVANCE(399);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == '*') ADVANCE(393);
      if (lookahead == '+') ADVANCE(388);
      if (lookahead == '-') ADVANCE(389);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead == '<') ADVANCE(379);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(381);
      if (lookahead == '?') ADVANCE(349);
      if (lookahead == 'e') ADVANCE(150);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == 'n') ADVANCE(183);
      if (lookahead == 'w') ADVANCE(116);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '|') ADVANCE(391);
      if (lookahead == '~') ADVANCE(392);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(394);
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == ';') ADVANCE(254);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == ']') ADVANCE(413);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == '`') ADVANCE(251);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(372);
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
      if (lookahead == '#') ADVANCE(257);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == ',') ADVANCE(265);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(347);
      if (lookahead == ';') ADVANCE(254);
      if (lookahead == '=') ADVANCE(342);
      if (lookahead == '@') ADVANCE(348);
      if (lookahead == '[') ADVANCE(412);
      if (lookahead == '^') ADVANCE(418);
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
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'b') ADVANCE(314);
      if (lookahead == 'e') ADVANCE(302);
      if (lookahead == 'm') ADVANCE(334);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'p') ADVANCE(287);
      if (lookahead == 's') ADVANCE(282);
      if (lookahead == 't') ADVANCE(272);
      if (lookahead == 'u') ADVANCE(307);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '}') ADVANCE(266);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '$') ADVANCE(426);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '/') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'a') ADVANCE(276);
      if (lookahead == 'u') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(190);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '[') ADVANCE(411);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'u') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      if (lookahead == '\'') ADVANCE(370);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(356);
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(355);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(376);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(374);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '{') ADVANCE(264);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(377);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(444);
      END_STATE();
    case 26:
      if (lookahead == '\\') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == ']') ADVANCE(415);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(360);
      END_STATE();
    case 31:
      if (lookahead == '_') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 32:
      if (lookahead == '_') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(363);
      END_STATE();
    case 33:
      if (lookahead == '_') ADVANCE(237);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 34:
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(110);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 38:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      END_STATE();
    case 40:
      if (lookahead == '_') ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == '_') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == '_') ADVANCE(180);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(233);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 46:
      if (lookahead == '_') ADVANCE(133);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(85);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
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
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(189);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(75);
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(238);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(193);
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(149);
      if (lookahead == 'b') ADVANCE(187);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(198);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(156);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(202);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(148);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(197);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(167);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(225);
      END_STATE();
    case 73:
      if (lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 74:
      if (lookahead == 'b') ADVANCE(94);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(339);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(259);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(141);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(218);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(220);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(117);
      END_STATE();
    case 85:
      if (lookahead == 'c') ADVANCE(118);
      END_STATE();
    case 86:
      if (lookahead == 'd') ADVANCE(423);
      END_STATE();
    case 87:
      if (lookahead == 'd') ADVANCE(429);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(441);
      END_STATE();
    case 89:
      if (lookahead == 'd') ADVANCE(211);
      END_STATE();
    case 90:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(157);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(352);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(448);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(432);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(425);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(406);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(421);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(424);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(407);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(409);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 104:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 105:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 106:
      if (lookahead == 'e') ADVANCE(135);
      END_STATE();
    case 107:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 108:
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(384);
      END_STATE();
    case 109:
      if (lookahead == 'f') ADVANCE(350);
      if (lookahead == 'n') ADVANCE(383);
      END_STATE();
    case 110:
      if (lookahead == 'f') ADVANCE(134);
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(433);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(446);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(158);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(162);
      END_STATE();
    case 116:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 117:
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 119:
      if (lookahead == 'i') ADVANCE(153);
      if (lookahead == 't') ADVANCE(195);
      END_STATE();
    case 120:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(229);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(143);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 137:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 138:
      if (lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 139:
      if (lookahead == 'k') ADVANCE(443);
      END_STATE();
    case 140:
      if (lookahead == 'k') ADVANCE(337);
      END_STATE();
    case 141:
      if (lookahead == 'k') ADVANCE(338);
      END_STATE();
    case 142:
      if (lookahead == 'k') ADVANCE(65);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(431);
      END_STATE();
    case 144:
      if (lookahead == 'l') ADVANCE(410);
      END_STATE();
    case 145:
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 's') ADVANCE(204);
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 146:
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 't') ADVANCE(231);
      END_STATE();
    case 147:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 149:
      if (lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 150:
      if (lookahead == 'l') ADVANCE(206);
      END_STATE();
    case 151:
      if (lookahead == 'l') ADVANCE(206);
      if (lookahead == 'n') ADVANCE(228);
      END_STATE();
    case 152:
      if (lookahead == 'l') ADVANCE(138);
      END_STATE();
    case 153:
      if (lookahead == 'm') ADVANCE(86);
      END_STATE();
    case 154:
      if (lookahead == 'm') ADVANCE(439);
      END_STATE();
    case 155:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 156:
      if (lookahead == 'm') ADVANCE(127);
      END_STATE();
    case 157:
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 158:
      if (lookahead == 'n') ADVANCE(428);
      END_STATE();
    case 159:
      if (lookahead == 'n') ADVANCE(437);
      END_STATE();
    case 160:
      if (lookahead == 'n') ADVANCE(386);
      END_STATE();
    case 161:
      if (lookahead == 'n') ADVANCE(341);
      END_STATE();
    case 162:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 163:
      if (lookahead == 'n') ADVANCE(430);
      END_STATE();
    case 164:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 165:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 166:
      if (lookahead == 'n') ADVANCE(126);
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 167:
      if (lookahead == 'n') ADVANCE(208);
      END_STATE();
    case 168:
      if (lookahead == 'n') ADVANCE(64);
      END_STATE();
    case 169:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 170:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 171:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 172:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 173:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 174:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 175:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 177:
      if (lookahead == 'o') ADVANCE(196);
      END_STATE();
    case 178:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 179:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 180:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 181:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 182:
      if (lookahead == 'o') ADVANCE(159);
      END_STATE();
    case 183:
      if (lookahead == 'o') ADVANCE(222);
      END_STATE();
    case 184:
      if (lookahead == 'o') ADVANCE(163);
      END_STATE();
    case 185:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 186:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 187:
      if (lookahead == 'o') ADVANCE(235);
      END_STATE();
    case 188:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 189:
      if (lookahead == 'p') ADVANCE(416);
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 190:
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 191:
      if (lookahead == 'p') ADVANCE(93);
      END_STATE();
    case 192:
      if (lookahead == 'p') ADVANCE(186);
      END_STATE();
    case 193:
      if (lookahead == 'q') ADVANCE(232);
      END_STATE();
    case 194:
      if (lookahead == 'r') ADVANCE(71);
      if (lookahead == 'y') ADVANCE(191);
      END_STATE();
    case 195:
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 196:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 197:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 198:
      if (lookahead == 'r') ADVANCE(224);
      END_STATE();
    case 199:
      if (lookahead == 'r') ADVANCE(216);
      END_STATE();
    case 200:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 201:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 202:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(445);
      END_STATE();
    case 204:
      if (lookahead == 's') ADVANCE(107);
      END_STATE();
    case 205:
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 206:
      if (lookahead == 's') ADVANCE(92);
      END_STATE();
    case 207:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 208:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 209:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 210:
      if (lookahead == 's') ADVANCE(221);
      END_STATE();
    case 211:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 212:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(408);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(447);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(260);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(435);
      END_STATE();
    case 219:
      if (lookahead == 't') ADVANCE(419);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(344);
      END_STATE();
    case 221:
      if (lookahead == 't') ADVANCE(404);
      END_STATE();
    case 222:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 223:
      if (lookahead == 't') ADVANCE(181);
      END_STATE();
    case 224:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 225:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 226:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 227:
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(154);
      END_STATE();
    case 229:
      if (lookahead == 'u') ADVANCE(165);
      END_STATE();
    case 230:
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 231:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 232:
      if (lookahead == 'u') ADVANCE(97);
      END_STATE();
    case 233:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 234:
      if (lookahead == 'u') ADVANCE(226);
      END_STATE();
    case 235:
      if (lookahead == 'u') ADVANCE(176);
      END_STATE();
    case 236:
      if (lookahead == 'v') ADVANCE(99);
      END_STATE();
    case 237:
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 238:
      if (lookahead == 'w') ADVANCE(43);
      END_STATE();
    case 239:
      if (lookahead == 'y') ADVANCE(168);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(17);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(240);
      END_STATE();
    case 242:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          lookahead == 'e' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't' ||
          lookahead == 'v') ADVANCE(17);
      if (lookahead == '\'') ADVANCE(371);
      if (lookahead == 'U') ADVANCE(250);
      if (lookahead == 'u') ADVANCE(246);
      if (lookahead == 'x') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(241);
      END_STATE();
    case 243:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 244:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    case 251:
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(251);
      if (lookahead == '`') ADVANCE(373);
      END_STATE();
    case 252:
      if (eof) ADVANCE(253);
      if (lookahead == '#') ADVANCE(256);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(254);
      if (lookahead == '@') ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          lookahead == 'g' ||
          lookahead == 'h' ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'f') ADVANCE(298);
      if (lookahead == 'i') ADVANCE(310);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(252)
      END_STATE();
    case 253:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_package);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_assert);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_panic);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_foreign);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_foreign);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(270);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead == 's') ADVANCE(326);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == 'n') ADVANCE(385);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z' ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'y') ADVANCE(293);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'u') ADVANCE(309);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'u') ADVANCE(332);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'u') ADVANCE(322);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'u') ADVANCE(284);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(267);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(436);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(261);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(405);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(288);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(269);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 't') ADVANCE(299);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 's') ADVANCE(281);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 's') ADVANCE(318);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'r') ADVANCE(296);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'r') ADVANCE(280);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'r') ADVANCE(327);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'q') ADVANCE(275);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'p') ADVANCE(417);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'p') ADVANCE(324);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'p') ADVANCE(333);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'p') ADVANCE(300);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'o') ADVANCE(330);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'o') ADVANCE(303);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'o') ADVANCE(289);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(438);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(354);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(387);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'n') ADVANCE(320);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'm') ADVANCE(440);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'm') ADVANCE(295);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'l') ADVANCE(329);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(328);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(321);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(277);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(297);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(323);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(305);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'i') ADVANCE(308);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'h') ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'g') ADVANCE(434);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'g') ADVANCE(306);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'e') ADVANCE(422);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'e') ADVANCE(311);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'e') ADVANCE(304);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'd') ADVANCE(427);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'd') ADVANCE(442);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'c') ADVANCE(340);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'c') ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'c') ADVANCE(278);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'a') ADVANCE(291);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'a') ADVANCE(292);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      if (lookahead == 'a') ADVANCE(285);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_bounds_check);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_no_bounds_check);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(377);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_distinct);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_when);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_when);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      if (lookahead == '<') ADVANCE(375);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (lookahead == '_') ADVANCE(357);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(368);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(29);
      if (lookahead == '_') ADVANCE(357);
      if (lookahead == 'b') ADVANCE(30);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'h') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(369);
      if (lookahead == 'o') ADVANCE(31);
      if (lookahead == 'z') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(360);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(365);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(366);
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(364);
      if (lookahead == '_') ADVANCE(364);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(367);
      if (lookahead == '_') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_rune_lit);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_rune_lit);
      if (lookahead == '\'') ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead == '"') ADVANCE(372);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_string_lit);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(251);
      if (lookahead == '`') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(374);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_range_op);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_range_op);
      if (lookahead == '<') ADVANCE(375);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(397);
      if (lookahead == '=') ADVANCE(380);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(382);
      if (lookahead == '>') ADVANCE(398);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_in);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_not_in);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_not_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(444);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(374);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(396);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(402);
      if (lookahead == '~') ADVANCE(400);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_AMP_TILDE);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(378);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_auto_cast);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_auto_cast);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_cast);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_transmute);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_POUNDpartial);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(414);
      if (lookahead == 'd') ADVANCE(239);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_LBRACKdynamic_RBRACK);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_bit_set);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_bit_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_opaque);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_opaque);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_simd);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_relative);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_typeid);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_align);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_packed);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_raw_union);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_no_nil);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_maybe);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_using);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_bit_field);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_bit_field);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(336);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_optional_ok);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_no_alias);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_c_vararg);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 1},
  [2] = {.lex_state = 14, .external_lex_state = 1},
  [3] = {.lex_state = 14, .external_lex_state = 1},
  [4] = {.lex_state = 14, .external_lex_state = 1},
  [5] = {.lex_state = 14, .external_lex_state = 1},
  [6] = {.lex_state = 14, .external_lex_state = 1},
  [7] = {.lex_state = 14, .external_lex_state = 1},
  [8] = {.lex_state = 14, .external_lex_state = 1},
  [9] = {.lex_state = 14, .external_lex_state = 1},
  [10] = {.lex_state = 14, .external_lex_state = 1},
  [11] = {.lex_state = 14, .external_lex_state = 1},
  [12] = {.lex_state = 14, .external_lex_state = 1},
  [13] = {.lex_state = 14, .external_lex_state = 1},
  [14] = {.lex_state = 14, .external_lex_state = 1},
  [15] = {.lex_state = 14, .external_lex_state = 1},
  [16] = {.lex_state = 14, .external_lex_state = 1},
  [17] = {.lex_state = 14, .external_lex_state = 1},
  [18] = {.lex_state = 14, .external_lex_state = 1},
  [19] = {.lex_state = 14, .external_lex_state = 1},
  [20] = {.lex_state = 14, .external_lex_state = 1},
  [21] = {.lex_state = 14, .external_lex_state = 1},
  [22] = {.lex_state = 14, .external_lex_state = 1},
  [23] = {.lex_state = 14, .external_lex_state = 1},
  [24] = {.lex_state = 14, .external_lex_state = 1},
  [25] = {.lex_state = 14, .external_lex_state = 1},
  [26] = {.lex_state = 14, .external_lex_state = 1},
  [27] = {.lex_state = 14, .external_lex_state = 1},
  [28] = {.lex_state = 14, .external_lex_state = 1},
  [29] = {.lex_state = 14, .external_lex_state = 1},
  [30] = {.lex_state = 14, .external_lex_state = 1},
  [31] = {.lex_state = 1, .external_lex_state = 1},
  [32] = {.lex_state = 1, .external_lex_state = 1},
  [33] = {.lex_state = 1, .external_lex_state = 1},
  [34] = {.lex_state = 1, .external_lex_state = 1},
  [35] = {.lex_state = 1, .external_lex_state = 1},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 1, .external_lex_state = 1},
  [39] = {.lex_state = 1, .external_lex_state = 1},
  [40] = {.lex_state = 1, .external_lex_state = 1},
  [41] = {.lex_state = 1, .external_lex_state = 1},
  [42] = {.lex_state = 1, .external_lex_state = 1},
  [43] = {.lex_state = 1, .external_lex_state = 1},
  [44] = {.lex_state = 1, .external_lex_state = 1},
  [45] = {.lex_state = 1, .external_lex_state = 1},
  [46] = {.lex_state = 1, .external_lex_state = 1},
  [47] = {.lex_state = 1, .external_lex_state = 1},
  [48] = {.lex_state = 2, .external_lex_state = 1},
  [49] = {.lex_state = 2, .external_lex_state = 1},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 1, .external_lex_state = 1},
  [53] = {.lex_state = 1, .external_lex_state = 1},
  [54] = {.lex_state = 1, .external_lex_state = 1},
  [55] = {.lex_state = 1, .external_lex_state = 1},
  [56] = {.lex_state = 1, .external_lex_state = 1},
  [57] = {.lex_state = 2, .external_lex_state = 1},
  [58] = {.lex_state = 2, .external_lex_state = 1},
  [59] = {.lex_state = 1, .external_lex_state = 1},
  [60] = {.lex_state = 1, .external_lex_state = 1},
  [61] = {.lex_state = 1, .external_lex_state = 1},
  [62] = {.lex_state = 2, .external_lex_state = 1},
  [63] = {.lex_state = 1, .external_lex_state = 1},
  [64] = {.lex_state = 2, .external_lex_state = 1},
  [65] = {.lex_state = 2, .external_lex_state = 1},
  [66] = {.lex_state = 2, .external_lex_state = 1},
  [67] = {.lex_state = 2, .external_lex_state = 1},
  [68] = {.lex_state = 2, .external_lex_state = 1},
  [69] = {.lex_state = 2, .external_lex_state = 1},
  [70] = {.lex_state = 2, .external_lex_state = 1},
  [71] = {.lex_state = 2, .external_lex_state = 1},
  [72] = {.lex_state = 1, .external_lex_state = 1},
  [73] = {.lex_state = 252, .external_lex_state = 1},
  [74] = {.lex_state = 252, .external_lex_state = 1},
  [75] = {.lex_state = 252, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 3, .external_lex_state = 1},
  [81] = {.lex_state = 252, .external_lex_state = 1},
  [82] = {.lex_state = 3, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 14, .external_lex_state = 1},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 3, .external_lex_state = 1},
  [87] = {.lex_state = 0, .external_lex_state = 1},
  [88] = {.lex_state = 3, .external_lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 1},
  [90] = {.lex_state = 3, .external_lex_state = 1},
  [91] = {.lex_state = 3, .external_lex_state = 1},
  [92] = {.lex_state = 0, .external_lex_state = 1},
  [93] = {.lex_state = 15, .external_lex_state = 1},
  [94] = {.lex_state = 0, .external_lex_state = 1},
  [95] = {.lex_state = 0, .external_lex_state = 1},
  [96] = {.lex_state = 0, .external_lex_state = 1},
  [97] = {.lex_state = 3, .external_lex_state = 1},
  [98] = {.lex_state = 3, .external_lex_state = 1},
  [99] = {.lex_state = 0, .external_lex_state = 1},
  [100] = {.lex_state = 3, .external_lex_state = 1},
  [101] = {.lex_state = 3, .external_lex_state = 1},
  [102] = {.lex_state = 3, .external_lex_state = 1},
  [103] = {.lex_state = 0, .external_lex_state = 1},
  [104] = {.lex_state = 3, .external_lex_state = 1},
  [105] = {.lex_state = 3, .external_lex_state = 1},
  [106] = {.lex_state = 3, .external_lex_state = 1},
  [107] = {.lex_state = 0, .external_lex_state = 1},
  [108] = {.lex_state = 3, .external_lex_state = 1},
  [109] = {.lex_state = 3, .external_lex_state = 1},
  [110] = {.lex_state = 0, .external_lex_state = 1},
  [111] = {.lex_state = 0, .external_lex_state = 1},
  [112] = {.lex_state = 0, .external_lex_state = 1},
  [113] = {.lex_state = 0, .external_lex_state = 1},
  [114] = {.lex_state = 3, .external_lex_state = 1},
  [115] = {.lex_state = 3, .external_lex_state = 1},
  [116] = {.lex_state = 3, .external_lex_state = 1},
  [117] = {.lex_state = 3, .external_lex_state = 1},
  [118] = {.lex_state = 0, .external_lex_state = 1},
  [119] = {.lex_state = 3, .external_lex_state = 1},
  [120] = {.lex_state = 3, .external_lex_state = 1},
  [121] = {.lex_state = 3, .external_lex_state = 1},
  [122] = {.lex_state = 3, .external_lex_state = 1},
  [123] = {.lex_state = 3, .external_lex_state = 1},
  [124] = {.lex_state = 0, .external_lex_state = 1},
  [125] = {.lex_state = 3, .external_lex_state = 1},
  [126] = {.lex_state = 3, .external_lex_state = 1},
  [127] = {.lex_state = 3, .external_lex_state = 1},
  [128] = {.lex_state = 3, .external_lex_state = 1},
  [129] = {.lex_state = 0, .external_lex_state = 1},
  [130] = {.lex_state = 0, .external_lex_state = 1},
  [131] = {.lex_state = 3, .external_lex_state = 1},
  [132] = {.lex_state = 3, .external_lex_state = 1},
  [133] = {.lex_state = 3, .external_lex_state = 1},
  [134] = {.lex_state = 0, .external_lex_state = 1},
  [135] = {.lex_state = 3, .external_lex_state = 1},
  [136] = {.lex_state = 0, .external_lex_state = 1},
  [137] = {.lex_state = 0, .external_lex_state = 1},
  [138] = {.lex_state = 0, .external_lex_state = 1},
  [139] = {.lex_state = 3, .external_lex_state = 1},
  [140] = {.lex_state = 3, .external_lex_state = 1},
  [141] = {.lex_state = 3, .external_lex_state = 1},
  [142] = {.lex_state = 3, .external_lex_state = 1},
  [143] = {.lex_state = 0, .external_lex_state = 1},
  [144] = {.lex_state = 0, .external_lex_state = 1},
  [145] = {.lex_state = 3, .external_lex_state = 1},
  [146] = {.lex_state = 3, .external_lex_state = 1},
  [147] = {.lex_state = 3, .external_lex_state = 1},
  [148] = {.lex_state = 3, .external_lex_state = 1},
  [149] = {.lex_state = 0, .external_lex_state = 1},
  [150] = {.lex_state = 3, .external_lex_state = 1},
  [151] = {.lex_state = 0, .external_lex_state = 1},
  [152] = {.lex_state = 0, .external_lex_state = 1},
  [153] = {.lex_state = 0, .external_lex_state = 1},
  [154] = {.lex_state = 3, .external_lex_state = 1},
  [155] = {.lex_state = 3, .external_lex_state = 1},
  [156] = {.lex_state = 3, .external_lex_state = 1},
  [157] = {.lex_state = 3, .external_lex_state = 1},
  [158] = {.lex_state = 3, .external_lex_state = 1},
  [159] = {.lex_state = 3, .external_lex_state = 1},
  [160] = {.lex_state = 3, .external_lex_state = 1},
  [161] = {.lex_state = 0, .external_lex_state = 1},
  [162] = {.lex_state = 3, .external_lex_state = 1},
  [163] = {.lex_state = 3, .external_lex_state = 1},
  [164] = {.lex_state = 3, .external_lex_state = 1},
  [165] = {.lex_state = 3, .external_lex_state = 1},
  [166] = {.lex_state = 15, .external_lex_state = 1},
  [167] = {.lex_state = 3, .external_lex_state = 1},
  [168] = {.lex_state = 3, .external_lex_state = 1},
  [169] = {.lex_state = 2, .external_lex_state = 1},
  [170] = {.lex_state = 252, .external_lex_state = 1},
  [171] = {.lex_state = 3, .external_lex_state = 1},
  [172] = {.lex_state = 3, .external_lex_state = 1},
  [173] = {.lex_state = 3, .external_lex_state = 1},
  [174] = {.lex_state = 3, .external_lex_state = 1},
  [175] = {.lex_state = 252, .external_lex_state = 1},
  [176] = {.lex_state = 2, .external_lex_state = 1},
  [177] = {.lex_state = 252, .external_lex_state = 1},
  [178] = {.lex_state = 3, .external_lex_state = 1},
  [179] = {.lex_state = 3, .external_lex_state = 1},
  [180] = {.lex_state = 3, .external_lex_state = 1},
  [181] = {.lex_state = 3, .external_lex_state = 1},
  [182] = {.lex_state = 3, .external_lex_state = 1},
  [183] = {.lex_state = 3, .external_lex_state = 1},
  [184] = {.lex_state = 3, .external_lex_state = 1},
  [185] = {.lex_state = 3, .external_lex_state = 1},
  [186] = {.lex_state = 3, .external_lex_state = 1},
  [187] = {.lex_state = 252, .external_lex_state = 1},
  [188] = {.lex_state = 3, .external_lex_state = 1},
  [189] = {.lex_state = 252, .external_lex_state = 1},
  [190] = {.lex_state = 3, .external_lex_state = 1},
  [191] = {.lex_state = 3, .external_lex_state = 1},
  [192] = {.lex_state = 3, .external_lex_state = 1},
  [193] = {.lex_state = 3, .external_lex_state = 1},
  [194] = {.lex_state = 3, .external_lex_state = 1},
  [195] = {.lex_state = 14, .external_lex_state = 1},
  [196] = {.lex_state = 14, .external_lex_state = 1},
  [197] = {.lex_state = 16, .external_lex_state = 1},
  [198] = {.lex_state = 14, .external_lex_state = 1},
  [199] = {.lex_state = 16, .external_lex_state = 1},
  [200] = {.lex_state = 14, .external_lex_state = 1},
  [201] = {.lex_state = 2, .external_lex_state = 1},
  [202] = {.lex_state = 3, .external_lex_state = 1},
  [203] = {.lex_state = 16, .external_lex_state = 1},
  [204] = {.lex_state = 14, .external_lex_state = 1},
  [205] = {.lex_state = 3, .external_lex_state = 1},
  [206] = {.lex_state = 3, .external_lex_state = 1},
  [207] = {.lex_state = 2, .external_lex_state = 1},
  [208] = {.lex_state = 3, .external_lex_state = 1},
  [209] = {.lex_state = 3, .external_lex_state = 1},
  [210] = {.lex_state = 3, .external_lex_state = 1},
  [211] = {.lex_state = 16, .external_lex_state = 1},
  [212] = {.lex_state = 14, .external_lex_state = 1},
  [213] = {.lex_state = 14, .external_lex_state = 1},
  [214] = {.lex_state = 14, .external_lex_state = 1},
  [215] = {.lex_state = 14, .external_lex_state = 1},
  [216] = {.lex_state = 3, .external_lex_state = 1},
  [217] = {.lex_state = 0, .external_lex_state = 1},
  [218] = {.lex_state = 14, .external_lex_state = 1},
  [219] = {.lex_state = 14, .external_lex_state = 1},
  [220] = {.lex_state = 3, .external_lex_state = 1},
  [221] = {.lex_state = 3, .external_lex_state = 1},
  [222] = {.lex_state = 3, .external_lex_state = 1},
  [223] = {.lex_state = 3, .external_lex_state = 1},
  [224] = {.lex_state = 14, .external_lex_state = 1},
  [225] = {.lex_state = 0, .external_lex_state = 1},
  [226] = {.lex_state = 3, .external_lex_state = 1},
  [227] = {.lex_state = 14, .external_lex_state = 1},
  [228] = {.lex_state = 0, .external_lex_state = 1},
  [229] = {.lex_state = 252, .external_lex_state = 1},
  [230] = {.lex_state = 16, .external_lex_state = 1},
  [231] = {.lex_state = 0, .external_lex_state = 1},
  [232] = {.lex_state = 3, .external_lex_state = 1},
  [233] = {.lex_state = 0, .external_lex_state = 1},
  [234] = {.lex_state = 2, .external_lex_state = 1},
  [235] = {.lex_state = 0, .external_lex_state = 1},
  [236] = {.lex_state = 0, .external_lex_state = 1},
  [237] = {.lex_state = 0, .external_lex_state = 1},
  [238] = {.lex_state = 0, .external_lex_state = 1},
  [239] = {.lex_state = 0, .external_lex_state = 1},
  [240] = {.lex_state = 3, .external_lex_state = 1},
  [241] = {.lex_state = 22, .external_lex_state = 1},
  [242] = {.lex_state = 0, .external_lex_state = 1},
  [243] = {.lex_state = 0, .external_lex_state = 1},
  [244] = {.lex_state = 3, .external_lex_state = 1},
  [245] = {.lex_state = 0, .external_lex_state = 1},
  [246] = {.lex_state = 3, .external_lex_state = 1},
  [247] = {.lex_state = 0, .external_lex_state = 1},
  [248] = {.lex_state = 0, .external_lex_state = 1},
  [249] = {.lex_state = 0, .external_lex_state = 1},
  [250] = {.lex_state = 0, .external_lex_state = 1},
  [251] = {.lex_state = 0, .external_lex_state = 1},
  [252] = {.lex_state = 0, .external_lex_state = 1},
  [253] = {.lex_state = 0, .external_lex_state = 1},
  [254] = {.lex_state = 1, .external_lex_state = 1},
  [255] = {.lex_state = 0, .external_lex_state = 1},
  [256] = {.lex_state = 0, .external_lex_state = 1},
  [257] = {.lex_state = 0, .external_lex_state = 1},
  [258] = {.lex_state = 3, .external_lex_state = 1},
  [259] = {.lex_state = 2, .external_lex_state = 1},
  [260] = {.lex_state = 0, .external_lex_state = 1},
  [261] = {.lex_state = 3, .external_lex_state = 1},
  [262] = {.lex_state = 0, .external_lex_state = 1},
  [263] = {.lex_state = 0, .external_lex_state = 1},
  [264] = {.lex_state = 0, .external_lex_state = 1},
  [265] = {.lex_state = 2, .external_lex_state = 1},
  [266] = {.lex_state = 0, .external_lex_state = 1},
  [267] = {.lex_state = 16, .external_lex_state = 1},
  [268] = {.lex_state = 0, .external_lex_state = 1},
  [269] = {.lex_state = 0, .external_lex_state = 1},
  [270] = {.lex_state = 0, .external_lex_state = 1},
  [271] = {.lex_state = 0, .external_lex_state = 1},
  [272] = {.lex_state = 0, .external_lex_state = 1},
  [273] = {.lex_state = 0, .external_lex_state = 1},
  [274] = {.lex_state = 0, .external_lex_state = 1},
  [275] = {.lex_state = 0, .external_lex_state = 1},
  [276] = {.lex_state = 3, .external_lex_state = 1},
  [277] = {.lex_state = 0, .external_lex_state = 1},
  [278] = {.lex_state = 0, .external_lex_state = 1},
  [279] = {.lex_state = 0, .external_lex_state = 1},
  [280] = {.lex_state = 0, .external_lex_state = 1},
  [281] = {.lex_state = 0, .external_lex_state = 1},
  [282] = {.lex_state = 0, .external_lex_state = 1},
  [283] = {.lex_state = 0, .external_lex_state = 1},
  [284] = {.lex_state = 3, .external_lex_state = 1},
  [285] = {.lex_state = 0, .external_lex_state = 1},
  [286] = {.lex_state = 0, .external_lex_state = 1},
  [287] = {.lex_state = 0, .external_lex_state = 1},
  [288] = {.lex_state = 0, .external_lex_state = 1},
  [289] = {.lex_state = 0, .external_lex_state = 1},
  [290] = {.lex_state = 0, .external_lex_state = 1},
  [291] = {.lex_state = 0, .external_lex_state = 1},
  [292] = {.lex_state = 0, .external_lex_state = 1},
  [293] = {.lex_state = 3, .external_lex_state = 1},
  [294] = {.lex_state = 0, .external_lex_state = 1},
  [295] = {.lex_state = 0, .external_lex_state = 1},
  [296] = {.lex_state = 0, .external_lex_state = 1},
  [297] = {.lex_state = 0, .external_lex_state = 1},
  [298] = {.lex_state = 0, .external_lex_state = 1},
  [299] = {.lex_state = 0, .external_lex_state = 1},
  [300] = {.lex_state = 0, .external_lex_state = 1},
  [301] = {.lex_state = 0, .external_lex_state = 1},
  [302] = {.lex_state = 0, .external_lex_state = 1},
  [303] = {.lex_state = 0, .external_lex_state = 1},
  [304] = {.lex_state = 0, .external_lex_state = 1},
  [305] = {.lex_state = 0, .external_lex_state = 1},
  [306] = {.lex_state = 0, .external_lex_state = 1},
  [307] = {.lex_state = 0, .external_lex_state = 1},
  [308] = {.lex_state = 0, .external_lex_state = 1},
  [309] = {.lex_state = 3, .external_lex_state = 1},
  [310] = {.lex_state = 0, .external_lex_state = 1},
  [311] = {.lex_state = 0, .external_lex_state = 1},
  [312] = {.lex_state = 0, .external_lex_state = 1},
  [313] = {.lex_state = 0, .external_lex_state = 1},
  [314] = {.lex_state = 0, .external_lex_state = 1},
  [315] = {.lex_state = 0, .external_lex_state = 1},
  [316] = {.lex_state = 0, .external_lex_state = 1},
  [317] = {.lex_state = 0, .external_lex_state = 1},
  [318] = {.lex_state = 0, .external_lex_state = 1},
  [319] = {.lex_state = 0, .external_lex_state = 1},
  [320] = {.lex_state = 0, .external_lex_state = 1},
  [321] = {.lex_state = 0, .external_lex_state = 1},
  [322] = {.lex_state = 0, .external_lex_state = 1},
  [323] = {.lex_state = 0, .external_lex_state = 1},
  [324] = {.lex_state = 0, .external_lex_state = 1},
  [325] = {.lex_state = 0, .external_lex_state = 1},
  [326] = {.lex_state = 3, .external_lex_state = 1},
  [327] = {.lex_state = 3, .external_lex_state = 1},
  [328] = {.lex_state = 3, .external_lex_state = 1},
  [329] = {.lex_state = 0, .external_lex_state = 1},
  [330] = {.lex_state = 3, .external_lex_state = 1},
  [331] = {.lex_state = 0, .external_lex_state = 1},
  [332] = {.lex_state = 0, .external_lex_state = 1},
  [333] = {.lex_state = 0, .external_lex_state = 1},
  [334] = {.lex_state = 3, .external_lex_state = 1},
  [335] = {.lex_state = 3, .external_lex_state = 1},
  [336] = {.lex_state = 0, .external_lex_state = 1},
  [337] = {.lex_state = 0, .external_lex_state = 1},
  [338] = {.lex_state = 3, .external_lex_state = 1},
  [339] = {.lex_state = 0, .external_lex_state = 1},
  [340] = {.lex_state = 0, .external_lex_state = 1},
  [341] = {.lex_state = 0, .external_lex_state = 1},
  [342] = {.lex_state = 0, .external_lex_state = 1},
  [343] = {.lex_state = 0, .external_lex_state = 1},
  [344] = {.lex_state = 0, .external_lex_state = 1},
  [345] = {.lex_state = 0, .external_lex_state = 1},
  [346] = {.lex_state = 0, .external_lex_state = 1},
  [347] = {.lex_state = 0, .external_lex_state = 1},
  [348] = {.lex_state = 0, .external_lex_state = 1},
  [349] = {.lex_state = 0, .external_lex_state = 1},
  [350] = {.lex_state = 0, .external_lex_state = 1},
  [351] = {.lex_state = 0, .external_lex_state = 1},
  [352] = {.lex_state = 0, .external_lex_state = 1},
  [353] = {.lex_state = 0, .external_lex_state = 1},
  [354] = {.lex_state = 0, .external_lex_state = 1},
  [355] = {.lex_state = 0, .external_lex_state = 1},
  [356] = {.lex_state = 0, .external_lex_state = 1},
  [357] = {.lex_state = 14, .external_lex_state = 1},
  [358] = {.lex_state = 0, .external_lex_state = 1},
  [359] = {.lex_state = 0, .external_lex_state = 1},
  [360] = {.lex_state = 0, .external_lex_state = 1},
  [361] = {.lex_state = 0, .external_lex_state = 1},
  [362] = {.lex_state = 0, .external_lex_state = 1},
  [363] = {.lex_state = 0, .external_lex_state = 1},
  [364] = {.lex_state = 0, .external_lex_state = 1},
  [365] = {.lex_state = 0, .external_lex_state = 1},
  [366] = {.lex_state = 0, .external_lex_state = 1},
  [367] = {.lex_state = 14, .external_lex_state = 1},
  [368] = {.lex_state = 0, .external_lex_state = 1},
  [369] = {.lex_state = 0, .external_lex_state = 1},
  [370] = {.lex_state = 0, .external_lex_state = 1},
  [371] = {.lex_state = 0, .external_lex_state = 1},
  [372] = {.lex_state = 0, .external_lex_state = 1},
  [373] = {.lex_state = 0, .external_lex_state = 1},
  [374] = {.lex_state = 0, .external_lex_state = 1},
  [375] = {.lex_state = 0, .external_lex_state = 1},
  [376] = {.lex_state = 0, .external_lex_state = 1},
  [377] = {.lex_state = 0, .external_lex_state = 1},
  [378] = {.lex_state = 0, .external_lex_state = 1},
  [379] = {.lex_state = 0, .external_lex_state = 1},
  [380] = {.lex_state = 0, .external_lex_state = 1},
  [381] = {.lex_state = 0, .external_lex_state = 1},
  [382] = {.lex_state = 0, .external_lex_state = 1},
  [383] = {.lex_state = 0, .external_lex_state = 1},
  [384] = {.lex_state = 0, .external_lex_state = 1},
  [385] = {.lex_state = 3, .external_lex_state = 1},
  [386] = {.lex_state = 1, .external_lex_state = 1},
  [387] = {.lex_state = 1, .external_lex_state = 1},
  [388] = {.lex_state = 0, .external_lex_state = 1},
  [389] = {.lex_state = 1, .external_lex_state = 1},
  [390] = {.lex_state = 0, .external_lex_state = 1},
  [391] = {.lex_state = 0, .external_lex_state = 1},
  [392] = {.lex_state = 0, .external_lex_state = 1},
  [393] = {.lex_state = 0, .external_lex_state = 1},
  [394] = {.lex_state = 0, .external_lex_state = 1},
  [395] = {.lex_state = 0, .external_lex_state = 1},
  [396] = {.lex_state = 0, .external_lex_state = 1},
  [397] = {.lex_state = 3, .external_lex_state = 1},
  [398] = {.lex_state = 0, .external_lex_state = 1},
  [399] = {.lex_state = 0, .external_lex_state = 1},
  [400] = {.lex_state = 0, .external_lex_state = 1},
  [401] = {.lex_state = 0, .external_lex_state = 1},
  [402] = {.lex_state = 0, .external_lex_state = 1},
  [403] = {.lex_state = 0, .external_lex_state = 1},
  [404] = {.lex_state = 0, .external_lex_state = 1},
  [405] = {.lex_state = 0, .external_lex_state = 1},
  [406] = {.lex_state = 3, .external_lex_state = 1},
  [407] = {.lex_state = 0, .external_lex_state = 1},
  [408] = {.lex_state = 0, .external_lex_state = 1},
  [409] = {.lex_state = 0, .external_lex_state = 1},
  [410] = {.lex_state = 0, .external_lex_state = 1},
  [411] = {.lex_state = 0, .external_lex_state = 1},
  [412] = {.lex_state = 0, .external_lex_state = 1},
  [413] = {.lex_state = 0, .external_lex_state = 1},
  [414] = {.lex_state = 0, .external_lex_state = 1},
  [415] = {.lex_state = 0, .external_lex_state = 1},
  [416] = {.lex_state = 0, .external_lex_state = 1},
  [417] = {.lex_state = 0, .external_lex_state = 1},
  [418] = {.lex_state = 0, .external_lex_state = 1},
  [419] = {.lex_state = 0, .external_lex_state = 1},
  [420] = {.lex_state = 0, .external_lex_state = 1},
  [421] = {.lex_state = 14, .external_lex_state = 1},
  [422] = {.lex_state = 0, .external_lex_state = 1},
  [423] = {.lex_state = 0, .external_lex_state = 1},
  [424] = {.lex_state = 0, .external_lex_state = 1},
  [425] = {.lex_state = 0, .external_lex_state = 1},
  [426] = {.lex_state = 0, .external_lex_state = 1},
  [427] = {.lex_state = 0, .external_lex_state = 1},
  [428] = {.lex_state = 0, .external_lex_state = 1},
  [429] = {.lex_state = 0, .external_lex_state = 1},
  [430] = {.lex_state = 0, .external_lex_state = 1},
  [431] = {.lex_state = 0, .external_lex_state = 1},
  [432] = {.lex_state = 0, .external_lex_state = 1},
  [433] = {.lex_state = 0, .external_lex_state = 1},
  [434] = {.lex_state = 0, .external_lex_state = 1},
  [435] = {.lex_state = 0, .external_lex_state = 1},
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
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_package] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_assert] = ACTIONS(1),
    [anon_sym_panic] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_foreign] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_bounds_check] = ACTIONS(1),
    [anon_sym_no_bounds_check] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_distinct] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_when] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_imaginary_literal] = ACTIONS(1),
    [sym_rune_lit] = ACTIONS(1),
    [sym_string_lit] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_auto_cast] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_no_inline] = ACTIONS(1),
    [anon_sym_cast] = ACTIONS(1),
    [anon_sym_transmute] = ACTIONS(1),
    [anon_sym_POUNDpartial] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdynamic_RBRACK] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_bit_set] = ACTIONS(1),
    [anon_sym_opaque] = ACTIONS(1),
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
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_no_alias] = ACTIONS(1),
    [anon_sym_c_vararg] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(434),
    [sym_package_decl] = STATE(433),
    [anon_sym_package] = ACTIONS(5),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 31,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(15), 1,
      anon_sym_EQ,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_COLON,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(179), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(7), 3,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_AT,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [118] = 32,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym__expression,
    STATE(72), 1,
      sym_call_expr,
    STATE(212), 1,
      sym_polymorphic_name,
    STATE(277), 1,
      sym_plain_parameter_decl,
    STATE(313), 1,
      sym_plain_parameter_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(371), 1,
      sym_type,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(218), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [238] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(88), 1,
      sym_result,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(157), 2,
      sym_plain_parameters,
      sym_type,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [349] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(36), 1,
      sym_call_expr,
    STATE(61), 1,
      sym__expression,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(374), 1,
      sym_type,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(373), 2,
      sym__array_length,
      sym__enumerated_array_type,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [460] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(36), 1,
      sym_call_expr,
    STATE(61), 1,
      sym__expression,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(374), 1,
      sym_type,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(426), 2,
      sym__array_length,
      sym__enumerated_array_type,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [571] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(307), 1,
      sym_type,
    STATE(337), 1,
      sym_type_or_with_specialization,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [681] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(306), 1,
      sym_type_or_with_specialization,
    STATE(307), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [791] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(307), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(347), 1,
      sym_type_or_with_specialization,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [901] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(307), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(350), 1,
      sym_type_or_with_specialization,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1011] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(116), 1,
      sym_type,
    STATE(148), 1,
      sym__element_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1121] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(307), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(346), 1,
      sym_type_or_with_specialization,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1231] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(307), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(345), 1,
      sym_type_or_with_specialization,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1341] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(116), 1,
      sym_type,
    STATE(120), 1,
      sym__element_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1451] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(36), 1,
      sym_call_expr,
    STATE(47), 1,
      sym__expression,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(296), 1,
      sym_type,
    STATE(298), 1,
      sym_bitset_key_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1561] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(55), 1,
      anon_sym_typeid,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(283), 1,
      sym_polymorphic_name,
    STATE(307), 1,
      sym_type,
    STATE(324), 1,
      sym_type_or_with_specialization,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1671] = 29,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    STATE(392), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1781] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(97), 1,
      sym_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1888] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(142), 1,
      sym_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [1995] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    STATE(411), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2102] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(321), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2209] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(355), 1,
      sym_type,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2316] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(117), 1,
      sym_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2423] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(185), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2530] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(115), 1,
      sym_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2637] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(114), 1,
      sym_type,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2744] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(72), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(371), 1,
      sym_type,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2851] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(323), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [2958] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(160), 1,
      sym_type,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [3065] = 28,
    ACTIONS(9), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_proc,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACKdynamic_RBRACK,
    ACTIONS(29), 1,
      anon_sym_map,
    ACTIONS(31), 1,
      anon_sym_CARET,
    ACTIONS(33), 1,
      anon_sym_bit_set,
    ACTIONS(35), 1,
      anon_sym_opaque,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(39), 1,
      anon_sym_typeid,
    ACTIONS(41), 1,
      anon_sym_struct,
    ACTIONS(43), 1,
      anon_sym_union,
    ACTIONS(45), 1,
      anon_sym_enum,
    ACTIONS(47), 1,
      anon_sym_bit_field,
    STATE(35), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(159), 1,
      sym_polymorphic_name,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    STATE(429), 1,
      sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
    STATE(131), 18,
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
  [3172] = 15,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(61), 2,
      sym_identifier,
      anon_sym_EQ,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(59), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_RBRACK,
  [3247] = 15,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(85), 2,
      sym_identifier,
      anon_sym_EQ,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(83), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_RBRACK,
  [3322] = 15,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(89), 2,
      sym_identifier,
      anon_sym_EQ,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(87), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_RBRACK,
  [3397] = 15,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(93), 2,
      sym_identifier,
      anon_sym_EQ,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(91), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_RBRACK,
  [3472] = 16,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(97), 2,
      sym_identifier,
      anon_sym_EQ,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(95), 9,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [3548] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(101), 25,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3597] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(107), 26,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3644] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(113), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(111), 26,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3691] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(115), 26,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3738] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(119), 26,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3785] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(123), 26,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3832] = 18,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(143), 1,
      sym_binary_op,
    STATE(174), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(127), 4,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_AT,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [3908] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(135), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(133), 25,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [3954] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(139), 12,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_if,
      anon_sym_when,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(137), 25,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_QMARK,
      sym_range_op,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_RBRACK,
  [4000] = 16,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(143), 1,
      sym_identifier,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(141), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_AT,
  [4071] = 16,
    ACTIONS(63), 1,
      anon_sym_if,
    ACTIONS(65), 1,
      anon_sym_when,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(147), 1,
      sym_identifier,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(71), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
    ACTIONS(145), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_AT,
  [4142] = 16,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    ACTIONS(153), 1,
      sym_range_op,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(95), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4210] = 14,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(59), 4,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_else,
      anon_sym_where,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4274] = 14,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(91), 4,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_else,
      anon_sym_where,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4338] = 14,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(83), 4,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_else,
      anon_sym_where,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4402] = 14,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(87), 4,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_else,
      anon_sym_where,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4466] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(161), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4531] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4596] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4661] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4726] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(169), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4791] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(171), 2,
      anon_sym_LBRACE,
      anon_sym_where,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4856] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(173), 2,
      anon_sym_LBRACE,
      anon_sym_where,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4921] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    ACTIONS(175), 1,
      anon_sym_COLON,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [4985] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    ACTIONS(177), 1,
      anon_sym_LBRACE,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [5049] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [5113] = 14,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(157), 1,
      anon_sym_if,
    ACTIONS(159), 1,
      anon_sym_when,
    STATE(161), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(99), 2,
      anon_sym_QMARK,
      anon_sym_else,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [5175] = 15,
    ACTIONS(75), 1,
      anon_sym_PIPE,
    ACTIONS(99), 1,
      anon_sym_QMARK,
    ACTIONS(149), 1,
      anon_sym_if,
    ACTIONS(151), 1,
      anon_sym_when,
    ACTIONS(181), 1,
      anon_sym_COLON,
    STATE(143), 1,
      sym_binary_op,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(69), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 2,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
    ACTIONS(155), 2,
      anon_sym_in,
      anon_sym_not_in,
    ACTIONS(73), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
    ACTIONS(79), 3,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(67), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    STATE(412), 4,
      sym_rel_op,
      sym_contain_op,
      sym_add_op,
      sym_mul_op,
    ACTIONS(77), 5,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
  [5239] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(123), 23,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5277] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(115), 23,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5315] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(113), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(111), 23,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5353] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(107), 23,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5391] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(119), 23,
      anon_sym_LBRACE,
      anon_sym_LPAREN,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5429] = 4,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(101), 22,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5469] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(135), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(133), 22,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5506] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(139), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(137), 22,
      anon_sym_LBRACE,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_else,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
      anon_sym_where,
  [5543] = 5,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(103), 6,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PIPE,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
    ACTIONS(101), 19,
      anon_sym_QMARK,
      anon_sym_if,
      anon_sym_when,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_in,
      anon_sym_not_in,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_TILDE,
      anon_sym_STAR,
      anon_sym_PERCENT_PERCENT,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_AMP_TILDE,
      anon_sym_PIPE_PIPE,
      anon_sym_AMP_AMP,
  [5583] = 12,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_import,
    ACTIONS(191), 1,
      anon_sym_foreign,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_AT,
    STATE(75), 1,
      aux_sym_source_file_repeat1,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(81), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
    STATE(418), 6,
      sym__top_level_decl,
      sym_const_assert_panic,
      sym_import_decl,
      sym_foreign_import_decl,
      sym_foreign_block_decl,
      sym_value_decl,
  [5628] = 12,
    ACTIONS(187), 1,
      anon_sym_POUND,
    ACTIONS(189), 1,
      anon_sym_import,
    ACTIONS(191), 1,
      anon_sym_foreign,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_AT,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
    STATE(73), 1,
      aux_sym_source_file_repeat1,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(81), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
    STATE(418), 6,
      sym__top_level_decl,
      sym_const_assert_panic,
      sym_import_decl,
      sym_foreign_import_decl,
      sym_foreign_block_decl,
      sym_value_decl,
  [5673] = 12,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 1,
      anon_sym_POUND,
    ACTIONS(204), 1,
      anon_sym_import,
    ACTIONS(207), 1,
      anon_sym_foreign,
    ACTIONS(210), 1,
      sym_identifier,
    ACTIONS(213), 1,
      anon_sym_AT,
    STATE(75), 1,
      aux_sym_source_file_repeat1,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(81), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
    STATE(418), 6,
      sym__top_level_decl,
      sym_const_assert_panic,
      sym_import_decl,
      sym_foreign_import_decl,
      sym_foreign_block_decl,
      sym_value_decl,
  [5718] = 13,
    ACTIONS(216), 1,
      anon_sym_proc,
    ACTIONS(218), 1,
      anon_sym_distinct,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(46), 1,
      sym__expression,
    STATE(183), 1,
      sym_const_expression,
    STATE(184), 1,
      sym_procedure_group,
    STATE(232), 1,
      sym_const_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [5763] = 13,
    ACTIONS(216), 1,
      anon_sym_proc,
    ACTIONS(218), 1,
      anon_sym_distinct,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(46), 1,
      sym__expression,
    STATE(183), 1,
      sym_const_expression,
    STATE(184), 1,
      sym_procedure_group,
    STATE(223), 1,
      sym_const_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [5808] = 12,
    ACTIONS(216), 1,
      anon_sym_proc,
    ACTIONS(218), 1,
      anon_sym_distinct,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(46), 1,
      sym__expression,
    STATE(184), 1,
      sym_procedure_group,
    STATE(208), 1,
      sym_const_expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [5850] = 12,
    ACTIONS(216), 1,
      anon_sym_proc,
    ACTIONS(218), 1,
      anon_sym_distinct,
    ACTIONS(220), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym__expression,
    STATE(72), 1,
      sym_call_expr,
    STATE(184), 1,
      sym_procedure_group,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    STATE(425), 1,
      sym_const_expression,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [5892] = 5,
    ACTIONS(224), 1,
      anon_sym_POUND,
    ACTIONS(226), 1,
      anon_sym_DASH_GT,
    STATE(141), 1,
      sym_procedure_tags,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(222), 10,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [5918] = 9,
    ACTIONS(189), 1,
      anon_sym_import,
    ACTIONS(191), 1,
      anon_sym_foreign,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(195), 1,
      anon_sym_AT,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
    STATE(404), 4,
      sym_import_decl,
      sym_foreign_import_decl,
      sym_foreign_block_decl,
      sym_value_decl,
  [5952] = 3,
    ACTIONS(230), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(228), 12,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_DOT_DOT,
      anon_sym_RBRACK,
  [5974] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(343), 1,
      sym_expression_list,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6007] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(234), 1,
      anon_sym_DOT_DOT,
    STATE(36), 1,
      sym_call_expr,
    STATE(54), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6040] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(351), 1,
      sym_expression_list,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6073] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(236), 12,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
  [6092] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(360), 1,
      sym_expression_list,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6125] = 4,
    ACTIONS(224), 1,
      anon_sym_POUND,
    STATE(150), 1,
      sym_procedure_tags,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(238), 10,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6148] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(290), 1,
      sym_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6181] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(240), 12,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
  [6200] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(242), 12,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
      anon_sym_DASH_GT,
  [6219] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(222), 1,
      sym_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6252] = 11,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      sym_identifier,
    ACTIONS(248), 1,
      anon_sym_RPAREN,
    STATE(195), 1,
      sym_polymorphic_name,
    STATE(210), 1,
      sym_parameter_prefixes,
    STATE(288), 1,
      sym_parameter_decl,
    STATE(308), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 2,
      anon_sym_auto_cast,
      anon_sym_using,
    STATE(219), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [6289] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(333), 1,
      sym_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6322] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(226), 1,
      sym_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6355] = 9,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(42), 1,
      sym__expression,
    STATE(339), 1,
      sym_expression_list,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6388] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(252), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6406] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(254), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6424] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(58), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(435), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6454] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(258), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6472] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(260), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6490] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(262), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6508] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(55), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6538] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(264), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6556] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(266), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6574] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(268), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6592] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(56), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6622] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(270), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6640] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(272), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6658] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(435), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6688] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(52), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6718] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(297), 1,
      sym_condition,
    STATE(302), 1,
      sym_atom_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6748] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(299), 1,
      sym_condition,
    STATE(302), 1,
      sym_atom_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6778] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(274), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6796] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(276), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6814] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(278), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6832] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(280), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6850] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(59), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [6880] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(282), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6898] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(284), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6916] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(286), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6934] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(288), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6952] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(290), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [6970] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7000] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(292), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7018] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(294), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7036] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(296), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7054] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(298), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7072] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(435), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7102] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(32), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7132] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7150] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(300), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7168] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(302), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7186] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(45), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7216] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(304), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7234] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(310), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7264] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(314), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7294] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(33), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7324] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(306), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7342] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(308), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7360] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(310), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7378] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(312), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7396] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym__expression,
    STATE(36), 1,
      sym_call_expr,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7426] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(63), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7456] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(314), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7474] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(316), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7492] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(318), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7510] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(320), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7528] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(60), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7558] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(322), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7576] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(435), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7606] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(48), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(435), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7636] = 8,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_call_expr,
    STATE(53), 1,
      sym__expression,
    STATE(342), 1,
      sym_atom_expr,
    STATE(380), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(43), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(44), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7666] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(324), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7684] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(326), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7702] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(328), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7720] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(330), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7738] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(332), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7756] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7774] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(336), 11,
      anon_sym_SEMI,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_AT,
      anon_sym_RBRACK,
  [7792] = 8,
    ACTIONS(256), 1,
      anon_sym_LPAREN,
    STATE(49), 1,
      sym__expression,
    STATE(69), 1,
      sym_call_expr,
    STATE(302), 1,
      sym_atom_expr,
    STATE(435), 1,
      sym_condition,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(70), 3,
      sym_binary_expr,
      sym_ternary_expr,
      sym_unary_expr,
    STATE(71), 3,
      sym_question_ternary_expr,
      sym_if_ternary_expr,
      sym_when_ternary_expr,
  [7822] = 8,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_AT,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(165), 2,
      sym_value_decl,
      aux_sym_foreign_block_decl_repeat1,
    STATE(168), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
  [7851] = 8,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(167), 2,
      sym_value_decl,
      aux_sym_foreign_block_decl_repeat1,
    STATE(168), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
  [7880] = 8,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(348), 1,
      sym_identifier,
    ACTIONS(351), 1,
      anon_sym_AT,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(164), 2,
      sym_value_decl,
      aux_sym_foreign_block_decl_repeat1,
    STATE(168), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
  [7909] = 8,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_AT,
    ACTIONS(354), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(164), 2,
      sym_value_decl,
      aux_sym_foreign_block_decl_repeat1,
    STATE(168), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
  [7938] = 9,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(244), 1,
      anon_sym_POUND,
    ACTIONS(246), 1,
      sym_identifier,
    STATE(195), 1,
      sym_polymorphic_name,
    STATE(210), 1,
      sym_parameter_prefixes,
    STATE(311), 1,
      sym_parameter_decl,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(250), 2,
      anon_sym_auto_cast,
      anon_sym_using,
    STATE(219), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [7969] = 8,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_AT,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(164), 2,
      sym_value_decl,
      aux_sym_foreign_block_decl_repeat1,
    STATE(168), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
  [7998] = 7,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(342), 1,
      anon_sym_AT,
    STATE(258), 1,
      sym_value_decl,
    STATE(415), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(216), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    STATE(220), 2,
      sym_const_decl,
      sym_var_decl,
  [8023] = 8,
    ACTIONS(356), 1,
      anon_sym_POUND,
    ACTIONS(358), 1,
      anon_sym_LBRACE,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_where,
    STATE(207), 1,
      sym_polymorphic_parameter_list,
    STATE(287), 1,
      sym_union_type_tags,
    STATE(382), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8049] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(117), 3,
      anon_sym_import,
      anon_sym_foreign,
      sym_identifier,
    ACTIONS(115), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8065] = 4,
    ACTIONS(364), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(141), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8083] = 7,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(367), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_polymorphic_name,
    STATE(325), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(369), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [8107] = 7,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    STATE(245), 1,
      sym_polymorphic_name,
    STATE(325), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(369), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [8131] = 4,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    STATE(171), 1,
      aux_sym_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(371), 5,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8149] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 3,
      anon_sym_import,
      anon_sym_foreign,
      sym_identifier,
    ACTIONS(119), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8165] = 8,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(375), 1,
      anon_sym_LBRACE,
    STATE(201), 1,
      sym_polymorphic_parameter_list,
    STATE(271), 1,
      sym_struct_type_tags,
    STATE(377), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8191] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 3,
      anon_sym_import,
      anon_sym_foreign,
      sym_identifier,
    ACTIONS(123), 4,
      anon_sym_SEMI,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8207] = 6,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(245), 1,
      sym_polymorphic_name,
    STATE(268), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(369), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [8228] = 4,
    ACTIONS(379), 1,
      anon_sym_EQ,
    ACTIONS(381), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(377), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8245] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_const_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(383), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8262] = 4,
    ACTIONS(389), 1,
      anon_sym_COMMA,
    STATE(181), 1,
      aux_sym_const_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8279] = 7,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(392), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_bitfield_field,
    STATE(305), 1,
      sym_bitfield_field_list,
    STATE(420), 1,
      sym_bitfield_fields,
    STATE(428), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8302] = 4,
    ACTIONS(385), 1,
      anon_sym_COMMA,
    STATE(180), 1,
      aux_sym_const_expression_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(394), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8319] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(145), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8332] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(396), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8345] = 6,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(195), 1,
      sym_polymorphic_name,
    STATE(340), 1,
      sym_plain_parameter_decl,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(218), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [8366] = 4,
    ACTIONS(402), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(187), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
    ACTIONS(400), 3,
      anon_sym_import,
      anon_sym_foreign,
      sym_identifier,
  [8383] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(405), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8396] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_POUND,
      anon_sym_AT,
    ACTIONS(407), 3,
      anon_sym_import,
      anon_sym_foreign,
      sym_identifier,
  [8411] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(409), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8424] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(411), 6,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_AT,
  [8437] = 6,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(245), 1,
      sym_polymorphic_name,
    STATE(325), 1,
      sym_polymorphic_parameter,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(369), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [8458] = 7,
    ACTIONS(340), 1,
      sym_identifier,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    STATE(242), 1,
      sym_bitfield_field,
    STATE(305), 1,
      sym_bitfield_field_list,
    STATE(428), 1,
      sym_identifier_list,
    STATE(430), 1,
      sym_bitfield_fields,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8481] = 6,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(419), 1,
      sym_string_lit,
    STATE(228), 1,
      sym__package_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(401), 2,
      sym__import_path,
      sym_foreign_import_paths,
  [8502] = 4,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8518] = 3,
    STATE(200), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(425), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8532] = 6,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_using,
    STATE(274), 1,
      sym_struct_field_decl,
    STATE(291), 1,
      sym_struct_field_list,
    STATE(388), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8552] = 3,
    STATE(214), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(429), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8566] = 6,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_using,
    STATE(274), 1,
      sym_struct_field_decl,
    STATE(344), 1,
      sym_struct_field_list,
    STATE(388), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8586] = 4,
    ACTIONS(431), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(434), 3,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8602] = 6,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(373), 1,
      anon_sym_POUND,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(262), 1,
      sym_struct_type_tags,
    STATE(361), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8622] = 6,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(440), 1,
      anon_sym_RPAREN,
    ACTIONS(442), 1,
      anon_sym_DOT_DOT,
    STATE(251), 1,
      sym_argument_element,
    STATE(300), 1,
      sym_argument_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8642] = 6,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_using,
    STATE(274), 1,
      sym_struct_field_decl,
    STATE(329), 1,
      sym_struct_field_list,
    STATE(388), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8662] = 4,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 3,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8678] = 6,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_DOT_DOT,
    ACTIONS(448), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_argument_element,
    STATE(331), 1,
      sym_argument_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8698] = 6,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_DOT_DOT,
    ACTIONS(450), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_argument_element,
    STATE(303), 1,
      sym_argument_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8718] = 6,
    ACTIONS(356), 1,
      anon_sym_POUND,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(236), 1,
      sym_union_type_tags,
    STATE(390), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8738] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(387), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8750] = 6,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_DOT_DOT,
    ACTIONS(454), 1,
      anon_sym_RPAREN,
    STATE(251), 1,
      sym_argument_element,
    STATE(316), 1,
      sym_argument_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8770] = 5,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    ACTIONS(398), 1,
      sym_identifier,
    STATE(195), 1,
      sym_polymorphic_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(215), 2,
      sym_identifier_list,
      sym_polymorphic_name_list,
  [8788] = 6,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_using,
    STATE(274), 1,
      sym_struct_field_decl,
    STATE(353), 1,
      sym_struct_field_list,
    STATE(388), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8808] = 4,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    STATE(198), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(423), 3,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8824] = 4,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(196), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(446), 3,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8840] = 4,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(214), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 3,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8856] = 4,
    ACTIONS(463), 1,
      anon_sym_COLON,
    ACTIONS(465), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(461), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8871] = 4,
    ACTIONS(467), 1,
      sym_identifier,
    ACTIONS(469), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(216), 2,
      sym_attribute,
      aux_sym__top_level_decl_repeat1,
  [8886] = 5,
    ACTIONS(472), 1,
      anon_sym_RBRACE,
    ACTIONS(474), 1,
      sym_string_lit,
    STATE(257), 1,
      sym__import_path,
    STATE(349), 1,
      sym_foreign_import_path_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8903] = 4,
    ACTIONS(478), 1,
      anon_sym_COLON,
    ACTIONS(480), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(476), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8918] = 4,
    ACTIONS(484), 1,
      anon_sym_COLON,
    ACTIONS(486), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(482), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [8933] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(488), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8944] = 5,
    ACTIONS(417), 1,
      sym_identifier,
    ACTIONS(490), 1,
      sym_string_lit,
    STATE(320), 1,
      sym__package_name,
    STATE(408), 1,
      sym__import_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [8961] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(492), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8972] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(494), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [8983] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(459), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [8994] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_CARET,
    STATE(108), 1,
      sym_pointer_type,
    STATE(109), 1,
      sym_slice_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9011] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(496), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [9022] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(434), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DOT_DOT,
  [9033] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
    ACTIONS(498), 1,
      sym_string_lit,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(370), 2,
      sym__import_path,
      sym_foreign_import_paths,
  [9048] = 3,
    ACTIONS(502), 1,
      anon_sym_AT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(500), 3,
      anon_sym_import,
      anon_sym_foreign,
      sym_identifier,
  [9061] = 5,
    ACTIONS(193), 1,
      sym_identifier,
    ACTIONS(427), 1,
      anon_sym_using,
    STATE(322), 1,
      sym_struct_field_decl,
    STATE(388), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9078] = 5,
    ACTIONS(25), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(31), 1,
      anon_sym_CARET,
    STATE(126), 1,
      sym_slice_type,
    STATE(127), 1,
      sym_pointer_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9095] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(504), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [9106] = 4,
    ACTIONS(506), 1,
      anon_sym_COMMA,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    STATE(233), 1,
      aux_sym_polymorphic_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9120] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(511), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_where,
  [9130] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(513), 3,
      anon_sym_SEMI,
      anon_sym_LBRACE,
      sym_string_lit,
  [9140] = 4,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    STATE(378), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9154] = 3,
    ACTIONS(519), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(517), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [9166] = 4,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(523), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9180] = 4,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(312), 1,
      sym_call_expr,
    STATE(315), 1,
      sym_atom_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9194] = 4,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(238), 1,
      sym_element,
    STATE(294), 1,
      sym_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9208] = 4,
    ACTIONS(527), 1,
      anon_sym_import,
    ACTIONS(529), 1,
      anon_sym_LBRACE,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9222] = 4,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(535), 1,
      anon_sym_RBRACE,
    STATE(285), 1,
      aux_sym_bitfield_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9236] = 4,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    ACTIONS(446), 1,
      anon_sym_COLON,
    STATE(247), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9250] = 4,
    ACTIONS(537), 1,
      sym_identifier,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(229), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9264] = 4,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(423), 1,
      anon_sym_COLON,
    STATE(249), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9278] = 4,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(543), 1,
      anon_sym_LPAREN,
    STATE(335), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9292] = 4,
    ACTIONS(425), 1,
      anon_sym_COLON,
    ACTIONS(444), 1,
      anon_sym_COMMA,
    STATE(200), 1,
      aux_sym_identifier_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9306] = 4,
    ACTIONS(545), 1,
      anon_sym_COMMA,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      aux_sym_foreign_import_path_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9320] = 4,
    ACTIONS(421), 1,
      anon_sym_COMMA,
    ACTIONS(429), 1,
      anon_sym_COLON,
    STATE(214), 1,
      aux_sym_polymorphic_name_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9334] = 3,
    ACTIONS(552), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(550), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9346] = 4,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    STATE(263), 1,
      aux_sym_argument_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9360] = 4,
    ACTIONS(558), 1,
      anon_sym_simd,
    ACTIONS(560), 1,
      anon_sym_relative,
    ACTIONS(562), 1,
      anon_sym_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9374] = 4,
    ACTIONS(564), 1,
      anon_sym_LPAREN,
    STATE(80), 1,
      sym_parameters,
    STATE(106), 1,
      sym_signature,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9388] = 4,
    ACTIONS(566), 1,
      anon_sym_POUND,
    ACTIONS(568), 1,
      anon_sym_LBRACE,
    STATE(396), 1,
      sym_bitfield_tags,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9402] = 4,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9416] = 4,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(577), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_plain_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9430] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(581), 1,
      anon_sym_RBRACE,
    STATE(279), 1,
      aux_sym_foreign_import_path_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9444] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(346), 3,
      anon_sym_RBRACE,
      sym_identifier,
      anon_sym_AT,
  [9454] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(583), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_where,
  [9464] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(587), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_struct_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9478] = 4,
    ACTIONS(438), 1,
      sym_identifier,
    ACTIONS(442), 1,
      anon_sym_DOT_DOT,
    STATE(348), 1,
      sym_argument_element,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9492] = 4,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    STATE(358), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9506] = 4,
    ACTIONS(554), 1,
      anon_sym_COMMA,
    ACTIONS(591), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_argument_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9520] = 4,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(595), 1,
      anon_sym_RPAREN,
    STATE(256), 1,
      aux_sym_plain_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9534] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(597), 3,
      anon_sym_POUND,
      anon_sym_LBRACE,
      anon_sym_where,
  [9544] = 4,
    ACTIONS(369), 1,
      anon_sym_RPAREN,
    ACTIONS(599), 1,
      anon_sym_COMMA,
    STATE(233), 1,
      aux_sym_polymorphic_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9558] = 4,
    ACTIONS(21), 1,
      anon_sym_POUNDpartial,
    ACTIONS(601), 1,
      anon_sym_LBRACK,
    STATE(158), 1,
      sym_array_type,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9572] = 4,
    ACTIONS(603), 1,
      anon_sym_COMMA,
    ACTIONS(605), 1,
      anon_sym_RPAREN,
    STATE(266), 1,
      aux_sym_polymorphic_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9586] = 4,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    STATE(304), 1,
      sym_call_expr,
    STATE(315), 1,
      sym_atom_expr,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9600] = 3,
    ACTIONS(607), 1,
      anon_sym_align,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(609), 2,
      anon_sym_packed,
      anon_sym_raw_union,
  [9612] = 4,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    STATE(361), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9626] = 3,
    ACTIONS(611), 1,
      anon_sym_align,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(613), 2,
      anon_sym_no_nil,
      anon_sym_maybe,
  [9638] = 4,
    ACTIONS(615), 1,
      anon_sym_COMMA,
    ACTIONS(618), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_bitfield_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9652] = 4,
    ACTIONS(585), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(260), 1,
      aux_sym_struct_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9666] = 4,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(625), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9680] = 4,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(238), 1,
      sym_element,
    STATE(292), 1,
      sym_element_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9694] = 4,
    ACTIONS(593), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_RPAREN,
    STATE(264), 1,
      aux_sym_plain_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9708] = 4,
    ACTIONS(521), 1,
      anon_sym_COMMA,
    ACTIONS(629), 1,
      anon_sym_RBRACE,
    STATE(275), 1,
      aux_sym_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9722] = 4,
    ACTIONS(579), 1,
      anon_sym_COMMA,
    ACTIONS(631), 1,
      anon_sym_RBRACE,
    STATE(248), 1,
      aux_sym_foreign_import_path_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9736] = 4,
    ACTIONS(633), 1,
      anon_sym_COMMA,
    ACTIONS(636), 1,
      anon_sym_RPAREN,
    STATE(280), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9750] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(638), 3,
      anon_sym_no_alias,
      anon_sym_c_vararg,
      anon_sym_const,
  [9760] = 3,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(640), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9772] = 3,
    ACTIONS(642), 1,
      anon_sym_SLASH,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(334), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [9784] = 4,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(341), 1,
      sym_bitfield_field,
    STATE(428), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9798] = 4,
    ACTIONS(533), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_bitfield_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9812] = 4,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(286), 1,
      aux_sym_argument_element_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9826] = 4,
    ACTIONS(362), 1,
      anon_sym_where,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(390), 1,
      sym_where_clause,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9840] = 4,
    ACTIONS(570), 1,
      anon_sym_COMMA,
    ACTIONS(651), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9854] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(656), 1,
      anon_sym_RBRACE,
    STATE(289), 1,
      aux_sym_struct_field_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9868] = 3,
    ACTIONS(658), 1,
      anon_sym_COMMA,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9879] = 3,
    ACTIONS(662), 1,
      anon_sym_COMMA,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9890] = 3,
    ACTIONS(666), 1,
      anon_sym_COMMA,
    ACTIONS(668), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9901] = 3,
    ACTIONS(340), 1,
      sym_identifier,
    STATE(379), 1,
      sym_identifier_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9912] = 3,
    ACTIONS(670), 1,
      anon_sym_COMMA,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9923] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(674), 2,
      anon_sym_LBRACE,
      anon_sym_where,
  [9932] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(676), 2,
      anon_sym_SEMI,
      anon_sym_RBRACK,
  [9941] = 3,
    ACTIONS(678), 1,
      anon_sym_QMARK,
    ACTIONS(680), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9952] = 3,
    ACTIONS(682), 1,
      anon_sym_SEMI,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9963] = 3,
    ACTIONS(678), 1,
      anon_sym_QMARK,
    ACTIONS(686), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9974] = 3,
    ACTIONS(688), 1,
      anon_sym_COMMA,
    ACTIONS(690), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [9985] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(692), 2,
      anon_sym_assert,
      anon_sym_panic,
  [9994] = 3,
    ACTIONS(694), 1,
      anon_sym_LPAREN,
    STATE(67), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10005] = 3,
    ACTIONS(696), 1,
      anon_sym_COMMA,
    ACTIONS(698), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10016] = 3,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10027] = 3,
    ACTIONS(700), 1,
      anon_sym_COMMA,
    ACTIONS(702), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10038] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(704), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10047] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(706), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10056] = 3,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    ACTIONS(710), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10067] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(712), 2,
      sym_identifier,
      anon_sym_DOLLAR,
  [10076] = 3,
    ACTIONS(678), 1,
      anon_sym_QMARK,
    ACTIONS(714), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10087] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(636), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10096] = 3,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(716), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10107] = 3,
    ACTIONS(718), 1,
      anon_sym_COMMA,
    ACTIONS(720), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10118] = 3,
    ACTIONS(678), 1,
      anon_sym_QMARK,
    ACTIONS(722), 1,
      anon_sym_else,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10129] = 3,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10140] = 3,
    ACTIONS(724), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10151] = 3,
    ACTIONS(728), 1,
      sym_string_lit,
    STATE(319), 1,
      sym__import_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10162] = 3,
    ACTIONS(539), 1,
      anon_sym_LPAREN,
    STATE(403), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10173] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(548), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10182] = 3,
    ACTIONS(730), 1,
      sym_string_lit,
    STATE(402), 1,
      sym__import_path,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10193] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(732), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10202] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(656), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10211] = 3,
    ACTIONS(734), 1,
      anon_sym_COMMA,
    ACTIONS(736), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10222] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(738), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10231] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(509), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10240] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(740), 2,
      sym_identifier,
      anon_sym_DOLLAR,
  [10249] = 3,
    ACTIONS(525), 1,
      sym_identifier,
    STATE(336), 1,
      sym_element,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10260] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(115), 2,
      sym_identifier,
      anon_sym_AT,
  [10269] = 3,
    ACTIONS(742), 1,
      anon_sym_COMMA,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10280] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(119), 2,
      sym_identifier,
      anon_sym_AT,
  [10289] = 3,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(748), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10300] = 3,
    ACTIONS(37), 1,
      anon_sym_DOLLAR,
    STATE(224), 1,
      sym_polymorphic_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10311] = 3,
    ACTIONS(750), 1,
      anon_sym_COMMA,
    ACTIONS(752), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10322] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(123), 2,
      sym_identifier,
      anon_sym_AT,
  [10331] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(502), 2,
      sym_identifier,
      anon_sym_AT,
  [10340] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(625), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10349] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(754), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10358] = 3,
    ACTIONS(417), 1,
      sym_identifier,
    STATE(431), 1,
      sym__package_name,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10369] = 3,
    ACTIONS(756), 1,
      anon_sym_COMMA,
    ACTIONS(758), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10380] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(577), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10389] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(618), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10398] = 3,
    ACTIONS(760), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_arguments,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10409] = 3,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10420] = 3,
    ACTIONS(766), 1,
      anon_sym_COMMA,
    ACTIONS(768), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10431] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(770), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10440] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(772), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10449] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(774), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10458] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(649), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10467] = 3,
    ACTIONS(776), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10478] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(780), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10487] = 3,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10498] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(786), 2,
      anon_sym_LBRACE,
      anon_sym_where,
  [10507] = 3,
    ACTIONS(788), 1,
      anon_sym_COMMA,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10518] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(792), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10527] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(794), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [10536] = 2,
    ACTIONS(796), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10544] = 2,
    ACTIONS(465), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10552] = 2,
    ACTIONS(798), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10560] = 2,
    ACTIONS(800), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10568] = 2,
    ACTIONS(802), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10576] = 2,
    ACTIONS(589), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10584] = 2,
    ACTIONS(664), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10592] = 2,
    ACTIONS(672), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10600] = 2,
    ACTIONS(804), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10608] = 2,
    ACTIONS(790), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10616] = 2,
    ACTIONS(806), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10624] = 2,
    ACTIONS(808), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10632] = 2,
    ACTIONS(784), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10640] = 2,
    ACTIONS(810), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10648] = 2,
    ACTIONS(812), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10656] = 2,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10664] = 2,
    ACTIONS(816), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10672] = 2,
    ACTIONS(818), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10680] = 2,
    ACTIONS(820), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10688] = 2,
    ACTIONS(822), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10696] = 2,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10704] = 2,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10712] = 2,
    ACTIONS(824), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10720] = 2,
    ACTIONS(826), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10728] = 2,
    ACTIONS(828), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10736] = 2,
    ACTIONS(830), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10744] = 2,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10752] = 2,
    ACTIONS(832), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10760] = 2,
    ACTIONS(834), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10768] = 2,
    ACTIONS(836), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10776] = 2,
    ACTIONS(838), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10784] = 2,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10792] = 2,
    ACTIONS(842), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10800] = 2,
    ACTIONS(844), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10808] = 2,
    ACTIONS(515), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10816] = 2,
    ACTIONS(846), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10824] = 2,
    ACTIONS(848), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10832] = 2,
    ACTIONS(660), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10840] = 2,
    ACTIONS(850), 1,
      anon_sym_align,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10848] = 2,
    ACTIONS(852), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10856] = 2,
    ACTIONS(854), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10864] = 2,
    ACTIONS(856), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10872] = 2,
    ACTIONS(744), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10880] = 2,
    ACTIONS(858), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10888] = 2,
    ACTIONS(860), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10896] = 2,
    ACTIONS(862), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10904] = 2,
    ACTIONS(864), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10912] = 2,
    ACTIONS(866), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10920] = 2,
    ACTIONS(868), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10928] = 2,
    ACTIONS(870), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10936] = 2,
    ACTIONS(872), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10944] = 2,
    ACTIONS(874), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10952] = 2,
    ACTIONS(876), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10960] = 2,
    ACTIONS(878), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10968] = 2,
    ACTIONS(880), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10976] = 2,
    ACTIONS(882), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10984] = 2,
    ACTIONS(884), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [10992] = 2,
    ACTIONS(886), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11000] = 2,
    ACTIONS(888), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11008] = 2,
    ACTIONS(890), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11016] = 2,
    ACTIONS(892), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11024] = 2,
    ACTIONS(894), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11032] = 2,
    ACTIONS(896), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11040] = 2,
    ACTIONS(898), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11048] = 2,
    ACTIONS(413), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11056] = 2,
    ACTIONS(900), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11064] = 2,
    ACTIONS(902), 1,
      anon_sym_optional_ok,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11072] = 2,
    ACTIONS(904), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11080] = 2,
    ACTIONS(906), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11088] = 2,
    ACTIONS(908), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11096] = 2,
    ACTIONS(910), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11104] = 2,
    ACTIONS(912), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11112] = 2,
    ACTIONS(914), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11120] = 2,
    ACTIONS(916), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11128] = 2,
    ACTIONS(918), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11136] = 2,
    ACTIONS(920), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11144] = 2,
    ACTIONS(922), 1,
      anon_sym_RBRACE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11152] = 2,
    ACTIONS(924), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11160] = 2,
    ACTIONS(926), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [11168] = 2,
    ACTIONS(678), 1,
      anon_sym_QMARK,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 118,
  [SMALL_STATE(4)] = 238,
  [SMALL_STATE(5)] = 349,
  [SMALL_STATE(6)] = 460,
  [SMALL_STATE(7)] = 571,
  [SMALL_STATE(8)] = 681,
  [SMALL_STATE(9)] = 791,
  [SMALL_STATE(10)] = 901,
  [SMALL_STATE(11)] = 1011,
  [SMALL_STATE(12)] = 1121,
  [SMALL_STATE(13)] = 1231,
  [SMALL_STATE(14)] = 1341,
  [SMALL_STATE(15)] = 1451,
  [SMALL_STATE(16)] = 1561,
  [SMALL_STATE(17)] = 1671,
  [SMALL_STATE(18)] = 1781,
  [SMALL_STATE(19)] = 1888,
  [SMALL_STATE(20)] = 1995,
  [SMALL_STATE(21)] = 2102,
  [SMALL_STATE(22)] = 2209,
  [SMALL_STATE(23)] = 2316,
  [SMALL_STATE(24)] = 2423,
  [SMALL_STATE(25)] = 2530,
  [SMALL_STATE(26)] = 2637,
  [SMALL_STATE(27)] = 2744,
  [SMALL_STATE(28)] = 2851,
  [SMALL_STATE(29)] = 2958,
  [SMALL_STATE(30)] = 3065,
  [SMALL_STATE(31)] = 3172,
  [SMALL_STATE(32)] = 3247,
  [SMALL_STATE(33)] = 3322,
  [SMALL_STATE(34)] = 3397,
  [SMALL_STATE(35)] = 3472,
  [SMALL_STATE(36)] = 3548,
  [SMALL_STATE(37)] = 3597,
  [SMALL_STATE(38)] = 3644,
  [SMALL_STATE(39)] = 3691,
  [SMALL_STATE(40)] = 3738,
  [SMALL_STATE(41)] = 3785,
  [SMALL_STATE(42)] = 3832,
  [SMALL_STATE(43)] = 3908,
  [SMALL_STATE(44)] = 3954,
  [SMALL_STATE(45)] = 4000,
  [SMALL_STATE(46)] = 4071,
  [SMALL_STATE(47)] = 4142,
  [SMALL_STATE(48)] = 4210,
  [SMALL_STATE(49)] = 4274,
  [SMALL_STATE(50)] = 4338,
  [SMALL_STATE(51)] = 4402,
  [SMALL_STATE(52)] = 4466,
  [SMALL_STATE(53)] = 4531,
  [SMALL_STATE(54)] = 4596,
  [SMALL_STATE(55)] = 4661,
  [SMALL_STATE(56)] = 4726,
  [SMALL_STATE(57)] = 4791,
  [SMALL_STATE(58)] = 4856,
  [SMALL_STATE(59)] = 4921,
  [SMALL_STATE(60)] = 4985,
  [SMALL_STATE(61)] = 5049,
  [SMALL_STATE(62)] = 5113,
  [SMALL_STATE(63)] = 5175,
  [SMALL_STATE(64)] = 5239,
  [SMALL_STATE(65)] = 5277,
  [SMALL_STATE(66)] = 5315,
  [SMALL_STATE(67)] = 5353,
  [SMALL_STATE(68)] = 5391,
  [SMALL_STATE(69)] = 5429,
  [SMALL_STATE(70)] = 5469,
  [SMALL_STATE(71)] = 5506,
  [SMALL_STATE(72)] = 5543,
  [SMALL_STATE(73)] = 5583,
  [SMALL_STATE(74)] = 5628,
  [SMALL_STATE(75)] = 5673,
  [SMALL_STATE(76)] = 5718,
  [SMALL_STATE(77)] = 5763,
  [SMALL_STATE(78)] = 5808,
  [SMALL_STATE(79)] = 5850,
  [SMALL_STATE(80)] = 5892,
  [SMALL_STATE(81)] = 5918,
  [SMALL_STATE(82)] = 5952,
  [SMALL_STATE(83)] = 5974,
  [SMALL_STATE(84)] = 6007,
  [SMALL_STATE(85)] = 6040,
  [SMALL_STATE(86)] = 6073,
  [SMALL_STATE(87)] = 6092,
  [SMALL_STATE(88)] = 6125,
  [SMALL_STATE(89)] = 6148,
  [SMALL_STATE(90)] = 6181,
  [SMALL_STATE(91)] = 6200,
  [SMALL_STATE(92)] = 6219,
  [SMALL_STATE(93)] = 6252,
  [SMALL_STATE(94)] = 6289,
  [SMALL_STATE(95)] = 6322,
  [SMALL_STATE(96)] = 6355,
  [SMALL_STATE(97)] = 6388,
  [SMALL_STATE(98)] = 6406,
  [SMALL_STATE(99)] = 6424,
  [SMALL_STATE(100)] = 6454,
  [SMALL_STATE(101)] = 6472,
  [SMALL_STATE(102)] = 6490,
  [SMALL_STATE(103)] = 6508,
  [SMALL_STATE(104)] = 6538,
  [SMALL_STATE(105)] = 6556,
  [SMALL_STATE(106)] = 6574,
  [SMALL_STATE(107)] = 6592,
  [SMALL_STATE(108)] = 6622,
  [SMALL_STATE(109)] = 6640,
  [SMALL_STATE(110)] = 6658,
  [SMALL_STATE(111)] = 6688,
  [SMALL_STATE(112)] = 6718,
  [SMALL_STATE(113)] = 6748,
  [SMALL_STATE(114)] = 6778,
  [SMALL_STATE(115)] = 6796,
  [SMALL_STATE(116)] = 6814,
  [SMALL_STATE(117)] = 6832,
  [SMALL_STATE(118)] = 6850,
  [SMALL_STATE(119)] = 6880,
  [SMALL_STATE(120)] = 6898,
  [SMALL_STATE(121)] = 6916,
  [SMALL_STATE(122)] = 6934,
  [SMALL_STATE(123)] = 6952,
  [SMALL_STATE(124)] = 6970,
  [SMALL_STATE(125)] = 7000,
  [SMALL_STATE(126)] = 7018,
  [SMALL_STATE(127)] = 7036,
  [SMALL_STATE(128)] = 7054,
  [SMALL_STATE(129)] = 7072,
  [SMALL_STATE(130)] = 7102,
  [SMALL_STATE(131)] = 7132,
  [SMALL_STATE(132)] = 7150,
  [SMALL_STATE(133)] = 7168,
  [SMALL_STATE(134)] = 7186,
  [SMALL_STATE(135)] = 7216,
  [SMALL_STATE(136)] = 7234,
  [SMALL_STATE(137)] = 7264,
  [SMALL_STATE(138)] = 7294,
  [SMALL_STATE(139)] = 7324,
  [SMALL_STATE(140)] = 7342,
  [SMALL_STATE(141)] = 7360,
  [SMALL_STATE(142)] = 7378,
  [SMALL_STATE(143)] = 7396,
  [SMALL_STATE(144)] = 7426,
  [SMALL_STATE(145)] = 7456,
  [SMALL_STATE(146)] = 7474,
  [SMALL_STATE(147)] = 7492,
  [SMALL_STATE(148)] = 7510,
  [SMALL_STATE(149)] = 7528,
  [SMALL_STATE(150)] = 7558,
  [SMALL_STATE(151)] = 7576,
  [SMALL_STATE(152)] = 7606,
  [SMALL_STATE(153)] = 7636,
  [SMALL_STATE(154)] = 7666,
  [SMALL_STATE(155)] = 7684,
  [SMALL_STATE(156)] = 7702,
  [SMALL_STATE(157)] = 7720,
  [SMALL_STATE(158)] = 7738,
  [SMALL_STATE(159)] = 7756,
  [SMALL_STATE(160)] = 7774,
  [SMALL_STATE(161)] = 7792,
  [SMALL_STATE(162)] = 7822,
  [SMALL_STATE(163)] = 7851,
  [SMALL_STATE(164)] = 7880,
  [SMALL_STATE(165)] = 7909,
  [SMALL_STATE(166)] = 7938,
  [SMALL_STATE(167)] = 7969,
  [SMALL_STATE(168)] = 7998,
  [SMALL_STATE(169)] = 8023,
  [SMALL_STATE(170)] = 8049,
  [SMALL_STATE(171)] = 8065,
  [SMALL_STATE(172)] = 8083,
  [SMALL_STATE(173)] = 8107,
  [SMALL_STATE(174)] = 8131,
  [SMALL_STATE(175)] = 8149,
  [SMALL_STATE(176)] = 8165,
  [SMALL_STATE(177)] = 8191,
  [SMALL_STATE(178)] = 8207,
  [SMALL_STATE(179)] = 8228,
  [SMALL_STATE(180)] = 8245,
  [SMALL_STATE(181)] = 8262,
  [SMALL_STATE(182)] = 8279,
  [SMALL_STATE(183)] = 8302,
  [SMALL_STATE(184)] = 8319,
  [SMALL_STATE(185)] = 8332,
  [SMALL_STATE(186)] = 8345,
  [SMALL_STATE(187)] = 8366,
  [SMALL_STATE(188)] = 8383,
  [SMALL_STATE(189)] = 8396,
  [SMALL_STATE(190)] = 8411,
  [SMALL_STATE(191)] = 8424,
  [SMALL_STATE(192)] = 8437,
  [SMALL_STATE(193)] = 8458,
  [SMALL_STATE(194)] = 8481,
  [SMALL_STATE(195)] = 8502,
  [SMALL_STATE(196)] = 8518,
  [SMALL_STATE(197)] = 8532,
  [SMALL_STATE(198)] = 8552,
  [SMALL_STATE(199)] = 8566,
  [SMALL_STATE(200)] = 8586,
  [SMALL_STATE(201)] = 8602,
  [SMALL_STATE(202)] = 8622,
  [SMALL_STATE(203)] = 8642,
  [SMALL_STATE(204)] = 8662,
  [SMALL_STATE(205)] = 8678,
  [SMALL_STATE(206)] = 8698,
  [SMALL_STATE(207)] = 8718,
  [SMALL_STATE(208)] = 8738,
  [SMALL_STATE(209)] = 8750,
  [SMALL_STATE(210)] = 8770,
  [SMALL_STATE(211)] = 8788,
  [SMALL_STATE(212)] = 8808,
  [SMALL_STATE(213)] = 8824,
  [SMALL_STATE(214)] = 8840,
  [SMALL_STATE(215)] = 8856,
  [SMALL_STATE(216)] = 8871,
  [SMALL_STATE(217)] = 8886,
  [SMALL_STATE(218)] = 8903,
  [SMALL_STATE(219)] = 8918,
  [SMALL_STATE(220)] = 8933,
  [SMALL_STATE(221)] = 8944,
  [SMALL_STATE(222)] = 8961,
  [SMALL_STATE(223)] = 8972,
  [SMALL_STATE(224)] = 8983,
  [SMALL_STATE(225)] = 8994,
  [SMALL_STATE(226)] = 9011,
  [SMALL_STATE(227)] = 9022,
  [SMALL_STATE(228)] = 9033,
  [SMALL_STATE(229)] = 9048,
  [SMALL_STATE(230)] = 9061,
  [SMALL_STATE(231)] = 9078,
  [SMALL_STATE(232)] = 9095,
  [SMALL_STATE(233)] = 9106,
  [SMALL_STATE(234)] = 9120,
  [SMALL_STATE(235)] = 9130,
  [SMALL_STATE(236)] = 9140,
  [SMALL_STATE(237)] = 9154,
  [SMALL_STATE(238)] = 9166,
  [SMALL_STATE(239)] = 9180,
  [SMALL_STATE(240)] = 9194,
  [SMALL_STATE(241)] = 9208,
  [SMALL_STATE(242)] = 9222,
  [SMALL_STATE(243)] = 9236,
  [SMALL_STATE(244)] = 9250,
  [SMALL_STATE(245)] = 9264,
  [SMALL_STATE(246)] = 9278,
  [SMALL_STATE(247)] = 9292,
  [SMALL_STATE(248)] = 9306,
  [SMALL_STATE(249)] = 9320,
  [SMALL_STATE(250)] = 9334,
  [SMALL_STATE(251)] = 9346,
  [SMALL_STATE(252)] = 9360,
  [SMALL_STATE(253)] = 9374,
  [SMALL_STATE(254)] = 9388,
  [SMALL_STATE(255)] = 9402,
  [SMALL_STATE(256)] = 9416,
  [SMALL_STATE(257)] = 9430,
  [SMALL_STATE(258)] = 9444,
  [SMALL_STATE(259)] = 9454,
  [SMALL_STATE(260)] = 9464,
  [SMALL_STATE(261)] = 9478,
  [SMALL_STATE(262)] = 9492,
  [SMALL_STATE(263)] = 9506,
  [SMALL_STATE(264)] = 9520,
  [SMALL_STATE(265)] = 9534,
  [SMALL_STATE(266)] = 9544,
  [SMALL_STATE(267)] = 9558,
  [SMALL_STATE(268)] = 9572,
  [SMALL_STATE(269)] = 9586,
  [SMALL_STATE(270)] = 9600,
  [SMALL_STATE(271)] = 9612,
  [SMALL_STATE(272)] = 9626,
  [SMALL_STATE(273)] = 9638,
  [SMALL_STATE(274)] = 9652,
  [SMALL_STATE(275)] = 9666,
  [SMALL_STATE(276)] = 9680,
  [SMALL_STATE(277)] = 9694,
  [SMALL_STATE(278)] = 9708,
  [SMALL_STATE(279)] = 9722,
  [SMALL_STATE(280)] = 9736,
  [SMALL_STATE(281)] = 9750,
  [SMALL_STATE(282)] = 9760,
  [SMALL_STATE(283)] = 9772,
  [SMALL_STATE(284)] = 9784,
  [SMALL_STATE(285)] = 9798,
  [SMALL_STATE(286)] = 9812,
  [SMALL_STATE(287)] = 9826,
  [SMALL_STATE(288)] = 9840,
  [SMALL_STATE(289)] = 9854,
  [SMALL_STATE(290)] = 9868,
  [SMALL_STATE(291)] = 9879,
  [SMALL_STATE(292)] = 9890,
  [SMALL_STATE(293)] = 9901,
  [SMALL_STATE(294)] = 9912,
  [SMALL_STATE(295)] = 9923,
  [SMALL_STATE(296)] = 9932,
  [SMALL_STATE(297)] = 9941,
  [SMALL_STATE(298)] = 9952,
  [SMALL_STATE(299)] = 9963,
  [SMALL_STATE(300)] = 9974,
  [SMALL_STATE(301)] = 9985,
  [SMALL_STATE(302)] = 9994,
  [SMALL_STATE(303)] = 10005,
  [SMALL_STATE(304)] = 10016,
  [SMALL_STATE(305)] = 10027,
  [SMALL_STATE(306)] = 10038,
  [SMALL_STATE(307)] = 10047,
  [SMALL_STATE(308)] = 10056,
  [SMALL_STATE(309)] = 10067,
  [SMALL_STATE(310)] = 10076,
  [SMALL_STATE(311)] = 10087,
  [SMALL_STATE(312)] = 10096,
  [SMALL_STATE(313)] = 10107,
  [SMALL_STATE(314)] = 10118,
  [SMALL_STATE(315)] = 10129,
  [SMALL_STATE(316)] = 10140,
  [SMALL_STATE(317)] = 10151,
  [SMALL_STATE(318)] = 10162,
  [SMALL_STATE(319)] = 10173,
  [SMALL_STATE(320)] = 10182,
  [SMALL_STATE(321)] = 10193,
  [SMALL_STATE(322)] = 10202,
  [SMALL_STATE(323)] = 10211,
  [SMALL_STATE(324)] = 10222,
  [SMALL_STATE(325)] = 10231,
  [SMALL_STATE(326)] = 10240,
  [SMALL_STATE(327)] = 10249,
  [SMALL_STATE(328)] = 10260,
  [SMALL_STATE(329)] = 10269,
  [SMALL_STATE(330)] = 10280,
  [SMALL_STATE(331)] = 10289,
  [SMALL_STATE(332)] = 10300,
  [SMALL_STATE(333)] = 10311,
  [SMALL_STATE(334)] = 10322,
  [SMALL_STATE(335)] = 10331,
  [SMALL_STATE(336)] = 10340,
  [SMALL_STATE(337)] = 10349,
  [SMALL_STATE(338)] = 10358,
  [SMALL_STATE(339)] = 10369,
  [SMALL_STATE(340)] = 10380,
  [SMALL_STATE(341)] = 10389,
  [SMALL_STATE(342)] = 10398,
  [SMALL_STATE(343)] = 10409,
  [SMALL_STATE(344)] = 10420,
  [SMALL_STATE(345)] = 10431,
  [SMALL_STATE(346)] = 10440,
  [SMALL_STATE(347)] = 10449,
  [SMALL_STATE(348)] = 10458,
  [SMALL_STATE(349)] = 10467,
  [SMALL_STATE(350)] = 10478,
  [SMALL_STATE(351)] = 10487,
  [SMALL_STATE(352)] = 10498,
  [SMALL_STATE(353)] = 10507,
  [SMALL_STATE(354)] = 10518,
  [SMALL_STATE(355)] = 10527,
  [SMALL_STATE(356)] = 10536,
  [SMALL_STATE(357)] = 10544,
  [SMALL_STATE(358)] = 10552,
  [SMALL_STATE(359)] = 10560,
  [SMALL_STATE(360)] = 10568,
  [SMALL_STATE(361)] = 10576,
  [SMALL_STATE(362)] = 10584,
  [SMALL_STATE(363)] = 10592,
  [SMALL_STATE(364)] = 10600,
  [SMALL_STATE(365)] = 10608,
  [SMALL_STATE(366)] = 10616,
  [SMALL_STATE(367)] = 10624,
  [SMALL_STATE(368)] = 10632,
  [SMALL_STATE(369)] = 10640,
  [SMALL_STATE(370)] = 10648,
  [SMALL_STATE(371)] = 10656,
  [SMALL_STATE(372)] = 10664,
  [SMALL_STATE(373)] = 10672,
  [SMALL_STATE(374)] = 10680,
  [SMALL_STATE(375)] = 10688,
  [SMALL_STATE(376)] = 10696,
  [SMALL_STATE(377)] = 10704,
  [SMALL_STATE(378)] = 10712,
  [SMALL_STATE(379)] = 10720,
  [SMALL_STATE(380)] = 10728,
  [SMALL_STATE(381)] = 10736,
  [SMALL_STATE(382)] = 10744,
  [SMALL_STATE(383)] = 10752,
  [SMALL_STATE(384)] = 10760,
  [SMALL_STATE(385)] = 10768,
  [SMALL_STATE(386)] = 10776,
  [SMALL_STATE(387)] = 10784,
  [SMALL_STATE(388)] = 10792,
  [SMALL_STATE(389)] = 10800,
  [SMALL_STATE(390)] = 10808,
  [SMALL_STATE(391)] = 10816,
  [SMALL_STATE(392)] = 10824,
  [SMALL_STATE(393)] = 10832,
  [SMALL_STATE(394)] = 10840,
  [SMALL_STATE(395)] = 10848,
  [SMALL_STATE(396)] = 10856,
  [SMALL_STATE(397)] = 10864,
  [SMALL_STATE(398)] = 10872,
  [SMALL_STATE(399)] = 10880,
  [SMALL_STATE(400)] = 10888,
  [SMALL_STATE(401)] = 10896,
  [SMALL_STATE(402)] = 10904,
  [SMALL_STATE(403)] = 10912,
  [SMALL_STATE(404)] = 10920,
  [SMALL_STATE(405)] = 10928,
  [SMALL_STATE(406)] = 10936,
  [SMALL_STATE(407)] = 10944,
  [SMALL_STATE(408)] = 10952,
  [SMALL_STATE(409)] = 10960,
  [SMALL_STATE(410)] = 10968,
  [SMALL_STATE(411)] = 10976,
  [SMALL_STATE(412)] = 10984,
  [SMALL_STATE(413)] = 10992,
  [SMALL_STATE(414)] = 11000,
  [SMALL_STATE(415)] = 11008,
  [SMALL_STATE(416)] = 11016,
  [SMALL_STATE(417)] = 11024,
  [SMALL_STATE(418)] = 11032,
  [SMALL_STATE(419)] = 11040,
  [SMALL_STATE(420)] = 11048,
  [SMALL_STATE(421)] = 11056,
  [SMALL_STATE(422)] = 11064,
  [SMALL_STATE(423)] = 11072,
  [SMALL_STATE(424)] = 11080,
  [SMALL_STATE(425)] = 11088,
  [SMALL_STATE(426)] = 11096,
  [SMALL_STATE(427)] = 11104,
  [SMALL_STATE(428)] = 11112,
  [SMALL_STATE(429)] = 11120,
  [SMALL_STATE(430)] = 11128,
  [SMALL_STATE(431)] = 11136,
  [SMALL_STATE(432)] = 11144,
  [SMALL_STATE(433)] = 11152,
  [SMALL_STATE(434)] = 11160,
  [SMALL_STATE(435)] = 11168,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_ternary_expr, 5),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_ternary_expr, 5),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(410),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_when_ternary_expr, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_when_ternary_expr, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_question_ternary_expr, 5),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_question_ternary_expr, 5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 1, .production_id = 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 1, .production_id = 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 1, .production_id = 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom_expr, 1, .production_id = 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expr, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expr, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_list, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ternary_expr, 1),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ternary_expr, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_expression_list_repeat1, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_const_expression, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_field, 3),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_element, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_element, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_key_type, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type_tags, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_tags, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_tags, 3),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__array_length, 1, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(301),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(221),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(241),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(243),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_name, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_polymorphic_name, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pointer_type, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 8),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 4),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_type, 6),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 4),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameters, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 4),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_type, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_pointer_type, 6),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_slice_type, 6),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_slice_type, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dynamic_array_type, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__element_type, 1, .production_id = 7),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_opaque_type, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 6),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 4),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 4),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 6),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 6),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 5),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_slice_type, 7),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relative_pointer_type, 7),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_type, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 5),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameters, 4),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 5),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type, 7),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 2),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 5),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_type, 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 7),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_tags, 2),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 5),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type, 8),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameters, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_type, 3),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_result, 1),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_simd_vector_type, 3),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_name, 1),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_helper_type, 3),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_block_decl_repeat1, 2),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_block_decl_repeat1, 2), SHIFT_REPEAT(243),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_block_decl_repeat1, 2), SHIFT_REPEAT(246),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [364] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_list_repeat1, 2), SHIFT_REPEAT(134),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_list, 2),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 3),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression_list, 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_const_expression_list_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_const_expression_list_repeat1, 2), SHIFT_REPEAT(78),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression_list, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 2),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__top_level_decl_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__top_level_decl_repeat1, 2), SHIFT_REPEAT(244),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_group, 5),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_expression, 3),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_procedure_group, 4),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_name_list, 1),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 2),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_name_list, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2), SHIFT_REPEAT(406),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_identifier_list_repeat1, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier_list, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [450] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_polymorphic_name_list_repeat1, 2), SHIFT_REPEAT(332),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_polymorphic_name_list_repeat1, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 2),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__top_level_decl_repeat1, 2),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__top_level_decl_repeat1, 2), SHIFT_REPEAT(246),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_decl, 1),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 1),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_decl, 1),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [492] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 5),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_decl, 5),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_decl, 4),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attribute, 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_decl, 4),
  [506] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_polymorphic_parameter_list_repeat1, 2), SHIFT_REPEAT(192),
  [509] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_polymorphic_parameter_list_repeat1, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter_list, 4),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_name, 1, .production_id = 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element, 1),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_list, 1),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_field_list, 1),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_foreign_import_path_list_repeat1, 2), SHIFT_REPEAT(317),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_foreign_import_path_list_repeat1, 2),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_element, 1),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_element_list, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [572] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [574] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plain_parameter_list_repeat1, 2), SHIFT_REPEAT(186),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plain_parameter_list_repeat1, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_path_list, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter_list, 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_list, 2),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_element_list, 2),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_list, 2),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter_list, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [615] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bitfield_field_list_repeat1, 2), SHIFT_REPEAT(284),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bitfield_field_list_repeat1, 2),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_list, 1),
  [622] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_element_list_repeat1, 2), SHIFT_REPEAT(327),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_element_list_repeat1, 2),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_list, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_element_list, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_path_list, 2),
  [633] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(166),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_literal, 1),
  [642] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_field_list, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_element_list_repeat1, 2), SHIFT_REPEAT(261),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_element_list_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1),
  [653] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_field_list_repeat1, 2), SHIFT_REPEAT(230),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_field_list_repeat1, 2),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_type_tags, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitset_key_type, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_fields, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_or_with_specialization, 1),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_prefixes, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_decl, 3),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_polymorphic_parameter, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_prefixes, 2),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_decl, 4),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plain_parameter_decl, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 5),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_or_with_specialization, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_decl, 4),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_union_type_tags, 2),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_element, 2),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field_decl, 4),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rel_op, 1),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_where_clause, 2),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_block_decl, 4),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [812] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_decl, 4),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__enumerated_array_type, 1, .production_id = 6),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_paths, 2),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [858] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contain_op, 1),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_block_decl, 3),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_decl, 3),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 3),
  [866] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_assert_panic, 3),
  [868] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__top_level_decl, 2),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_paths, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_decl, 2),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_add_op, 1),
  [880] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mul_op, 1),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [884] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 1),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [894] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_import_paths, 3),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_foreign_block_decl, 5),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [920] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_decl, 2),
  [922] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bitfield_fields, 2),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [926] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
