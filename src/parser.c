#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  aux_sym_pair_token1 = 1,
  anon_sym_LF = 2,
  sym_key = 3,
  anon_sym_LBRACE = 4,
  anon_sym_RBRACE = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  sym__delimiter = 8,
  aux_sym_named_delimiter_token1 = 9,
  aux_sym_named_delimiter_token2 = 10,
  aux_sym_named_delimiter_token3 = 11,
  sym__separator = 12,
  sym__text_till_eol = 13,
  anon_sym_TILDE_LF = 14,
  sym_metadata = 15,
  sym_pair = 16,
  sym__key = 17,
  sym_value = 18,
  sym_object = 19,
  sym_array = 20,
  sym_delimiter = 21,
  sym_named_delimiter = 22,
  sym__text_with_trailing_modifier = 23,
  aux_sym_metadata_repeat1 = 24,
  aux_sym_value_repeat1 = 25,
  aux_sym_object_repeat1 = 26,
  aux_sym_array_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_pair_token1] = "pair_token1",
  [anon_sym_LF] = "\n",
  [sym_key] = "key",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__delimiter] = "_delimiter",
  [aux_sym_named_delimiter_token1] = "named_delimiter_token1",
  [aux_sym_named_delimiter_token2] = "named_delimiter_token2",
  [aux_sym_named_delimiter_token3] = "named_delimiter_token3",
  [sym__separator] = "_separator",
  [sym__text_till_eol] = "_text_till_eol",
  [anon_sym_TILDE_LF] = "~\n",
  [sym_metadata] = "metadata",
  [sym_pair] = "pair",
  [sym__key] = "_key",
  [sym_value] = "value",
  [sym_object] = "object",
  [sym_array] = "array",
  [sym_delimiter] = "delimiter",
  [sym_named_delimiter] = "named_delimiter",
  [sym__text_with_trailing_modifier] = "_text_with_trailing_modifier",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_pair_token1] = aux_sym_pair_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_key] = sym_key,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym__delimiter] = sym__delimiter,
  [aux_sym_named_delimiter_token1] = aux_sym_named_delimiter_token1,
  [aux_sym_named_delimiter_token2] = aux_sym_named_delimiter_token2,
  [aux_sym_named_delimiter_token3] = aux_sym_named_delimiter_token3,
  [sym__separator] = sym__separator,
  [sym__text_till_eol] = sym__text_till_eol,
  [anon_sym_TILDE_LF] = anon_sym_TILDE_LF,
  [sym_metadata] = sym_metadata,
  [sym_pair] = sym_pair,
  [sym__key] = sym__key,
  [sym_value] = sym_value,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [sym_delimiter] = sym_delimiter,
  [sym_named_delimiter] = sym_named_delimiter,
  [sym__text_with_trailing_modifier] = sym__text_with_trailing_modifier,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_pair_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
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
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__key] = {
    .visible = false,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
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
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_item = 1,
  field_title = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_item] = "item",
  [field_title] = "title",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_title, 1},
  [1] =
    {field_item, 0},
  [2] =
    {field_item, 1, .inherited = true},
  [3] =
    {field_item, 0, .inherited = true},
    {field_item, 1, .inherited = true},
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
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(39);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '{') ADVANCE(24);
      if (lookahead == '}') ADVANCE(26);
      if (lookahead == '~') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(44);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '~') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 12:
      if (lookahead == '}') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(37);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '~') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_pair_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(23);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__delimiter);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__delimiter);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '-') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token2);
      if (lookahead != 0 &&
          lookahead != '-') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_named_delimiter_token3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__separator);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == ']') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__text_till_eol);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '~') ADVANCE(43);
      END_STATE();
    case 44:
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
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 12},
  [15] = {.lex_state = 12},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 15},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 10},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 38},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym__delimiter] = ACTIONS(1),
    [aux_sym_named_delimiter_token1] = ACTIONS(1),
    [sym__separator] = ACTIONS(1),
    [anon_sym_TILDE_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(46),
    [sym_pair] = STATE(2),
    [sym__key] = STATE(45),
    [sym_delimiter] = STATE(2),
    [sym_named_delimiter] = STATE(24),
    [aux_sym_metadata_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_key] = ACTIONS(5),
    [sym__delimiter] = ACTIONS(7),
    [aux_sym_named_delimiter_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(7), 1,
      sym__delimiter,
    ACTIONS(9), 1,
      aux_sym_named_delimiter_token1,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(24), 1,
      sym_named_delimiter,
    STATE(45), 1,
      sym__key,
    STATE(4), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [24] = 6,
    ACTIONS(13), 1,
      anon_sym_LF,
    ACTIONS(15), 1,
      anon_sym_LBRACE,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      sym__text_till_eol,
    STATE(25), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
    STATE(21), 3,
      sym_value,
      sym_object,
      sym_array,
  [46] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_key,
    ACTIONS(26), 1,
      sym__delimiter,
    ACTIONS(29), 1,
      aux_sym_named_delimiter_token1,
    STATE(24), 1,
      sym_named_delimiter,
    STATE(45), 1,
      sym__key,
    STATE(4), 3,
      sym_pair,
      sym_delimiter,
      aux_sym_metadata_repeat1,
  [70] = 6,
    ACTIONS(32), 1,
      anon_sym_LF,
    ACTIONS(34), 1,
      anon_sym_LBRACE,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      sym__text_till_eol,
    STATE(27), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
    STATE(34), 3,
      sym_value,
      sym_object,
      sym_array,
  [92] = 5,
    ACTIONS(40), 1,
      anon_sym_RBRACK,
    ACTIONS(42), 1,
      sym__text_till_eol,
    STATE(7), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym_value,
    STATE(29), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [109] = 5,
    ACTIONS(44), 1,
      anon_sym_RBRACK,
    ACTIONS(46), 1,
      sym__text_till_eol,
    STATE(7), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym_value,
    STATE(29), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [126] = 5,
    ACTIONS(42), 1,
      sym__text_till_eol,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym_value,
    STATE(29), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [143] = 5,
    ACTIONS(42), 1,
      sym__text_till_eol,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    STATE(8), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym_value,
    STATE(29), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [160] = 5,
    ACTIONS(42), 1,
      sym__text_till_eol,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    STATE(6), 1,
      aux_sym_array_repeat1,
    STATE(33), 1,
      sym_value,
    STATE(29), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [177] = 4,
    ACTIONS(55), 1,
      sym_key,
    ACTIONS(58), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym__key,
    STATE(11), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [191] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(60), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym__key,
    STATE(11), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [205] = 3,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 1,
      anon_sym_TILDE_LF,
    ACTIONS(64), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [217] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym__key,
    STATE(12), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [231] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym__key,
    STATE(17), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [245] = 3,
    ACTIONS(66), 1,
      anon_sym_TILDE_LF,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [257] = 4,
    ACTIONS(5), 1,
      sym_key,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(48), 1,
      sym__key,
    STATE(11), 2,
      sym_pair,
      aux_sym_object_repeat1,
  [271] = 2,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [280] = 2,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [289] = 2,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [298] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [307] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [316] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [325] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 3,
      sym_key,
      sym__delimiter,
      aux_sym_named_delimiter_token1,
  [334] = 2,
    ACTIONS(106), 1,
      sym__text_till_eol,
    STATE(28), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [342] = 2,
    ACTIONS(66), 1,
      anon_sym_TILDE_LF,
    ACTIONS(64), 2,
      sym_key,
      anon_sym_RBRACE,
  [350] = 2,
    ACTIONS(108), 1,
      sym__text_till_eol,
    STATE(28), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [358] = 2,
    ACTIONS(110), 1,
      sym__text_till_eol,
    STATE(28), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [366] = 2,
    ACTIONS(113), 1,
      sym__text_till_eol,
    STATE(28), 2,
      sym__text_with_trailing_modifier,
      aux_sym_value_repeat1,
  [374] = 2,
    ACTIONS(115), 1,
      anon_sym_TILDE_LF,
    ACTIONS(74), 2,
      anon_sym_RBRACK,
      sym__text_till_eol,
  [382] = 2,
    ACTIONS(115), 1,
      anon_sym_TILDE_LF,
    ACTIONS(64), 2,
      anon_sym_RBRACK,
      sym__text_till_eol,
  [390] = 2,
    ACTIONS(66), 1,
      anon_sym_TILDE_LF,
    ACTIONS(74), 2,
      sym_key,
      anon_sym_RBRACE,
  [398] = 1,
    ACTIONS(117), 2,
      anon_sym_RBRACK,
      sym__text_till_eol,
  [403] = 1,
    ACTIONS(92), 2,
      sym_key,
      anon_sym_RBRACE,
  [408] = 1,
    ACTIONS(84), 2,
      sym_key,
      anon_sym_RBRACE,
  [413] = 1,
    ACTIONS(88), 2,
      sym_key,
      anon_sym_RBRACE,
  [418] = 1,
    ACTIONS(96), 2,
      sym_key,
      anon_sym_RBRACE,
  [423] = 1,
    ACTIONS(100), 2,
      sym_key,
      anon_sym_RBRACE,
  [428] = 1,
    ACTIONS(119), 1,
      sym__delimiter,
  [432] = 1,
    ACTIONS(66), 1,
      anon_sym_TILDE_LF,
  [436] = 1,
    ACTIONS(121), 1,
      sym__separator,
  [440] = 1,
    ACTIONS(123), 1,
      sym__text_till_eol,
  [444] = 1,
    ACTIONS(125), 1,
      aux_sym_named_delimiter_token3,
  [448] = 1,
    ACTIONS(127), 1,
      aux_sym_pair_token1,
  [452] = 1,
    ACTIONS(129), 1,
      aux_sym_pair_token1,
  [456] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [460] = 1,
    ACTIONS(133), 1,
      aux_sym_named_delimiter_token2,
  [464] = 1,
    ACTIONS(135), 1,
      aux_sym_pair_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 126,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 191,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 271,
  [SMALL_STATE(19)] = 280,
  [SMALL_STATE(20)] = 289,
  [SMALL_STATE(21)] = 298,
  [SMALL_STATE(22)] = 307,
  [SMALL_STATE(23)] = 316,
  [SMALL_STATE(24)] = 325,
  [SMALL_STATE(25)] = 334,
  [SMALL_STATE(26)] = 342,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 358,
  [SMALL_STATE(29)] = 366,
  [SMALL_STATE(30)] = 374,
  [SMALL_STATE(31)] = 382,
  [SMALL_STATE(32)] = 390,
  [SMALL_STATE(33)] = 398,
  [SMALL_STATE(34)] = 403,
  [SMALL_STATE(35)] = 408,
  [SMALL_STATE(36)] = 413,
  [SMALL_STATE(37)] = 418,
  [SMALL_STATE(38)] = 423,
  [SMALL_STATE(39)] = 428,
  [SMALL_STATE(40)] = 432,
  [SMALL_STATE(41)] = 436,
  [SMALL_STATE(42)] = 440,
  [SMALL_STATE(43)] = 444,
  [SMALL_STATE(44)] = 448,
  [SMALL_STATE(45)] = 452,
  [SMALL_STATE(46)] = 456,
  [SMALL_STATE(47)] = 460,
  [SMALL_STATE(48)] = 464,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(41),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(24),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(47),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 4),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, .production_id = 4), SHIFT_REPEAT(30),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_delimiter, 4, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_delimiter, 4, .production_id = 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, .production_id = 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(40),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1, .production_id = 2),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__text_with_trailing_modifier, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__key, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
