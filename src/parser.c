#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 74
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 3
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_return = 15,
  aux_sym_string_literal_token1 = 16,
  sym_escape_sequence = 17,
  anon_sym_DOT = 18,
  sym_int_literal = 19,
  sym_source_file = 20,
  sym__top_level_declaration = 21,
  sym_package_clause = 22,
  sym_import_declaration = 23,
  sym_package_import = 24,
  sym_proc_declaration = 25,
  sym_parameter_list = 26,
  sym_parameter_declaration = 27,
  sym__type_identifier = 28,
  sym__package_identifier = 29,
  sym__collection_identifier = 30,
  sym_block = 31,
  sym__statement = 32,
  sym__simple_statement = 33,
  sym_return_statement = 34,
  sym__expression = 35,
  sym_string_literal = 36,
  sym_call_expression = 37,
  sym_argument_list = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_parameter_list_repeat1 = 40,
  aux_sym_block_repeat1 = 41,
  aux_sym_string_literal_repeat1 = 42,
  aux_sym_argument_list_repeat1 = 43,
  alias_sym_collection_identifier = 44,
  alias_sym_package_identifier = 45,
  alias_sym_type_identifier = 46,
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
  [anon_sym_return] = "return",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_DOT] = ".",
  [sym_int_literal] = "int_literal",
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
  [sym__simple_statement] = "_simple_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_string_literal] = "string_literal",
  [sym_call_expression] = "call_expression",
  [sym_argument_list] = "argument_list",
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
  [anon_sym_return] = anon_sym_return,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_int_literal] = sym_int_literal,
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
  [sym__simple_statement] = sym__simple_statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_string_literal] = sym_string_literal,
  [sym_call_expression] = sym_call_expression,
  [sym_argument_list] = sym_argument_list,
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
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(64);
      if (lookahead == '\\') ADVANCE(7);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(61);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '0') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(38);
      END_STATE();
    case 7:
      if (lookahead == 'U') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(22);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == ':') ADVANCE(34);
      if (lookahead == ';') ADVANCE(64);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(61);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(55);
      if (lookahead == '{') ADVANCE(62);
      if (lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(32);
      if (lookahead == ':') ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 'p') ADVANCE(59);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_package);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_import);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'u') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'n') ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'j') ||
          ('l' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'k') ADVANCE(60);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'g') ADVANCE(56);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'c') ADVANCE(37);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 181 ||
          (913 <= lookahead && lookahead <= 937) ||
          (945 <= lookahead && lookahead <= 969)) ADVANCE(61);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(9);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(8);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(10);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(72);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 28},
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 28},
  [17] = {.lex_state = 28},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 28},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 13},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 28},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 28},
  [72] = {.lex_state = 28},
  [73] = {.lex_state = 0},
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
    [anon_sym_return] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(64),
    [sym__top_level_declaration] = STATE(5),
    [sym_package_clause] = STATE(5),
    [sym_import_declaration] = STATE(5),
    [sym_proc_declaration] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_package] = ACTIONS(5),
    [anon_sym_import] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(19), 1,
      anon_sym_return,
    ACTIONS(22), 1,
      sym_int_literal,
    STATE(61), 1,
      sym__package_identifier,
    STATE(60), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
    STATE(2), 4,
      sym__statement,
      sym__simple_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [30] = 8,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(29), 1,
      anon_sym_RBRACE,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      sym_int_literal,
    STATE(61), 1,
      sym__package_identifier,
    STATE(60), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
    STATE(2), 4,
      sym__statement,
      sym__simple_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [60] = 8,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(31), 1,
      anon_sym_return,
    ACTIONS(33), 1,
      sym_int_literal,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(61), 1,
      sym__package_identifier,
    STATE(60), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
    STATE(3), 4,
      sym__statement,
      sym__simple_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [90] = 5,
    ACTIONS(5), 1,
      anon_sym_package,
    ACTIONS(7), 1,
      anon_sym_import,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(6), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [110] = 5,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      anon_sym_package,
    ACTIONS(44), 1,
      anon_sym_import,
    ACTIONS(47), 1,
      sym_identifier,
    STATE(6), 5,
      sym__top_level_declaration,
      sym_package_clause,
      sym_import_declaration,
      sym_proc_declaration,
      aux_sym_source_file_repeat1,
  [130] = 6,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_int_literal,
    STATE(61), 1,
      sym__package_identifier,
    STATE(48), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
  [151] = 6,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_int_literal,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(61), 1,
      sym__package_identifier,
    STATE(48), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
  [172] = 6,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      sym_int_literal,
    STATE(61), 1,
      sym__package_identifier,
    STATE(37), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
  [193] = 5,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_int_literal,
    STATE(61), 1,
      sym__package_identifier,
    STATE(48), 3,
      sym__expression,
      sym_string_literal,
      sym_call_expression,
  [211] = 4,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_argument_list,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [226] = 2,
    ACTIONS(70), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(68), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      sym_int_literal,
  [236] = 2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_DQUOTE,
    ACTIONS(72), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [246] = 2,
    ACTIONS(76), 2,
      sym_identifier,
      anon_sym_return,
    ACTIONS(74), 3,
      anon_sym_DQUOTE,
      anon_sym_RBRACE,
      sym_int_literal,
  [256] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [265] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [274] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [283] = 3,
    ACTIONS(90), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(92), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [294] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [303] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [312] = 4,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(105), 1,
      anon_sym_RPAREN,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(29), 1,
      sym_parameter_declaration,
  [325] = 3,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(111), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [336] = 2,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 3,
      anon_sym_package,
      anon_sym_import,
      sym_identifier,
  [345] = 3,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(119), 2,
      aux_sym_string_literal_token1,
      sym_escape_sequence,
  [356] = 1,
    ACTIONS(121), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [362] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_parameter_declaration,
  [372] = 1,
    ACTIONS(125), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [378] = 3,
    ACTIONS(127), 1,
      anon_sym_COMMA,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
  [388] = 3,
    ACTIONS(132), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_parameter_list_repeat1,
  [398] = 1,
    ACTIONS(136), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [404] = 1,
    ACTIONS(138), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [410] = 3,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    ACTIONS(140), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_argument_list_repeat1,
  [420] = 3,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_parameter_declaration,
  [430] = 3,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    STATE(42), 1,
      aux_sym_parameter_list_repeat1,
  [440] = 1,
    ACTIONS(146), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [446] = 1,
    ACTIONS(148), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [452] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    STATE(32), 1,
      aux_sym_argument_list_repeat1,
  [462] = 1,
    ACTIONS(154), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [468] = 3,
    ACTIONS(156), 1,
      sym_identifier,
    STATE(59), 1,
      sym_package_import,
    STATE(71), 1,
      sym__collection_identifier,
  [478] = 3,
    ACTIONS(158), 1,
      anon_sym_DASH_GT,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [488] = 1,
    ACTIONS(162), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [494] = 3,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_parameter_list_repeat1,
  [504] = 1,
    ACTIONS(169), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
  [510] = 2,
    ACTIONS(171), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_parameter_list,
  [517] = 2,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [524] = 1,
    ACTIONS(167), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [529] = 2,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(45), 1,
      sym__type_identifier,
  [536] = 1,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [541] = 1,
    ACTIONS(175), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [546] = 1,
    ACTIONS(177), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [551] = 2,
    ACTIONS(173), 1,
      sym_identifier,
    STATE(54), 1,
      sym__type_identifier,
  [558] = 1,
    ACTIONS(179), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [563] = 2,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_argument_list,
  [570] = 1,
    ACTIONS(181), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [575] = 2,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(17), 1,
      sym__package_identifier,
  [582] = 1,
    ACTIONS(185), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [587] = 2,
    ACTIONS(107), 1,
      sym_identifier,
    STATE(46), 1,
      sym_parameter_declaration,
  [594] = 2,
    ACTIONS(183), 1,
      sym_identifier,
    STATE(69), 1,
      sym__package_identifier,
  [601] = 1,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
  [605] = 1,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [609] = 1,
    ACTIONS(191), 1,
      anon_sym_DOT,
  [613] = 1,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
  [617] = 1,
    ACTIONS(193), 1,
      anon_sym_proc,
  [621] = 1,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [625] = 1,
    ACTIONS(197), 1,
      sym_int_literal,
  [629] = 1,
    ACTIONS(199), 1,
      sym_identifier,
  [633] = 1,
    ACTIONS(201), 1,
      anon_sym_SEMI,
  [637] = 1,
    ACTIONS(203), 1,
      anon_sym_COLON,
  [641] = 1,
    ACTIONS(205), 1,
      anon_sym_DQUOTE,
  [645] = 1,
    ACTIONS(207), 1,
      anon_sym_COLON_COLON,
  [649] = 1,
    ACTIONS(209), 1,
      anon_sym_COLON,
  [653] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [657] = 1,
    ACTIONS(213), 1,
      anon_sym_DQUOTE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 110,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 151,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 226,
  [SMALL_STATE(13)] = 236,
  [SMALL_STATE(14)] = 246,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 274,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 294,
  [SMALL_STATE(20)] = 303,
  [SMALL_STATE(21)] = 312,
  [SMALL_STATE(22)] = 325,
  [SMALL_STATE(23)] = 336,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 362,
  [SMALL_STATE(27)] = 372,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 388,
  [SMALL_STATE(30)] = 398,
  [SMALL_STATE(31)] = 404,
  [SMALL_STATE(32)] = 410,
  [SMALL_STATE(33)] = 420,
  [SMALL_STATE(34)] = 430,
  [SMALL_STATE(35)] = 440,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 452,
  [SMALL_STATE(38)] = 462,
  [SMALL_STATE(39)] = 468,
  [SMALL_STATE(40)] = 478,
  [SMALL_STATE(41)] = 488,
  [SMALL_STATE(42)] = 494,
  [SMALL_STATE(43)] = 504,
  [SMALL_STATE(44)] = 510,
  [SMALL_STATE(45)] = 517,
  [SMALL_STATE(46)] = 524,
  [SMALL_STATE(47)] = 529,
  [SMALL_STATE(48)] = 536,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 546,
  [SMALL_STATE(51)] = 551,
  [SMALL_STATE(52)] = 558,
  [SMALL_STATE(53)] = 563,
  [SMALL_STATE(54)] = 570,
  [SMALL_STATE(55)] = 575,
  [SMALL_STATE(56)] = 582,
  [SMALL_STATE(57)] = 587,
  [SMALL_STATE(58)] = 594,
  [SMALL_STATE(59)] = 601,
  [SMALL_STATE(60)] = 605,
  [SMALL_STATE(61)] = 609,
  [SMALL_STATE(62)] = 613,
  [SMALL_STATE(63)] = 617,
  [SMALL_STATE(64)] = 621,
  [SMALL_STATE(65)] = 625,
  [SMALL_STATE(66)] = 629,
  [SMALL_STATE(67)] = 633,
  [SMALL_STATE(68)] = 637,
  [SMALL_STATE(69)] = 641,
  [SMALL_STATE(70)] = 645,
  [SMALL_STATE(71)] = 649,
  [SMALL_STATE(72)] = 653,
  [SMALL_STATE(73)] = 657,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(24),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(65),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(60),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(73),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(70),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__package_identifier, 1, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_statement, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_statement, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 5, .production_id = 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_clause, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_package_clause, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_declaration, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_declaration, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_proc_declaration, 7, .production_id = 6),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(10),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type_identifier, 1, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 7),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(57),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_declaration, 3),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [195] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__collection_identifier, 1, .production_id = 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_package_import, 3, .production_id = 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
