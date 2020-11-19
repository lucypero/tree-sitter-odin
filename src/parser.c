#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 3
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_package = 1,
  anon_sym_import = 2,
  anon_sym_DQUOTE = 3,
  anon_sym_COLON = 4,
  anon_sym_COLON_COLON = 5,
  anon_sym_proc = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_LPAREN = 8,
  anon_sym_COMMA = 9,
  anon_sym_RPAREN = 10,
  sym_identifier = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_SEMI = 14,
  anon_sym_EQ = 15,
  anon_sym_return = 16,
  aux_sym_string_literal_token1 = 17,
  sym_escape_sequence = 18,
  anon_sym_DOT = 19,
  sym_int_literal = 20,
  sym_float_literal = 21,
  sym_imaginary_literal = 22,
  sym_line_comment = 23,
  sym_block_comment = 24,
  sym_source_file = 25,
  sym__top_level_declaration = 26,
  sym_package_clause = 27,
  sym_import_declaration = 28,
  sym_package_import = 29,
  sym_proc_declaration = 30,
  sym_parameter_list = 31,
  sym_parameter_declaration = 32,
  sym__type_identifier = 33,
  sym__package_identifier = 34,
  sym__collection_identifier = 35,
  sym_block = 36,
  sym__statement = 37,
  sym_declaration_statement = 38,
  sym_assignment_statement = 39,
  sym__simple_statement = 40,
  sym_return_statement = 41,
  sym__expression = 42,
  sym_string_literal = 43,
  sym_call_expression = 44,
  sym_argument_list = 45,
  sym__number = 46,
  aux_sym_source_file_repeat1 = 47,
  aux_sym_parameter_list_repeat1 = 48,
  aux_sym_block_repeat1 = 49,
  aux_sym_string_literal_repeat1 = 50,
  aux_sym_argument_list_repeat1 = 51,
  alias_sym_collection_identifier = 52,
  alias_sym_package_identifier = 53,
  alias_sym_type_identifier = 54,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_EQ] = "=",
  [anon_sym_return] = "return",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOT] = ".",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym_package_clause] = "package_clause",
  [sym_import_declaration] = "import_declaration",
  [sym_package_import] = "package_import",
  [sym_proc_declaration] = "proc_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter_declaration] = "parameter_declaration",
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
  [sym_string_literal] = "string_literal",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_collection_identifier] = "collection_identifier",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_return] = anon_sym_return,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym_package_clause] = sym_package_clause,
  [sym_import_declaration] = sym_import_declaration,
  [sym_package_import] = sym_package_import,
  [sym_proc_declaration] = sym_proc_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter_declaration] = sym_parameter_declaration,
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
  [sym_string_literal] = sym_string_literal,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_collection_identifier] = alias_sym_collection_identifier,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [aux_sym_string_literal_token1] = {
    .visible = false,
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
  [sym_line_comment] = {
    .visible = true,
    .named = true,
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
  [sym_parameter_declaration] = {
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
  [sym_string_literal] = {
    .visible = true,
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
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_collection_identifier] = {
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

static const TSFieldMapSlice ts_field_map_slices[9] = {
  [3] = {.index = 0, .length = 2},
  [4] = {.index = 2, .length = 3},
  [6] = {.index = 5, .length = 4},
  [7] = {.index = 9, .length = 2},
  [8] = {.index = 11, .length = 2},
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

static TSSymbol ts_alias_sequences[9][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t lookahead) {
  return
    ('A' <= lookahead && lookahead <= 'Z') ||
    lookahead == '_' ||
    ('a' <= lookahead && lookahead <= 'h') ||
    ('j' <= lookahead && lookahead <= 'o') ||
    lookahead == 'q' ||
    ('s' <= lookahead && lookahead <= 'z') ||
    lookahead == 181 ||
    (913 <= lookahead && lookahead <= 937) ||
    (945 <= lookahead && lookahead <= 969);
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(9);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(76);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(53);
      END_STATE();
    case 9:
      if (lookahead == 'U') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == 'x') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 17:
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == '_') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == '_') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(56);
      if (lookahead == ',') ADVANCE(55);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(76);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(70);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(42)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == '.') ADVANCE(88);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(48);
      if (lookahead == ';') ADVANCE(79);
      if (lookahead == '=') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'i') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(43)
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'u') ADVANCE(61);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'p') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'o') ADVANCE(62);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'k') ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'g') ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'a') ADVANCE(72);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(76);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(101);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(10);
      if (lookahead == '_') ADVANCE(89);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'h') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'z') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(93);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == 'A' ||
          lookahead == 'B' ||
          lookahead == 'a' ||
          lookahead == 'b') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(10);
      if (lookahead == '_') ADVANCE(91);
      if (lookahead == 'b') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'z') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == '_') ADVANCE(101);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 43, .external_lex_state = 1},
  [2] = {.lex_state = 3, .external_lex_state = 1},
  [3] = {.lex_state = 3, .external_lex_state = 1},
  [4] = {.lex_state = 3, .external_lex_state = 1},
  [5] = {.lex_state = 2, .external_lex_state = 1},
  [6] = {.lex_state = 2, .external_lex_state = 1},
  [7] = {.lex_state = 2, .external_lex_state = 1},
  [8] = {.lex_state = 2, .external_lex_state = 1},
  [9] = {.lex_state = 2, .external_lex_state = 1},
  [10] = {.lex_state = 2, .external_lex_state = 1},
  [11] = {.lex_state = 43, .external_lex_state = 1},
  [12] = {.lex_state = 43, .external_lex_state = 1},
  [13] = {.lex_state = 3, .external_lex_state = 1},
  [14] = {.lex_state = 43, .external_lex_state = 1},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 43, .external_lex_state = 1},
  [17] = {.lex_state = 0, .external_lex_state = 1},
  [18] = {.lex_state = 2, .external_lex_state = 1},
  [19] = {.lex_state = 43, .external_lex_state = 1},
  [20] = {.lex_state = 1, .external_lex_state = 1},
  [21] = {.lex_state = 43, .external_lex_state = 1},
  [22] = {.lex_state = 43, .external_lex_state = 1},
  [23] = {.lex_state = 1, .external_lex_state = 1},
  [24] = {.lex_state = 43, .external_lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 1},
  [26] = {.lex_state = 43, .external_lex_state = 1},
  [27] = {.lex_state = 43, .external_lex_state = 1},
  [28] = {.lex_state = 1, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 0, .external_lex_state = 1},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 2, .external_lex_state = 1},
  [36] = {.lex_state = 0, .external_lex_state = 1},
  [37] = {.lex_state = 0, .external_lex_state = 1},
  [38] = {.lex_state = 0, .external_lex_state = 1},
  [39] = {.lex_state = 0, .external_lex_state = 1},
  [40] = {.lex_state = 2, .external_lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 1},
  [42] = {.lex_state = 0, .external_lex_state = 1},
  [43] = {.lex_state = 0, .external_lex_state = 1},
  [44] = {.lex_state = 2, .external_lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0, .external_lex_state = 1},
  [47] = {.lex_state = 0, .external_lex_state = 1},
  [48] = {.lex_state = 0, .external_lex_state = 1},
  [49] = {.lex_state = 0, .external_lex_state = 1},
  [50] = {.lex_state = 2, .external_lex_state = 1},
  [51] = {.lex_state = 2, .external_lex_state = 1},
  [52] = {.lex_state = 2, .external_lex_state = 1},
  [53] = {.lex_state = 0, .external_lex_state = 1},
  [54] = {.lex_state = 0, .external_lex_state = 1},
  [55] = {.lex_state = 0, .external_lex_state = 1},
  [56] = {.lex_state = 2, .external_lex_state = 1},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 0, .external_lex_state = 1},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 2, .external_lex_state = 1},
  [61] = {.lex_state = 2, .external_lex_state = 1},
  [62] = {.lex_state = 0, .external_lex_state = 1},
  [63] = {.lex_state = 5, .external_lex_state = 1},
  [64] = {.lex_state = 0, .external_lex_state = 1},
  [65] = {.lex_state = 43, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 43, .external_lex_state = 1},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 0, .external_lex_state = 1},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 43, .external_lex_state = 1},
  [74] = {.lex_state = 2, .external_lex_state = 1},
  [75] = {.lex_state = 3, .external_lex_state = 1},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 0, .external_lex_state = 1},
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
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(69),
    [sym__top_level_declaration] = STATE(11),
    [sym_package_clause] = STATE(11),
    [sym_import_declaration] = STATE(11),
    [sym_proc_declaration] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(3), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(71), 8,
      sym_declaration_statement,
      sym_assignment_statement,
      sym__simple_statement,
      sym_return_statement,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [41] = 10,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      sym_imaginary_literal,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(21), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(4), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(71), 8,
      sym_declaration_statement,
      sym_assignment_statement,
      sym__simple_statement,
      sym_return_statement,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [82] = 10,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_RBRACE,
    ACTIONS(35), 1,
      anon_sym_return,
    ACTIONS(41), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(38), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(4), 2,
      sym__statement,
      aux_sym_block_repeat1,
    STATE(71), 8,
      sym_declaration_statement,
      sym_assignment_statement,
      sym__simple_statement,
      sym_return_statement,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [123] = 8,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(48), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(41), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [153] = 8,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(56), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(54), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(54), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [183] = 8,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_imaginary_literal,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(54), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(54), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [213] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(56), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(54), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(54), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [240] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(46), 1,
      sym_identifier,
    ACTIONS(62), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(60), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(76), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [267] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(64), 1,
      sym_identifier,
    ACTIONS(68), 1,
      sym_imaginary_literal,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(66), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(67), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [294] = 6,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(12), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [318] = 6,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      anon_sym_package,
    ACTIONS(77), 1,
      anon_sym_import,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(12), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [342] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(83), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      sym_imaginary_literal,
    ACTIONS(85), 4,
      sym_identifier,
      anon_sym_return,
      sym_int_literal,
      sym_float_literal,
  [358] = 7,
    ACTIONS(87), 1,
      anon_sym_COLON,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [381] = 5,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(91), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [400] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(97), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [414] = 5,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    ACTIONS(95), 1,
      anon_sym_DOT,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [431] = 5,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(31), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [448] = 3,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(109), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [461] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_line_comment,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(113), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [478] = 3,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(119), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [491] = 3,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(123), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [504] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(115), 1,
      sym_line_comment,
    ACTIONS(125), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(127), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [521] = 3,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(132), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [534] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(134), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [545] = 3,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(138), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [558] = 3,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(142), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [571] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(115), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(146), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [588] = 4,
    ACTIONS(148), 1,
      anon_sym_DASH_GT,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [602] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [612] = 4,
    ACTIONS(154), 1,
      anon_sym_COMMA,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [626] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [636] = 4,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(163), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [650] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(165), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [660] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [674] = 4,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [688] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(171), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [698] = 4,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [712] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(175), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [722] = 4,
    ACTIONS(177), 1,
      sym_identifier,
    STATE(70), 1,
      sym_package_import,
    STATE(73), 1,
      sym__collection_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [736] = 4,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [750] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(183), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [760] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(185), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [770] = 4,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(187), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [784] = 4,
    ACTIONS(189), 1,
      anon_sym_COMMA,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [798] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(194), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [808] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(196), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [817] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(192), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [826] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(198), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [835] = 3,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(64), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [846] = 3,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(58), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [857] = 3,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(77), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [868] = 3,
    ACTIONS(204), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [879] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(163), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [888] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [899] = 3,
    ACTIONS(202), 1,
      sym_identifier,
    STATE(26), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [910] = 3,
    ACTIONS(89), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [921] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [930] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(208), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [939] = 3,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(48), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [950] = 3,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(55), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [961] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(210), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [970] = 2,
    ACTIONS(212), 1,
      anon_sym_proc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [978] = 2,
    ACTIONS(214), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [986] = 2,
    ACTIONS(216), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [994] = 2,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1002] = 2,
    ACTIONS(99), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1010] = 2,
    ACTIONS(218), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1018] = 2,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1026] = 2,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1034] = 2,
    ACTIONS(224), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1042] = 2,
    ACTIONS(226), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1050] = 2,
    ACTIONS(228), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1058] = 2,
    ACTIONS(230), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1066] = 2,
    ACTIONS(232), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1074] = 2,
    ACTIONS(234), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1082] = 2,
    ACTIONS(236), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1090] = 2,
    ACTIONS(238), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 41,
  [SMALL_STATE(4)] = 82,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 183,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 240,
  [SMALL_STATE(10)] = 267,
  [SMALL_STATE(11)] = 294,
  [SMALL_STATE(12)] = 318,
  [SMALL_STATE(13)] = 342,
  [SMALL_STATE(14)] = 358,
  [SMALL_STATE(15)] = 381,
  [SMALL_STATE(16)] = 400,
  [SMALL_STATE(17)] = 414,
  [SMALL_STATE(18)] = 431,
  [SMALL_STATE(19)] = 448,
  [SMALL_STATE(20)] = 461,
  [SMALL_STATE(21)] = 478,
  [SMALL_STATE(22)] = 491,
  [SMALL_STATE(23)] = 504,
  [SMALL_STATE(24)] = 521,
  [SMALL_STATE(25)] = 534,
  [SMALL_STATE(26)] = 545,
  [SMALL_STATE(27)] = 558,
  [SMALL_STATE(28)] = 571,
  [SMALL_STATE(29)] = 588,
  [SMALL_STATE(30)] = 602,
  [SMALL_STATE(31)] = 612,
  [SMALL_STATE(32)] = 626,
  [SMALL_STATE(33)] = 636,
  [SMALL_STATE(34)] = 650,
  [SMALL_STATE(35)] = 660,
  [SMALL_STATE(36)] = 674,
  [SMALL_STATE(37)] = 688,
  [SMALL_STATE(38)] = 698,
  [SMALL_STATE(39)] = 712,
  [SMALL_STATE(40)] = 722,
  [SMALL_STATE(41)] = 736,
  [SMALL_STATE(42)] = 750,
  [SMALL_STATE(43)] = 760,
  [SMALL_STATE(44)] = 770,
  [SMALL_STATE(45)] = 784,
  [SMALL_STATE(46)] = 798,
  [SMALL_STATE(47)] = 808,
  [SMALL_STATE(48)] = 817,
  [SMALL_STATE(49)] = 826,
  [SMALL_STATE(50)] = 835,
  [SMALL_STATE(51)] = 846,
  [SMALL_STATE(52)] = 857,
  [SMALL_STATE(53)] = 868,
  [SMALL_STATE(54)] = 879,
  [SMALL_STATE(55)] = 888,
  [SMALL_STATE(56)] = 899,
  [SMALL_STATE(57)] = 910,
  [SMALL_STATE(58)] = 921,
  [SMALL_STATE(59)] = 930,
  [SMALL_STATE(60)] = 939,
  [SMALL_STATE(61)] = 950,
  [SMALL_STATE(62)] = 961,
  [SMALL_STATE(63)] = 970,
  [SMALL_STATE(64)] = 978,
  [SMALL_STATE(65)] = 986,
  [SMALL_STATE(66)] = 994,
  [SMALL_STATE(67)] = 1002,
  [SMALL_STATE(68)] = 1010,
  [SMALL_STATE(69)] = 1018,
  [SMALL_STATE(70)] = 1026,
  [SMALL_STATE(71)] = 1034,
  [SMALL_STATE(72)] = 1042,
  [SMALL_STATE(73)] = 1050,
  [SMALL_STATE(74)] = 1058,
  [SMALL_STATE(75)] = 1066,
  [SMALL_STATE(76)] = 1074,
  [SMALL_STATE(77)] = 1082,
  [SMALL_STATE(78)] = 1090,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(23),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_clause, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_clause, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(8),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(60),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_identifier, 1, .production_id = 2),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3, .production_id = 3),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
