#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 58
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 1
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  [4] = 4,
  [5] = 2,
  [6] = 2,
  [7] = 3,
  [8] = 3,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 9,
  [13] = 11,
  [14] = 14,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 24,
  [28] = 24,
  [29] = 16,
  [30] = 18,
  [31] = 21,
  [32] = 22,
  [33] = 23,
  [34] = 25,
  [35] = 35,
  [36] = 22,
  [37] = 35,
  [38] = 38,
  [39] = 16,
  [40] = 18,
  [41] = 21,
  [42] = 42,
  [43] = 23,
  [44] = 25,
  [45] = 42,
  [46] = 46,
  [47] = 46,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 50,
  [54] = 54,
  [55] = 55,
  [56] = 52,
  [57] = 49,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(22);
      END_STATE();
    case 4:
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '~') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == '{') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 8:
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (lookahead != 0 &&
          lookahead != '-' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (lookahead != 0) ADVANCE(17);
      END_STATE();
    case 10:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 11:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 12:
      if (eof) ADVANCE(15);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '[') ADVANCE(24);
      if (lookahead == ']') ADVANCE(26);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(30);
      if (lookahead == '~') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (eof) ADVANCE(15);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '~') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_value_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '~') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_TILDE_LF);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '~') ADVANCE(17);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(16);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == 11) ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 9},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 9},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 33},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 37},
  [56] = {.lex_state = 33},
  [57] = {.lex_state = 0},
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
    [sym_metadata] = STATE(54),
    [sym_pair] = STATE(14),
    [sym_delimiter] = STATE(14),
    [aux_sym_metadata_repeat1] = STATE(14),
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
    STATE(7), 4,
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
    STATE(4), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [38] = 5,
    ACTIONS(19), 1,
      aux_sym_value_token1,
    ACTIONS(22), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(27), 1,
      anon_sym_LBRACE,
    STATE(4), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [57] = 5,
    ACTIONS(9), 1,
      aux_sym_value_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(30), 1,
      anon_sym_RBRACK,
    STATE(8), 4,
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
    STATE(3), 4,
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
    STATE(4), 4,
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
    STATE(4), 4,
      sym_value,
      sym_array,
      sym_object,
      aux_sym_array_repeat1,
  [133] = 3,
    ACTIONS(40), 1,
      anon_sym_TILDE,
    ACTIONS(42), 1,
      anon_sym_TILDE_LF,
    ACTIONS(38), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [146] = 4,
    ACTIONS(44), 1,
      ts_builtin_sym_end,
    ACTIONS(46), 1,
      sym_key,
    ACTIONS(49), 1,
      anon_sym_DASH,
    STATE(10), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [161] = 4,
    ACTIONS(52), 1,
      aux_sym_value_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_LBRACE,
    STATE(35), 3,
      sym_value,
      sym_array,
      sym_object,
  [176] = 4,
    ACTIONS(60), 1,
      anon_sym_TILDE,
    ACTIONS(62), 1,
      anon_sym_TILDE_LF,
    ACTIONS(38), 2,
      sym_key,
      anon_sym_DASH,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [191] = 4,
    ACTIONS(64), 1,
      aux_sym_value_token1,
    ACTIONS(66), 1,
      anon_sym_LBRACK,
    ACTIONS(68), 1,
      anon_sym_LBRACE,
    STATE(37), 3,
      sym_value,
      sym_array,
      sym_object,
  [206] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(7), 1,
      anon_sym_DASH,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    STATE(10), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [221] = 4,
    ACTIONS(58), 1,
      anon_sym_LF,
    ACTIONS(72), 1,
      anon_sym_TILDE,
    ACTIONS(74), 1,
      anon_sym_TILDE_LF,
    ACTIONS(38), 2,
      sym_key,
      anon_sym_RBRACE,
  [235] = 2,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(78), 2,
      sym_key,
      anon_sym_DASH,
  [244] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [255] = 2,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(86), 2,
      sym_key,
      anon_sym_DASH,
  [264] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [275] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(90), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [286] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(94), 2,
      sym_key,
      anon_sym_DASH,
  [295] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(98), 2,
      sym_key,
      anon_sym_DASH,
  [304] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(102), 2,
      sym_key,
      anon_sym_DASH,
  [313] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(19), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [324] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
    ACTIONS(108), 2,
      sym_key,
      anon_sym_DASH,
  [333] = 3,
    ACTIONS(110), 1,
      sym_key,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(26), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [344] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    STATE(17), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [355] = 3,
    ACTIONS(80), 1,
      sym_key,
    ACTIONS(117), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [366] = 1,
    ACTIONS(78), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [373] = 1,
    ACTIONS(86), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [380] = 1,
    ACTIONS(94), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [387] = 1,
    ACTIONS(98), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [394] = 1,
    ACTIONS(102), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [401] = 1,
    ACTIONS(108), 4,
      aux_sym_value_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [408] = 3,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      anon_sym_LF,
    ACTIONS(121), 2,
      sym_key,
      anon_sym_DASH,
  [419] = 2,
    ACTIONS(96), 1,
      anon_sym_LF,
    ACTIONS(98), 2,
      sym_key,
      anon_sym_RBRACE,
  [427] = 2,
    ACTIONS(125), 1,
      anon_sym_LF,
    ACTIONS(121), 2,
      sym_key,
      anon_sym_RBRACE,
  [435] = 1,
    ACTIONS(127), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [441] = 2,
    ACTIONS(76), 1,
      anon_sym_LF,
    ACTIONS(78), 2,
      sym_key,
      anon_sym_RBRACE,
  [449] = 2,
    ACTIONS(84), 1,
      anon_sym_LF,
    ACTIONS(86), 2,
      sym_key,
      anon_sym_RBRACE,
  [457] = 2,
    ACTIONS(92), 1,
      anon_sym_LF,
    ACTIONS(94), 2,
      sym_key,
      anon_sym_RBRACE,
  [465] = 1,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      sym_key,
      anon_sym_DASH,
  [471] = 2,
    ACTIONS(100), 1,
      anon_sym_LF,
    ACTIONS(102), 2,
      sym_key,
      anon_sym_RBRACE,
  [479] = 2,
    ACTIONS(106), 1,
      anon_sym_LF,
    ACTIONS(108), 2,
      sym_key,
      anon_sym_RBRACE,
  [487] = 1,
    ACTIONS(131), 2,
      sym_key,
      anon_sym_RBRACE,
  [492] = 2,
    ACTIONS(133), 1,
      aux_sym_value_token1,
    STATE(36), 1,
      sym_value,
  [499] = 2,
    ACTIONS(135), 1,
      aux_sym_value_token1,
    STATE(22), 1,
      sym_value,
  [506] = 2,
    ACTIONS(137), 1,
      aux_sym_value_token1,
    STATE(32), 1,
      sym_value,
  [513] = 1,
    ACTIONS(139), 1,
      anon_sym_COLON,
  [517] = 1,
    ACTIONS(141), 1,
      aux_sym_value_token2,
  [521] = 1,
    ACTIONS(143), 1,
      aux_sym_value_token2,
  [525] = 1,
    ACTIONS(145), 1,
      aux_sym_pair_token1,
  [529] = 1,
    ACTIONS(147), 1,
      aux_sym_value_token2,
  [533] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [537] = 1,
    ACTIONS(151), 1,
      aux_sym_delimiter_token1,
  [541] = 1,
    ACTIONS(153), 1,
      aux_sym_pair_token1,
  [545] = 1,
    ACTIONS(155), 1,
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
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 221,
  [SMALL_STATE(16)] = 235,
  [SMALL_STATE(17)] = 244,
  [SMALL_STATE(18)] = 255,
  [SMALL_STATE(19)] = 264,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 286,
  [SMALL_STATE(22)] = 295,
  [SMALL_STATE(23)] = 304,
  [SMALL_STATE(24)] = 313,
  [SMALL_STATE(25)] = 324,
  [SMALL_STATE(26)] = 333,
  [SMALL_STATE(27)] = 344,
  [SMALL_STATE(28)] = 355,
  [SMALL_STATE(29)] = 366,
  [SMALL_STATE(30)] = 373,
  [SMALL_STATE(31)] = 380,
  [SMALL_STATE(32)] = 387,
  [SMALL_STATE(33)] = 394,
  [SMALL_STATE(34)] = 401,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 419,
  [SMALL_STATE(37)] = 427,
  [SMALL_STATE(38)] = 435,
  [SMALL_STATE(39)] = 441,
  [SMALL_STATE(40)] = 449,
  [SMALL_STATE(41)] = 457,
  [SMALL_STATE(42)] = 465,
  [SMALL_STATE(43)] = 471,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 487,
  [SMALL_STATE(46)] = 492,
  [SMALL_STATE(47)] = 499,
  [SMALL_STATE(48)] = 506,
  [SMALL_STATE(49)] = 513,
  [SMALL_STATE(50)] = 517,
  [SMALL_STATE(51)] = 521,
  [SMALL_STATE(52)] = 525,
  [SMALL_STATE(53)] = 529,
  [SMALL_STATE(54)] = 533,
  [SMALL_STATE(55)] = 537,
  [SMALL_STATE(56)] = 541,
  [SMALL_STATE(57)] = 545,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(9),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(5),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(49),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(55),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 3, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(57),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 5),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
