#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_keyword = 1,
  sym_delimiter = 2,
  sym__separator = 3,
  sym__space = 4,
  sym__text_till_eol = 5,
  anon_sym_TILDE_LF = 6,
  sym_metadata = 7,
  sym_statement = 8,
  sym_value = 9,
  sym__text_with_trailing_modifier = 10,
  aux_sym_metadata_repeat1 = 11,
  aux_sym_value_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_keyword] = "keyword",
  [sym_delimiter] = "delimiter",
  [sym__separator] = "_separator",
  [sym__space] = "_space",
  [sym__text_till_eol] = "_text_till_eol",
  [anon_sym_TILDE_LF] = "~\n",
  [sym_metadata] = "metadata",
  [sym_statement] = "statement",
  [sym_value] = "value",
  [sym__text_with_trailing_modifier] = "_text_with_trailing_modifier",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_keyword] = sym_keyword,
  [sym_delimiter] = sym_delimiter,
  [sym__separator] = sym__separator,
  [sym__space] = sym__space,
  [sym__text_till_eol] = sym__text_till_eol,
  [anon_sym_TILDE_LF] = anon_sym_TILDE_LF,
  [sym_metadata] = sym_metadata,
  [sym_statement] = sym_statement,
  [sym_value] = sym_value,
  [sym__text_with_trailing_modifier] = sym__text_with_trailing_modifier,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
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
  [sym_delimiter] = {
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
  [sym__text_till_eol] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_TILDE_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__text_with_trailing_modifier] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
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
      if (eof) ADVANCE(4);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(11);
      if (lookahead == '~') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\n') ADVANCE(10);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_delimiter);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_TILDE_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_keyword] = ACTIONS(1),
    [sym_delimiter] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [anon_sym_TILDE_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(11),
    [sym_statement] = STATE(2),
    [aux_sym_metadata_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_keyword] = ACTIONS(5),
    [sym_delimiter] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      sym_keyword,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_delimiter,
    STATE(3), 2,
      sym_statement,
      aux_sym_metadata_repeat1,
  [14] = 4,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_keyword,
    ACTIONS(18), 1,
      sym_delimiter,
    STATE(3), 2,
      sym_statement,
      aux_sym_metadata_repeat1,
  [28] = 3,
    ACTIONS(21), 1,
      sym__text_till_eol,
    STATE(7), 1,
      sym_value,
    STATE(8), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [39] = 3,
    ACTIONS(25), 1,
      sym_keyword,
    ACTIONS(27), 1,
      anon_sym_TILDE_LF,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      sym_delimiter,
  [50] = 3,
    ACTIONS(27), 1,
      anon_sym_TILDE_LF,
    ACTIONS(31), 1,
      sym_keyword,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_delimiter,
  [61] = 2,
    ACTIONS(35), 1,
      sym_keyword,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      sym_delimiter,
  [69] = 2,
    ACTIONS(37), 1,
      sym__text_till_eol,
    STATE(9), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [77] = 2,
    ACTIONS(39), 1,
      sym__text_till_eol,
    STATE(9), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [85] = 1,
    ACTIONS(42), 1,
      sym__separator,
  [89] = 1,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
  [93] = 1,
    ACTIONS(46), 1,
      sym__space,
  [97] = 1,
    ACTIONS(48), 1,
      sym__text_till_eol,
  [101] = 1,
    ACTIONS(27), 1,
      anon_sym_TILDE_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 14,
  [SMALL_STATE(4)] = 28,
  [SMALL_STATE(5)] = 39,
  [SMALL_STATE(6)] = 50,
  [SMALL_STATE(7)] = 61,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 77,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 89,
  [SMALL_STATE(12)] = 93,
  [SMALL_STATE(13)] = 97,
  [SMALL_STATE(14)] = 101,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [44] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_with_trailing_modifier, 2),
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
