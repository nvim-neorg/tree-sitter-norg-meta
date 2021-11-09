#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym_keyword_token1 = 1,
  sym__delimiter = 2,
  aux_sym_named_delimiter_token1 = 3,
  aux_sym_named_delimiter_token2 = 4,
  aux_sym_named_delimiter_token3 = 5,
  sym__separator = 6,
  sym__space = 7,
  sym__text_till_eol = 8,
  anon_sym_TILDE_LF = 9,
  sym_metadata = 10,
  sym_statement = 11,
  sym_keyword = 12,
  sym_value = 13,
  sym_delimiter = 14,
  sym_named_delimiter = 15,
  sym__text_with_trailing_modifier = 16,
  aux_sym_metadata_repeat1 = 17,
  aux_sym_value_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_keyword_token1] = "keyword_token1",
  [sym__delimiter] = "_delimiter",
  [aux_sym_named_delimiter_token1] = "named_delimiter_token1",
  [aux_sym_named_delimiter_token2] = "named_delimiter_token2",
  [aux_sym_named_delimiter_token3] = "named_delimiter_token3",
  [sym__separator] = "_separator",
  [sym__space] = "_space",
  [sym__text_till_eol] = "_text_till_eol",
  [anon_sym_TILDE_LF] = "~\n",
  [sym_metadata] = "metadata",
  [sym_statement] = "statement",
  [sym_keyword] = "keyword",
  [sym_value] = "value",
  [sym_delimiter] = "delimiter",
  [sym_named_delimiter] = "named_delimiter",
  [sym__text_with_trailing_modifier] = "_text_with_trailing_modifier",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [sym__delimiter] = sym__delimiter,
  [aux_sym_named_delimiter_token1] = aux_sym_named_delimiter_token1,
  [aux_sym_named_delimiter_token2] = aux_sym_named_delimiter_token2,
  [aux_sym_named_delimiter_token3] = aux_sym_named_delimiter_token3,
  [sym__separator] = sym__separator,
  [sym__space] = sym__space,
  [sym__text_till_eol] = sym__text_till_eol,
  [anon_sym_TILDE_LF] = anon_sym_TILDE_LF,
  [sym_metadata] = sym_metadata,
  [sym_statement] = sym_statement,
  [sym_keyword] = sym_keyword,
  [sym_value] = sym_value,
  [sym_delimiter] = sym_delimiter,
  [sym_named_delimiter] = sym_named_delimiter,
  [sym__text_with_trailing_modifier] = sym__text_with_trailing_modifier,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_keyword_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_named_delimiter_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_delimiter_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_delimiter_token3] = {
    .visible = false,
    .named = false,
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
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_named_delimiter] = {
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

enum {
  field_title = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_title] = "title",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_title, 1},
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
      if (eof) ADVANCE(9);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == ':') ADVANCE(21);
      if (lookahead == '~') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(19);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__delimiter);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__delimiter);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token2);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_TILDE_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_keyword_token1] = ACTIONS(1),
    [sym__delimiter] = ACTIONS(1),
    [aux_sym_named_delimiter_token1] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [anon_sym_TILDE_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(17),
    [sym_statement] = STATE(2),
    [sym_keyword] = STATE(16),
    [sym_delimiter] = STATE(2),
    [sym_named_delimiter] = STATE(7),
    [aux_sym_metadata_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_keyword_token1] = ACTIONS(5),
    [sym__delimiter] = ACTIONS(7),
    [aux_sym_named_delimiter_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      sym__delimiter,
    ACTIONS(9), 1,
      aux_sym_named_delimiter_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_named_delimiter,
    STATE(16), 1,
      sym_keyword,
    STATE(3), 3,
      sym_statement,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [24] = 7,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      aux_sym_keyword_token1,
    ACTIONS(18), 1,
      sym__delimiter,
    ACTIONS(21), 1,
      aux_sym_named_delimiter_token1,
    STATE(7), 1,
      sym_named_delimiter,
    STATE(16), 1,
      sym_keyword,
    STATE(3), 3,
      sym_statement,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [48] = 3,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      anon_sym_TILDE_LF,
    ACTIONS(26), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [60] = 3,
    ACTIONS(28), 1,
      anon_sym_TILDE_LF,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [72] = 3,
    ACTIONS(34), 1,
      sym__text_till_eol,
    STATE(9), 1,
      sym_value,
    STATE(10), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [83] = 2,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [92] = 2,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [101] = 2,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [110] = 2,
    ACTIONS(48), 1,
      sym__text_till_eol,
    STATE(11), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [118] = 2,
    ACTIONS(50), 1,
      sym__text_till_eol,
    STATE(11), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [126] = 1,
    ACTIONS(53), 1,
      sym__separator,
  [130] = 1,
    ACTIONS(55), 1,
      sym__delimiter,
  [134] = 1,
    ACTIONS(57), 1,
      aux_sym_named_delimiter_token3,
  [138] = 1,
    ACTIONS(59), 1,
      sym__space,
  [142] = 1,
    ACTIONS(61), 1,
      sym__space,
  [146] = 1,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
  [150] = 1,
    ACTIONS(65), 1,
      sym__text_till_eol,
  [154] = 1,
    ACTIONS(67), 1,
      aux_sym_named_delimiter_token2,
  [158] = 1,
    ACTIONS(28), 1,
      anon_sym_TILDE_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 101,
  [SMALL_STATE(10)] = 110,
  [SMALL_STATE(11)] = 118,
  [SMALL_STATE(12)] = 126,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 134,
  [SMALL_STATE(15)] = 138,
  [SMALL_STATE(16)] = 142,
  [SMALL_STATE(17)] = 146,
  [SMALL_STATE(18)] = 150,
  [SMALL_STATE(19)] = 154,
  [SMALL_STATE(20)] = 158,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(12),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(7),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(19),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_delimiter, 4, .production_id = 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_delimiter, 4, .production_id = 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(20),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_with_trailing_modifier, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
