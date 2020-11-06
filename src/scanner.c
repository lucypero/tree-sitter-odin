#include <tree_sitter/parser.h>
#include <wctype.h>
#include <stdio.h>

enum TokenType {
  BLOCK_COMMENT,
};

void *tree_sitter_odin_external_scanner_create() { return NULL; }
void tree_sitter_odin_external_scanner_destroy(void *p) {}
void tree_sitter_odin_external_scanner_reset(void *p) {}
unsigned tree_sitter_odin_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_odin_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static bool is_num_char(int32_t c) {
  return c == '_' || iswdigit(c);
}

bool tree_sitter_odin_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {

  // if (! valid_symbols[BLOCK_COMMENT]) {
  //   return false;
  // }
  // printf("lookahead: %c\ncolumn: %i\nis_included_range_start: %i\n", lexer->lookahead, lexer->get_column(lexer), lexer->is_at_included_range_start(lexer));

  if (lexer->lookahead == '/') {
    printf("/ detected \n");
    advance(lexer);
    if (lexer->lookahead != '*') return false;
    printf("* detected.. it is a comment\n");
    advance(lexer);

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '*':
          advance(lexer);
          after_star = true;
          break;
        case '/':
          if (after_star) {
            advance(lexer);
            after_star = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              return true;
            }
          } else {
            advance(lexer);
            after_star = false;
            if (lexer->lookahead == '*') {
              nesting_depth++;
              advance(lexer);
            }
          }
          break;
        default:
          advance(lexer);
          after_star = false;
          break;
      }
    }
  }

  printf("got nothing.. look ahead is %c\n", lexer->lookahead);

  return false;
}
