#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 5
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_title = 1,
  anon_sym_COLON = 2,
  anon_sym_description = 3,
  anon_sym_author = 4,
  anon_sym_categories = 5,
  anon_sym_created = 6,
  anon_sym_version = 7,
  sym_title = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_title] = "title",
  [anon_sym_COLON] = ":",
  [anon_sym_description] = "description",
  [anon_sym_author] = "author",
  [anon_sym_categories] = "categories",
  [anon_sym_created] = "created",
  [anon_sym_version] = "version",
  [sym_title] = "title",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_title] = anon_sym_title,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_description] = anon_sym_description,
  [anon_sym_author] = anon_sym_author,
  [anon_sym_categories] = anon_sym_categories,
  [anon_sym_created] = anon_sym_created,
  [anon_sym_version] = anon_sym_version,
  [sym_title] = sym_title,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_description] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_author] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_categories] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_created] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_version] = {
    .visible = true,
    .named = false,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == ':') ADVANCE(42);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'c') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(5);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'h') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'p') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'r') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(3);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_title);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_description);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_author);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_categories);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_created);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_version);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_description] = ACTIONS(1),
    [anon_sym_author] = ACTIONS(1),
    [anon_sym_categories] = ACTIONS(1),
    [anon_sym_created] = ACTIONS(1),
    [anon_sym_version] = ACTIONS(1),
  },
  [1] = {
    [sym_title] = STATE(3),
    [anon_sym_title] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(5), 1,
      anon_sym_COLON,
  [4] = 1,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 4,
  [SMALL_STATE(4)] = 8,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_norg_meta(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
