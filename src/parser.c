#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 3
#define TOKEN_COUNT 24
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
  sym_line_comment = 22,
  sym_block_comment = 23,
  sym_source_file = 24,
  sym__top_level_declaration = 25,
  sym_package_clause = 26,
  sym_import_declaration = 27,
  sym_package_import = 28,
  sym_proc_declaration = 29,
  sym_parameter_list = 30,
  sym_parameter_declaration = 31,
  sym__type_identifier = 32,
  sym__package_identifier = 33,
  sym__collection_identifier = 34,
  sym_block = 35,
  sym__statement = 36,
  sym_declaration_statement = 37,
  sym_assignment_statement = 38,
  sym__simple_statement = 39,
  sym_return_statement = 40,
  sym__expression = 41,
  sym_string_literal = 42,
  sym_call_expression = 43,
  sym_argument_list = 44,
  sym__number = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_parameter_list_repeat1 = 47,
  aux_sym_block_repeat1 = 48,
  aux_sym_string_literal_repeat1 = 49,
  aux_sym_argument_list_repeat1 = 50,
  alias_sym_collection_identifier = 51,
  alias_sym_package_identifier = 52,
  alias_sym_type_identifier = 53,
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
      if (lookahead == '/') ADVANCE(102);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(97);
      if (lookahead == '_') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      if (lookahead == '_') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
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
  [10] = {.lex_state = 43, .external_lex_state = 1},
  [11] = {.lex_state = 43, .external_lex_state = 1},
  [12] = {.lex_state = 2, .external_lex_state = 1},
  [13] = {.lex_state = 43, .external_lex_state = 1},
  [14] = {.lex_state = 3, .external_lex_state = 1},
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
    [sym__top_level_declaration] = STATE(10),
    [sym_package_clause] = STATE(10),
    [sym_import_declaration] = STATE(10),
    [sym_proc_declaration] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_package] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
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
  [38] = 9,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(23), 1,
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
  [76] = 9,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(28), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_RBRACE,
    ACTIONS(33), 1,
      anon_sym_return,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(36), 2,
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
  [114] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(43), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(41), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [141] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(47), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(54), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [168] = 7,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(47), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(54), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [195] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(47), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(54), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [219] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_identifier,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(51), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(76), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [243] = 6,
    ACTIONS(7), 1,
      anon_sym_package,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(11), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [267] = 6,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_package,
    ACTIONS(60), 1,
      anon_sym_import,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    STATE(11), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [291] = 6,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(72), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(68), 2,
      sym_int_literal,
      sym_float_literal,
    STATE(67), 4,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
      sym__number,
  [315] = 7,
    ACTIONS(70), 1,
      anon_sym_COLON,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 1,
      anon_sym_SEMI,
    ACTIONS(76), 1,
      anon_sym_EQ,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [338] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(80), 2,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
    ACTIONS(82), 4,
      sym_identifier,
      anon_sym_return,
      sym_int_literal,
      sym_float_literal,
  [353] = 5,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_DOT,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(74), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [372] = 3,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(84), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [386] = 5,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [403] = 5,
    ACTIONS(88), 1,
      anon_sym_COMMA,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(31), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [420] = 3,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(96), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [433] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      sym_line_comment,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(100), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [450] = 3,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(106), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [463] = 3,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(110), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [476] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(114), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [493] = 3,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(119), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [506] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(121), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      anon_sym_SEMI,
  [517] = 3,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(125), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [530] = 3,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(129), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [543] = 5,
    ACTIONS(3), 1,
      sym_block_comment,
    ACTIONS(102), 1,
      sym_line_comment,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(133), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [560] = 4,
    ACTIONS(135), 1,
      anon_sym_DASH_GT,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(27), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [574] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(139), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [584] = 4,
    ACTIONS(141), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(36), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [598] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(145), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [608] = 4,
    ACTIONS(147), 1,
      anon_sym_COMMA,
    ACTIONS(150), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [622] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(152), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [632] = 4,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [646] = 4,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    ACTIONS(156), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [660] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(158), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [670] = 4,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(33), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [684] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(162), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [694] = 4,
    ACTIONS(164), 1,
      sym_identifier,
    STATE(70), 1,
      sym_package_import,
    STATE(73), 1,
      sym__collection_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [708] = 4,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [722] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(170), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [732] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(172), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [742] = 4,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [756] = 4,
    ACTIONS(176), 1,
      anon_sym_COMMA,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_parameter_list_repeat1,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [770] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(181), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [780] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(183), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [789] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(179), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [798] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(185), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [807] = 3,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(64), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [818] = 3,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(58), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [829] = 3,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(77), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [840] = 3,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_parameter_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [851] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [860] = 3,
    ACTIONS(137), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [871] = 3,
    ACTIONS(189), 1,
      sym_identifier,
    STATE(26), 1,
      sym__package_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [882] = 3,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_argument_list,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [893] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(193), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [902] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(195), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [911] = 3,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(48), 1,
      sym_parameter_declaration,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [922] = 3,
    ACTIONS(187), 1,
      sym_identifier,
    STATE(55), 1,
      sym__type_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [933] = 2,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
    ACTIONS(197), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [942] = 2,
    ACTIONS(199), 1,
      anon_sym_proc,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [950] = 2,
    ACTIONS(201), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [958] = 2,
    ACTIONS(203), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [966] = 2,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [974] = 2,
    ACTIONS(86), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [982] = 2,
    ACTIONS(205), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [990] = 2,
    ACTIONS(207), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [998] = 2,
    ACTIONS(209), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1006] = 2,
    ACTIONS(211), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1014] = 2,
    ACTIONS(213), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1022] = 2,
    ACTIONS(215), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1030] = 2,
    ACTIONS(217), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1038] = 2,
    ACTIONS(219), 1,
      anon_sym_COLON_COLON,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1046] = 2,
    ACTIONS(221), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1054] = 2,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
  [1062] = 2,
    ACTIONS(225), 1,
      anon_sym_DQUOTE,
    ACTIONS(3), 2,
      sym_block_comment,
      sym_line_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 38,
  [SMALL_STATE(4)] = 76,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 141,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 195,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 243,
  [SMALL_STATE(11)] = 267,
  [SMALL_STATE(12)] = 291,
  [SMALL_STATE(13)] = 315,
  [SMALL_STATE(14)] = 338,
  [SMALL_STATE(15)] = 353,
  [SMALL_STATE(16)] = 372,
  [SMALL_STATE(17)] = 386,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 420,
  [SMALL_STATE(20)] = 433,
  [SMALL_STATE(21)] = 450,
  [SMALL_STATE(22)] = 463,
  [SMALL_STATE(23)] = 476,
  [SMALL_STATE(24)] = 493,
  [SMALL_STATE(25)] = 506,
  [SMALL_STATE(26)] = 517,
  [SMALL_STATE(27)] = 530,
  [SMALL_STATE(28)] = 543,
  [SMALL_STATE(29)] = 560,
  [SMALL_STATE(30)] = 574,
  [SMALL_STATE(31)] = 584,
  [SMALL_STATE(32)] = 598,
  [SMALL_STATE(33)] = 608,
  [SMALL_STATE(34)] = 622,
  [SMALL_STATE(35)] = 632,
  [SMALL_STATE(36)] = 646,
  [SMALL_STATE(37)] = 660,
  [SMALL_STATE(38)] = 670,
  [SMALL_STATE(39)] = 684,
  [SMALL_STATE(40)] = 694,
  [SMALL_STATE(41)] = 708,
  [SMALL_STATE(42)] = 722,
  [SMALL_STATE(43)] = 732,
  [SMALL_STATE(44)] = 742,
  [SMALL_STATE(45)] = 756,
  [SMALL_STATE(46)] = 770,
  [SMALL_STATE(47)] = 780,
  [SMALL_STATE(48)] = 789,
  [SMALL_STATE(49)] = 798,
  [SMALL_STATE(50)] = 807,
  [SMALL_STATE(51)] = 818,
  [SMALL_STATE(52)] = 829,
  [SMALL_STATE(53)] = 840,
  [SMALL_STATE(54)] = 851,
  [SMALL_STATE(55)] = 860,
  [SMALL_STATE(56)] = 871,
  [SMALL_STATE(57)] = 882,
  [SMALL_STATE(58)] = 893,
  [SMALL_STATE(59)] = 902,
  [SMALL_STATE(60)] = 911,
  [SMALL_STATE(61)] = 922,
  [SMALL_STATE(62)] = 933,
  [SMALL_STATE(63)] = 942,
  [SMALL_STATE(64)] = 950,
  [SMALL_STATE(65)] = 958,
  [SMALL_STATE(66)] = 966,
  [SMALL_STATE(67)] = 974,
  [SMALL_STATE(68)] = 982,
  [SMALL_STATE(69)] = 990,
  [SMALL_STATE(70)] = 998,
  [SMALL_STATE(71)] = 1006,
  [SMALL_STATE(72)] = 1014,
  [SMALL_STATE(73)] = 1022,
  [SMALL_STATE(74)] = 1030,
  [SMALL_STATE(75)] = 1038,
  [SMALL_STATE(76)] = 1046,
  [SMALL_STATE(77)] = 1054,
  [SMALL_STATE(78)] = 1062,
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
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(9),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(71),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(23),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_clause, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_clause, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(8),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(60),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration_statement, 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_identifier, 1, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3, .production_id = 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
