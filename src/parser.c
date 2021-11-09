#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym_keyword_token1 = 3,
  sym__delimiter = 4,
  aux_sym_named_delimiter_token1 = 5,
  aux_sym_named_delimiter_token2 = 6,
  aux_sym_named_delimiter_token3 = 7,
  sym__separator = 8,
  sym__text_till_eol = 9,
  anon_sym_TILDE_LF = 10,
  sym_metadata = 11,
  sym_statement = 12,
  sym_statement_group = 13,
  sym_keyword = 14,
  sym_value = 15,
  sym_delimiter = 16,
  sym_named_delimiter = 17,
  sym__text_with_trailing_modifier = 18,
  aux_sym_metadata_repeat1 = 19,
  aux_sym_statement_group_repeat1 = 20,
  aux_sym_value_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_keyword_token1] = "keyword_token1",
  [sym__delimiter] = "_delimiter",
  [aux_sym_named_delimiter_token1] = "named_delimiter_token1",
  [aux_sym_named_delimiter_token2] = "named_delimiter_token2",
  [aux_sym_named_delimiter_token3] = "named_delimiter_token3",
  [sym__separator] = "_separator",
  [sym__text_till_eol] = "_text_till_eol",
  [anon_sym_TILDE_LF] = "~\n",
  [sym_metadata] = "metadata",
  [sym_statement] = "statement",
  [sym_statement_group] = "statement_group",
  [sym_keyword] = "keyword",
  [sym_value] = "value",
  [sym_delimiter] = "delimiter",
  [sym_named_delimiter] = "named_delimiter",
  [sym__text_with_trailing_modifier] = "_text_with_trailing_modifier",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_statement_group_repeat1] = "statement_group_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_keyword_token1] = aux_sym_keyword_token1,
  [sym__delimiter] = sym__delimiter,
  [aux_sym_named_delimiter_token1] = aux_sym_named_delimiter_token1,
  [aux_sym_named_delimiter_token2] = aux_sym_named_delimiter_token2,
  [aux_sym_named_delimiter_token3] = aux_sym_named_delimiter_token3,
  [sym__separator] = sym__separator,
  [sym__text_till_eol] = sym__text_till_eol,
  [anon_sym_TILDE_LF] = anon_sym_TILDE_LF,
  [sym_metadata] = sym_metadata,
  [sym_statement] = sym_statement,
  [sym_statement_group] = sym_statement_group,
  [sym_keyword] = sym_keyword,
  [sym_value] = sym_value,
  [sym_delimiter] = sym_delimiter,
  [sym_named_delimiter] = sym_named_delimiter,
  [sym__text_with_trailing_modifier] = sym__text_with_trailing_modifier,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_statement_group_repeat1] = aux_sym_statement_group_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_statement_group] = {
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
  [aux_sym_statement_group_repeat1] = {
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
      if (eof) ADVANCE(16);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '{') ADVANCE(17);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '~') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(37);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(31);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\n') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_keyword_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__delimiter);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__delimiter);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token1);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token2);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_TILDE_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 13},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym__delimiter] = ACTIONS(1),
    [aux_sym_named_delimiter_token1] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [anon_sym_TILDE_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(30),
    [sym_statement] = STATE(3),
    [sym_statement_group] = STATE(3),
    [sym_keyword] = STATE(7),
    [sym_delimiter] = STATE(3),
    [sym_named_delimiter] = STATE(12),
    [aux_sym_metadata_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_keyword_token1] = ACTIONS(5),
    [sym__delimiter] = ACTIONS(7),
    [aux_sym_named_delimiter_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      aux_sym_keyword_token1,
    ACTIONS(16), 1,
      sym__delimiter,
    ACTIONS(19), 1,
      aux_sym_named_delimiter_token1,
    STATE(7), 1,
      sym_keyword,
    STATE(12), 1,
      sym_named_delimiter,
    STATE(2), 4,
      sym_statement,
      sym_statement_group,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [25] = 7,
    ACTIONS(5), 1,
      aux_sym_keyword_token1,
    ACTIONS(7), 1,
      sym__delimiter,
    ACTIONS(9), 1,
      aux_sym_named_delimiter_token1,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_keyword,
    STATE(12), 1,
      sym_named_delimiter,
    STATE(2), 4,
      sym_statement,
      sym_statement_group,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [50] = 4,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    ACTIONS(26), 1,
      aux_sym_keyword_token1,
    STATE(9), 1,
      sym_keyword,
    STATE(4), 2,
      sym_statement,
      aux_sym_statement_group_repeat1,
  [64] = 3,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_TILDE_LF,
    ACTIONS(31), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [76] = 4,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    ACTIONS(37), 1,
      aux_sym_keyword_token1,
    STATE(9), 1,
      sym_keyword,
    STATE(4), 2,
      sym_statement,
      aux_sym_statement_group_repeat1,
  [90] = 4,
    ACTIONS(39), 1,
      anon_sym_LBRACE,
    ACTIONS(41), 1,
      sym__text_till_eol,
    STATE(11), 1,
      sym_value,
    STATE(17), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [104] = 3,
    ACTIONS(33), 1,
      anon_sym_TILDE_LF,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
    ACTIONS(45), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [116] = 3,
    ACTIONS(47), 1,
      sym__text_till_eol,
    STATE(21), 1,
      sym_value,
    STATE(15), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [127] = 3,
    ACTIONS(49), 1,
      aux_sym_keyword_token1,
    STATE(9), 1,
      sym_keyword,
    STATE(6), 2,
      sym_statement,
      aux_sym_statement_group_repeat1,
  [138] = 2,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [147] = 2,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [156] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [165] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      aux_sym_keyword_token1,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [174] = 2,
    ACTIONS(67), 1,
      sym__text_till_eol,
    STATE(19), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [182] = 2,
    ACTIONS(33), 1,
      anon_sym_TILDE_LF,
    ACTIONS(45), 2,
      anon_sym_RBRACE,
      aux_sym_keyword_token1,
  [190] = 2,
    ACTIONS(69), 1,
      sym__text_till_eol,
    STATE(19), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [198] = 2,
    ACTIONS(33), 1,
      anon_sym_TILDE_LF,
    ACTIONS(31), 2,
      anon_sym_RBRACE,
      aux_sym_keyword_token1,
  [206] = 2,
    ACTIONS(71), 1,
      sym__text_till_eol,
    STATE(19), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [214] = 1,
    ACTIONS(74), 2,
      anon_sym_LBRACE,
      sym__text_till_eol,
  [219] = 1,
    ACTIONS(53), 2,
      anon_sym_RBRACE,
      aux_sym_keyword_token1,
  [224] = 1,
    ACTIONS(76), 1,
      sym__delimiter,
  [228] = 1,
    ACTIONS(78), 1,
      sym__text_till_eol,
  [232] = 1,
    ACTIONS(33), 1,
      anon_sym_TILDE_LF,
  [236] = 1,
    ACTIONS(80), 1,
      sym__text_till_eol,
  [240] = 1,
    ACTIONS(82), 1,
      aux_sym_named_delimiter_token2,
  [244] = 1,
    ACTIONS(84), 1,
      sym__separator,
  [248] = 1,
    ACTIONS(86), 1,
      aux_sym_named_delimiter_token3,
  [252] = 1,
    ACTIONS(88), 1,
      sym__separator,
  [256] = 1,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 104,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 127,
  [SMALL_STATE(11)] = 138,
  [SMALL_STATE(12)] = 147,
  [SMALL_STATE(13)] = 156,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 174,
  [SMALL_STATE(16)] = 182,
  [SMALL_STATE(17)] = 190,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 206,
  [SMALL_STATE(20)] = 214,
  [SMALL_STATE(21)] = 219,
  [SMALL_STATE(22)] = 224,
  [SMALL_STATE(23)] = 228,
  [SMALL_STATE(24)] = 232,
  [SMALL_STATE(25)] = 236,
  [SMALL_STATE(26)] = 240,
  [SMALL_STATE(27)] = 244,
  [SMALL_STATE(28)] = 248,
  [SMALL_STATE(29)] = 252,
  [SMALL_STATE(30)] = 256,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(27),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(12),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(26),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_statement_group_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_group_repeat1, 2), SHIFT_REPEAT(29),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_delimiter, 4, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_delimiter, 4, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_group, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement_group, 4),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(24),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_keyword, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_with_trailing_modifier, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keyword, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
