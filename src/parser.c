#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum {
  sym_key = 1,
  aux_sym_value_token1 = 2,
  anon_sym_TILDE = 3,
  aux_sym_value_token2 = 4,
  anon_sym_TILDE_LF = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_COLON = 10,
  aux_sym_pair_token1 = 11,
  anon_sym_LF = 12,
  anon_sym_DASH = 13,
  aux_sym_delimiter_token1 = 14,
  sym_metadata = 15,
  sym_value = 16,
  sym_array = 17,
  sym_object = 18,
  sym_pair = 19,
  sym_delimiter = 20,
  aux_sym_metadata_repeat1 = 21,
  aux_sym_array_repeat1 = 22,
  aux_sym_object_repeat1 = 23,
  anon_alias_sym__value = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_key] = "key",
  [aux_sym_value_token1] = "value_token1",
  [anon_sym_TILDE] = "~",
  [aux_sym_value_token2] = "value_token2",
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
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_value_token2] = aux_sym_value_token2,
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
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token2] = {
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
  [4] = 2,
  [5] = 5,
  [6] = 3,
  [7] = 2,
  [8] = 3,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 11,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 19,
  [25] = 25,
  [26] = 17,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 21,
  [32] = 22,
  [33] = 16,
  [34] = 27,
  [35] = 28,
  [36] = 15,
  [37] = 30,
  [38] = 28,
  [39] = 27,
  [40] = 16,
  [41] = 22,
  [42] = 21,
  [43] = 43,
  [44] = 43,
  [45] = 15,
  [46] = 43,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 47,
  [52] = 52,
  [53] = 53,
  [54] = 50,
  [55] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != ']' &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '~') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 7:
      if (eof) ADVANCE(10);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (eof) ADVANCE(10);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(12);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '[' &&
          lookahead != ']' &&
          lookahead != '{' &&
          lookahead != '}' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TILDE_LF);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(11);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 11) ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 4},
  [7] = {.lex_state = 4},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 9},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 25},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 29},
  [54] = {.lex_state = 25},
  [55] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_TILDE_LF] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(52),
    [sym_pair] = STATE(13),
    [sym_delimiter] = STATE(13),
    [aux_sym_metadata_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    STATE(5), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [19] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(7), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [38] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    STATE(5), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [57] = 5,
    ACTIONS(21), 1,
      aux_sym_value_token1,
    ACTIONS(24), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_RBRACK,
    ACTIONS(29), 1,
      anon_sym_LBRACE,
    STATE(5), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [76] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(32), 1,
      anon_sym_RBRACK,
    STATE(4), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [95] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(34), 1,
      anon_sym_RBRACK,
    STATE(5), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [114] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
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
    STATE(30), 3,
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
    STATE(37), 3,
      sym_value,
      sym_array,
      sym_object,
  [169] = 4,
    ACTIONS(54), 1,
      aux_sym_value_token1,
    ACTIONS(56), 1,
      anon_sym_TILDE,
    ACTIONS(58), 1,
      anon_sym_TILDE_LF,
    ACTIONS(60), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [184] = 4,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      sym_key,
    ACTIONS(67), 1,
      anon_sym_DASH,
    STATE(12), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [199] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(12), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [214] = 4,
    ACTIONS(54), 1,
      sym_key,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(74), 1,
      anon_sym_TILDE_LF,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_DASH,
  [228] = 1,
    ACTIONS(76), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [235] = 1,
    ACTIONS(78), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [242] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [253] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [264] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [275] = 3,
    ACTIONS(88), 1,
      anon_sym_TILDE,
    ACTIONS(90), 1,
      anon_sym_TILDE_LF,
    ACTIONS(54), 2,
      sym_key,
      anon_sym_RBRACE,
  [286] = 1,
    ACTIONS(92), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [293] = 1,
    ACTIONS(94), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [300] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [311] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [322] = 3,
    ACTIONS(100), 1,
      sym_key,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(25), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [333] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(105), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [344] = 1,
    ACTIONS(107), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [351] = 1,
    ACTIONS(109), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [358] = 1,
    ACTIONS(111), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [364] = 1,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [370] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [376] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [382] = 1,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [388] = 1,
    ACTIONS(107), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [394] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [400] = 1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [406] = 1,
    ACTIONS(115), 2,
      sym_key,
      anon_sym_RBRACE,
  [411] = 1,
    ACTIONS(117), 2,
      sym_key,
      anon_sym_RBRACE,
  [416] = 1,
    ACTIONS(119), 2,
      sym_key,
      anon_sym_RBRACE,
  [421] = 1,
    ACTIONS(121), 2,
      sym_key,
      anon_sym_RBRACE,
  [426] = 1,
    ACTIONS(123), 2,
      sym_key,
      anon_sym_RBRACE,
  [431] = 1,
    ACTIONS(125), 2,
      sym_key,
      anon_sym_RBRACE,
  [436] = 2,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    STATE(16), 1,
      sym_value,
  [443] = 2,
    ACTIONS(127), 1,
      aux_sym_value_token1,
    STATE(40), 1,
      sym_value,
  [450] = 1,
    ACTIONS(129), 2,
      sym_key,
      anon_sym_RBRACE,
  [455] = 2,
    ACTIONS(131), 1,
      aux_sym_value_token1,
    STATE(33), 1,
      sym_value,
  [462] = 1,
    ACTIONS(133), 1,
      aux_sym_value_token2,
  [466] = 1,
    ACTIONS(135), 1,
      anon_sym_COLON,
  [470] = 1,
    ACTIONS(137), 1,
      aux_sym_value_token2,
  [474] = 1,
    ACTIONS(139), 1,
      aux_sym_pair_token1,
  [478] = 1,
    ACTIONS(141), 1,
      aux_sym_value_token2,
  [482] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [486] = 1,
    ACTIONS(145), 1,
      aux_sym_delimiter_token1,
  [490] = 1,
    ACTIONS(147), 1,
      aux_sym_pair_token1,
  [494] = 1,
    ACTIONS(149), 1,
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
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 293,
  [SMALL_STATE(23)] = 300,
  [SMALL_STATE(24)] = 311,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 333,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 351,
  [SMALL_STATE(29)] = 358,
  [SMALL_STATE(30)] = 364,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 376,
  [SMALL_STATE(33)] = 382,
  [SMALL_STATE(34)] = 388,
  [SMALL_STATE(35)] = 394,
  [SMALL_STATE(36)] = 400,
  [SMALL_STATE(37)] = 406,
  [SMALL_STATE(38)] = 411,
  [SMALL_STATE(39)] = 416,
  [SMALL_STATE(40)] = 421,
  [SMALL_STATE(41)] = 426,
  [SMALL_STATE(42)] = 431,
  [SMALL_STATE(43)] = 436,
  [SMALL_STATE(44)] = 443,
  [SMALL_STATE(45)] = 450,
  [SMALL_STATE(46)] = 455,
  [SMALL_STATE(47)] = 462,
  [SMALL_STATE(48)] = 466,
  [SMALL_STATE(49)] = 470,
  [SMALL_STATE(50)] = 474,
  [SMALL_STATE(51)] = 478,
  [SMALL_STATE(52)] = 482,
  [SMALL_STATE(53)] = 486,
  [SMALL_STATE(54)] = 490,
  [SMALL_STATE(55)] = 494,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(11),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(26),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(48),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(53),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(55),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
