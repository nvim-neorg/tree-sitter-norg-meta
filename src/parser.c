#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 1
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  sym_key = 1,
  aux_sym_value_token1 = 2,
  anon_sym_TILDE_LF = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_COLON = 8,
  aux_sym_pair_token1 = 9,
  anon_sym_LF = 10,
  anon_sym_DASH = 11,
  aux_sym_delimiter_token1 = 12,
  sym_metadata = 13,
  sym_value = 14,
  sym_array = 15,
  sym_object = 16,
  sym_pair = 17,
  sym_delimiter = 18,
  aux_sym_metadata_repeat1 = 19,
  aux_sym_array_repeat1 = 20,
  aux_sym_object_repeat1 = 21,
  anon_alias_sym__value = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_TILDE_LF] = "~\n",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_pair_token1] = "pair_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_DASH] = "-",
  [aux_sym_delimiter_token1] = "delimiter_token1",
  [sym_metadata] = "metadata",
  [sym_value] = "value",
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym_delimiter] = "delimiter",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [anon_alias_sym__value] = "_value",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_key] = sym_key,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [anon_sym_TILDE_LF] = anon_sym_TILDE_LF,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_delimiter_token1] = aux_sym_delimiter_token1,
  [sym_metadata] = sym_metadata,
  [sym_value] = sym_value,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym_delimiter] = sym_delimiter,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [anon_alias_sym__value] = anon_alias_sym__value,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_TILDE_LF] = {
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_delimiter_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_metadata] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_delimiter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_metadata_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym__value] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = anon_alias_sym__value,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_value, 2,
    sym_value,
    anon_alias_sym__value,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 4,
  [7] = 4,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 17,
  [20] = 16,
  [21] = 17,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 28,
  [29] = 26,
  [30] = 22,
  [31] = 23,
  [32] = 13,
  [33] = 25,
  [34] = 34,
  [35] = 23,
  [36] = 24,
  [37] = 37,
  [38] = 22,
  [39] = 28,
  [40] = 25,
  [41] = 26,
  [42] = 37,
  [43] = 37,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 44,
  [49] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '~') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '~') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(18);
      if (lookahead == '~') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 6:
      if (eof) ADVANCE(8);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '~') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '-') ADVANCE(23);
      if (lookahead == '~') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(12);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_TILDE_LF);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(10);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 11) ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 7},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_TILDE_LF] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(45),
    [sym_pair] = STATE(11),
    [sym_delimiter] = STATE(11),
    [aux_sym_metadata_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(12), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    ACTIONS(17), 1,
      anon_sym_LBRACE,
    STATE(2), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [19] = 5,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 1,
      anon_sym_RBRACK,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    STATE(2), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [38] = 5,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(28), 1,
      anon_sym_RBRACK,
    STATE(3), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [57] = 5,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_RBRACK,
    STATE(2), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [76] = 5,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_RBRACK,
    STATE(5), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [95] = 5,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    STATE(8), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [114] = 5,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(26), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_RBRACK,
    STATE(2), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [133] = 5,
    ACTIONS(38), 1,
      aux_sym_value_token1,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_LBRACE,
    ACTIONS(44), 1,
      anon_sym_LF,
    STATE(39), 3,
      sym_value,
      sym_array,
      sym_object,
  [151] = 5,
    ACTIONS(46), 1,
      aux_sym_value_token1,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(50), 1,
      anon_sym_LBRACE,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(28), 3,
      sym_value,
      sym_array,
      sym_object,
  [169] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(12), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [184] = 4,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_key,
    ACTIONS(61), 1,
      anon_sym_DASH,
    STATE(12), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [199] = 3,
    ACTIONS(64), 1,
      aux_sym_value_token1,
    ACTIONS(66), 1,
      anon_sym_TILDE_LF,
    ACTIONS(68), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [211] = 3,
    ACTIONS(70), 1,
      sym_key,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [222] = 3,
    ACTIONS(64), 1,
      sym_key,
    ACTIONS(75), 1,
      anon_sym_TILDE_LF,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
  [233] = 3,
    ACTIONS(77), 1,
      sym_key,
    ACTIONS(79), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [244] = 3,
    ACTIONS(77), 1,
      sym_key,
    ACTIONS(81), 1,
      anon_sym_RBRACE,
    STATE(16), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [255] = 3,
    ACTIONS(77), 1,
      sym_key,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [266] = 3,
    ACTIONS(77), 1,
      sym_key,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [277] = 3,
    ACTIONS(77), 1,
      sym_key,
    ACTIONS(87), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [288] = 3,
    ACTIONS(77), 1,
      sym_key,
    ACTIONS(89), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [299] = 1,
    ACTIONS(91), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [306] = 1,
    ACTIONS(93), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [313] = 1,
    ACTIONS(95), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [320] = 1,
    ACTIONS(97), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [327] = 1,
    ACTIONS(99), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [334] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [340] = 1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [346] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [352] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [358] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [364] = 2,
    ACTIONS(103), 1,
      anon_sym_TILDE_LF,
    ACTIONS(64), 2,
      sym_key,
      anon_sym_RBRACE,
  [372] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [378] = 1,
    ACTIONS(105), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [384] = 1,
    ACTIONS(107), 2,
      sym_key,
      anon_sym_RBRACE,
  [389] = 1,
    ACTIONS(109), 2,
      sym_key,
      anon_sym_RBRACE,
  [394] = 2,
    ACTIONS(20), 1,
      aux_sym_value_token1,
    STATE(24), 1,
      sym_value,
  [401] = 1,
    ACTIONS(111), 2,
      sym_key,
      anon_sym_RBRACE,
  [406] = 1,
    ACTIONS(113), 2,
      sym_key,
      anon_sym_RBRACE,
  [411] = 1,
    ACTIONS(115), 2,
      sym_key,
      anon_sym_RBRACE,
  [416] = 1,
    ACTIONS(117), 2,
      sym_key,
      anon_sym_RBRACE,
  [421] = 2,
    ACTIONS(119), 1,
      aux_sym_value_token1,
    STATE(36), 1,
      sym_value,
  [428] = 2,
    ACTIONS(121), 1,
      aux_sym_value_token1,
    STATE(27), 1,
      sym_value,
  [435] = 1,
    ACTIONS(123), 1,
      aux_sym_pair_token1,
  [439] = 1,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
  [443] = 1,
    ACTIONS(127), 1,
      aux_sym_delimiter_token1,
  [447] = 1,
    ACTIONS(129), 1,
      anon_sym_COLON,
  [451] = 1,
    ACTIONS(131), 1,
      aux_sym_pair_token1,
  [455] = 1,
    ACTIONS(133), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 76,
  [SMALL_STATE(7)] = 95,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 133,
  [SMALL_STATE(10)] = 151,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 211,
  [SMALL_STATE(15)] = 222,
  [SMALL_STATE(16)] = 233,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 277,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 299,
  [SMALL_STATE(23)] = 306,
  [SMALL_STATE(24)] = 313,
  [SMALL_STATE(25)] = 320,
  [SMALL_STATE(26)] = 327,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 346,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 358,
  [SMALL_STATE(32)] = 364,
  [SMALL_STATE(33)] = 372,
  [SMALL_STATE(34)] = 378,
  [SMALL_STATE(35)] = 384,
  [SMALL_STATE(36)] = 389,
  [SMALL_STATE(37)] = 394,
  [SMALL_STATE(38)] = 401,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 411,
  [SMALL_STATE(41)] = 416,
  [SMALL_STATE(42)] = 421,
  [SMALL_STATE(43)] = 428,
  [SMALL_STATE(44)] = 435,
  [SMALL_STATE(45)] = 439,
  [SMALL_STATE(46)] = 443,
  [SMALL_STATE(47)] = 447,
  [SMALL_STATE(48)] = 451,
  [SMALL_STATE(49)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(13),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(47),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(46),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 2),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
