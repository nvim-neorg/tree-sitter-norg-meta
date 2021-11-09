#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 14
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 10
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword = 1,
  sym__separator = 2,
  sym__space = 3,
  sym__word = 4,
  sym_metadata = 5,
  sym_statement = 6,
  sym_description = 7,
  aux_sym_metadata_repeat1 = 8,
  aux_sym_description_repeat1 = 9,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [sym__separator] = "_separator",
  [sym__space] = "_space",
  [sym__word] = "_word",
  [sym_metadata] = "metadata",
  [sym_statement] = "statement",
  [sym_description] = "description",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_description_repeat1] = "description_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [sym__separator] = sym__separator,
  [sym__space] = sym__space,
  [sym__word] = sym__word,
  [sym_metadata] = sym_metadata,
  [sym_statement] = sym_statement,
  [sym_description] = sym_description,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_description_repeat1] = aux_sym_description_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__separator] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_description_repeat1] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(3);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(4);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym__word);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(7);
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
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(11),
    [sym_statement] = STATE(2),
    [aux_sym_metadata_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(5), 1,
      sym_keyword,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_statement,
      aux_sym_metadata_repeat1,
  [11] = 3,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_keyword,
    STATE(3), 2,
      sym_statement,
      aux_sym_metadata_repeat1,
  [22] = 4,
    ACTIONS(14), 1,
      ts_builtin_sym_end,
    ACTIONS(16), 1,
      sym_keyword,
    ACTIONS(18), 1,
      sym__space,
    STATE(5), 1,
      aux_sym_description_repeat1,
  [35] = 4,
    ACTIONS(18), 1,
      sym__space,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(22), 1,
      sym_keyword,
    STATE(6), 1,
      aux_sym_description_repeat1,
  [48] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      sym_keyword,
    ACTIONS(28), 1,
      sym__space,
    STATE(6), 1,
      aux_sym_description_repeat1,
  [61] = 2,
    ACTIONS(26), 1,
      sym_keyword,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      sym__space,
  [69] = 2,
    ACTIONS(31), 1,
      sym__word,
    STATE(9), 1,
      sym_description,
  [76] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_keyword,
  [81] = 1,
    ACTIONS(35), 1,
      sym__separator,
  [85] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [89] = 1,
    ACTIONS(39), 1,
      sym__space,
  [93] = 1,
    ACTIONS(41), 1,
      sym__word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 35,
  [SMALL_STATE(6)] = 48,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 76,
  [SMALL_STATE(10)] = 81,
  [SMALL_STATE(11)] = 85,
  [SMALL_STATE(12)] = 89,
  [SMALL_STATE(13)] = 93,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 1),
  [16] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_description, 2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_description_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_description_repeat1, 2), SHIFT_REPEAT(13),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
