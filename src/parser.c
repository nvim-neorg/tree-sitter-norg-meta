#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_CR = 2,
  anon_sym_CR_LF = 3,
  anon_sym_ = 4,
  sym__whitespace = 5,
  sym_key = 6,
  sym_number = 7,
  anon_sym_LBRACK = 8,
  aux_sym_array_token1 = 9,
  anon_sym_RBRACK = 10,
  sym_string = 11,
  anon_sym_LBRACE = 12,
  aux_sym_object_token1 = 13,
  anon_sym_RBRACE = 14,
  anon_sym_COLON = 15,
  aux_sym_delimiter_token1 = 16,
  aux_sym_delimiter_token2 = 17,
  sym_metadata = 18,
  sym_array = 19,
  sym_object = 20,
  sym_value = 21,
  sym_pair = 22,
  sym_delimiter = 23,
  aux_sym_metadata_repeat1 = 24,
  aux_sym_metadata_repeat2 = 25,
  aux_sym_metadata_repeat3 = 26,
  aux_sym_array_repeat1 = 27,
  aux_sym_object_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [anon_sym_] = " ",
  [sym__whitespace] = "_whitespace",
  [sym_key] = "key",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [aux_sym_array_token1] = "array_token1",
  [anon_sym_RBRACK] = "]",
  [sym_string] = "string",
  [anon_sym_LBRACE] = "{",
  [aux_sym_object_token1] = "object_token1",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [aux_sym_delimiter_token1] = "delimiter_token1",
  [aux_sym_delimiter_token2] = "delimiter_token2",
  [sym_metadata] = "metadata",
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_value] = "value",
  [sym_pair] = "pair",
  [sym_delimiter] = "delimiter",
  [aux_sym_metadata_repeat1] = "metadata_repeat1",
  [aux_sym_metadata_repeat2] = "metadata_repeat2",
  [aux_sym_metadata_repeat3] = "metadata_repeat3",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [anon_sym_] = anon_sym_,
  [sym__whitespace] = sym__whitespace,
  [sym_key] = sym_key,
  [sym_number] = sym_number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_array_token1] = aux_sym_array_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_string] = sym_string,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [aux_sym_object_token1] = aux_sym_object_token1,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_delimiter_token1] = aux_sym_delimiter_token1,
  [aux_sym_delimiter_token2] = aux_sym_delimiter_token2,
  [sym_metadata] = sym_metadata,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_value] = sym_value,
  [sym_pair] = sym_pair,
  [sym_delimiter] = sym_delimiter,
  [aux_sym_metadata_repeat1] = aux_sym_metadata_repeat1,
  [aux_sym_metadata_repeat2] = aux_sym_metadata_repeat2,
  [aux_sym_metadata_repeat3] = aux_sym_metadata_repeat3,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_object_token1] = {
    .visible = false,
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
  [aux_sym_delimiter_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_delimiter_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_metadata] = {
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
  [sym_value] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [aux_sym_metadata_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_repeat3] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 7,
  [14] = 14,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 41,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 55,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\r') ADVANCE(33);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == ':') ADVANCE(37);
      if (lookahead == '[') ADVANCE(25);
      if (lookahead == ']') ADVANCE(25);
      if (lookahead == '{') ADVANCE(25);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(24);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(19);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == 0) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(22);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(16);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(17);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '{') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '}') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '{') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == 0) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == '\r') ADVANCE(15);
      if (lookahead == '-') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_key);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 160 ||
          lookahead == 5760 ||
          (8192 <= lookahead && lookahead <= 8202) ||
          lookahead == 8239 ||
          lookahead == 8287 ||
          lookahead == 12288) ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ':') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_array_token1);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_array_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_object_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_delimiter_token1);
      if (lookahead == '-') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_delimiter_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 4},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [anon_sym_] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [aux_sym_object_token1] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_delimiter_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_metadata] = STATE(54),
    [sym_pair] = STATE(40),
    [sym_delimiter] = STATE(40),
    [aux_sym_metadata_repeat1] = STATE(3),
    [aux_sym_metadata_repeat3] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LF] = ACTIONS(5),
    [anon_sym_CR] = ACTIONS(7),
    [anon_sym_CR_LF] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(9),
    [sym_key] = ACTIONS(11),
    [aux_sym_delimiter_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(17), 1,
      anon_sym_CR,
    ACTIONS(19), 1,
      sym__whitespace,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(7), 1,
      aux_sym_metadata_repeat1,
    STATE(53), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    STATE(22), 2,
      sym_array,
      sym_object,
    ACTIONS(15), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACK,
  [32] = 9,
    ACTIONS(9), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_key,
    ACTIONS(13), 1,
      aux_sym_delimiter_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_CR,
    STATE(16), 1,
      aux_sym_metadata_repeat1,
    STATE(18), 1,
      aux_sym_metadata_repeat3,
    ACTIONS(29), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(40), 2,
      sym_pair,
      sym_delimiter,
  [62] = 7,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(35), 1,
      anon_sym_CR,
    STATE(47), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    STATE(22), 2,
      sym_array,
      sym_object,
    ACTIONS(33), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [88] = 7,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      anon_sym_CR,
    STATE(49), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    STATE(22), 2,
      sym_array,
      sym_object,
    ACTIONS(37), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACK,
  [114] = 7,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    STATE(47), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    ACTIONS(33), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(35), 2,
      anon_sym_CR,
      anon_sym_,
    STATE(22), 2,
      sym_array,
      sym_object,
  [140] = 5,
    ACTIONS(44), 1,
      anon_sym_CR,
    STATE(7), 1,
      aux_sym_metadata_repeat1,
    ACTIONS(41), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(49), 2,
      sym_number,
      sym_string,
    ACTIONS(47), 4,
      sym__whitespace,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [161] = 7,
    ACTIONS(53), 1,
      anon_sym_CR,
    ACTIONS(55), 1,
      sym__whitespace,
    ACTIONS(57), 1,
      sym_key,
    ACTIONS(59), 1,
      aux_sym_delimiter_token1,
    STATE(13), 1,
      aux_sym_metadata_repeat1,
    STATE(52), 2,
      sym_pair,
      sym_delimiter,
    ACTIONS(51), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [186] = 7,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(61), 1,
      aux_sym_array_token1,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    STATE(22), 2,
      sym_array,
      sym_object,
  [210] = 5,
    STATE(12), 1,
      aux_sym_metadata_repeat2,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      aux_sym_delimiter_token1,
    ACTIONS(67), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(69), 2,
      anon_sym_CR,
      anon_sym_,
    ACTIONS(71), 2,
      sym__whitespace,
      sym_key,
  [230] = 5,
    STATE(12), 1,
      aux_sym_metadata_repeat2,
    ACTIONS(67), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(69), 2,
      anon_sym_CR,
      anon_sym_,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      aux_sym_delimiter_token1,
    ACTIONS(75), 2,
      sym__whitespace,
      sym_key,
  [250] = 5,
    STATE(12), 1,
      aux_sym_metadata_repeat2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      aux_sym_delimiter_token1,
    ACTIONS(79), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(82), 2,
      anon_sym_CR,
      anon_sym_,
    ACTIONS(85), 2,
      sym__whitespace,
      sym_key,
  [270] = 5,
    ACTIONS(90), 1,
      anon_sym_CR,
    STATE(13), 1,
      aux_sym_metadata_repeat1,
    ACTIONS(47), 2,
      anon_sym_RBRACE,
      aux_sym_delimiter_token1,
    ACTIONS(49), 2,
      sym__whitespace,
      sym_key,
    ACTIONS(87), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [289] = 5,
    ACTIONS(57), 1,
      sym_key,
    ACTIONS(59), 1,
      aux_sym_delimiter_token1,
    ACTIONS(95), 1,
      anon_sym_CR,
    STATE(50), 2,
      sym_pair,
      sym_delimiter,
    ACTIONS(93), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [308] = 6,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      sym_value,
    ACTIONS(21), 2,
      sym_number,
      sym_string,
    STATE(22), 2,
      sym_array,
      sym_object,
  [329] = 5,
    ACTIONS(102), 1,
      anon_sym_CR,
    STATE(16), 1,
      aux_sym_metadata_repeat1,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      aux_sym_delimiter_token1,
    ACTIONS(49), 2,
      sym__whitespace,
      sym_key,
    ACTIONS(99), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [348] = 6,
    ACTIONS(9), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_key,
    ACTIONS(13), 1,
      aux_sym_delimiter_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_metadata_repeat3,
    STATE(40), 2,
      sym_pair,
      sym_delimiter,
  [368] = 6,
    ACTIONS(9), 1,
      sym__whitespace,
    ACTIONS(11), 1,
      sym_key,
    ACTIONS(13), 1,
      aux_sym_delimiter_token1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      aux_sym_metadata_repeat3,
    STATE(40), 2,
      sym_pair,
      sym_delimiter,
  [388] = 6,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym__whitespace,
    ACTIONS(110), 1,
      sym_key,
    ACTIONS(113), 1,
      aux_sym_delimiter_token1,
    STATE(19), 1,
      aux_sym_metadata_repeat3,
    STATE(40), 2,
      sym_pair,
      sym_delimiter,
  [408] = 5,
    ACTIONS(118), 1,
      anon_sym_CR,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_metadata_repeat1,
    STATE(36), 1,
      aux_sym_object_repeat1,
    ACTIONS(116), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [425] = 2,
    ACTIONS(124), 1,
      anon_sym_CR,
    ACTIONS(122), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [436] = 2,
    ACTIONS(128), 1,
      anon_sym_CR,
    ACTIONS(126), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [447] = 5,
    ACTIONS(57), 1,
      sym_key,
    ACTIONS(59), 1,
      aux_sym_delimiter_token1,
    ACTIONS(130), 1,
      aux_sym_object_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACE,
    STATE(20), 2,
      sym_pair,
      sym_delimiter,
  [464] = 2,
    ACTIONS(136), 1,
      anon_sym_CR,
    ACTIONS(134), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [475] = 2,
    ACTIONS(140), 1,
      anon_sym_CR,
    ACTIONS(138), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [486] = 5,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(144), 1,
      anon_sym_CR,
    STATE(2), 1,
      aux_sym_metadata_repeat1,
    STATE(32), 1,
      aux_sym_array_repeat1,
    ACTIONS(142), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [503] = 5,
    ACTIONS(93), 1,
      anon_sym_RBRACE,
    ACTIONS(149), 1,
      anon_sym_CR,
    STATE(8), 1,
      aux_sym_metadata_repeat1,
    STATE(27), 1,
      aux_sym_object_repeat1,
    ACTIONS(146), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [520] = 2,
    ACTIONS(154), 1,
      anon_sym_CR,
    ACTIONS(152), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [531] = 2,
    ACTIONS(158), 1,
      anon_sym_CR,
    ACTIONS(156), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [542] = 5,
    ACTIONS(144), 1,
      anon_sym_CR,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_metadata_repeat1,
    STATE(38), 1,
      aux_sym_array_repeat1,
    ACTIONS(142), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [559] = 5,
    ACTIONS(118), 1,
      anon_sym_CR,
    ACTIONS(162), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_metadata_repeat1,
    STATE(27), 1,
      aux_sym_object_repeat1,
    ACTIONS(116), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [576] = 5,
    ACTIONS(144), 1,
      anon_sym_CR,
    ACTIONS(160), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_metadata_repeat1,
    STATE(39), 1,
      aux_sym_array_repeat1,
    ACTIONS(142), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [593] = 2,
    ACTIONS(166), 1,
      anon_sym_CR,
    ACTIONS(164), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [604] = 5,
    ACTIONS(118), 1,
      anon_sym_CR,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_metadata_repeat1,
    STATE(31), 1,
      aux_sym_object_repeat1,
    ACTIONS(116), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [621] = 2,
    ACTIONS(172), 1,
      anon_sym_CR,
    ACTIONS(170), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [632] = 5,
    ACTIONS(118), 1,
      anon_sym_CR,
    ACTIONS(168), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      aux_sym_metadata_repeat1,
    STATE(27), 1,
      aux_sym_object_repeat1,
    ACTIONS(116), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [649] = 2,
    ACTIONS(176), 1,
      anon_sym_CR,
    ACTIONS(174), 5,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
  [660] = 5,
    ACTIONS(144), 1,
      anon_sym_CR,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    STATE(2), 1,
      aux_sym_metadata_repeat1,
    STATE(39), 1,
      aux_sym_array_repeat1,
    ACTIONS(142), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [677] = 5,
    ACTIONS(37), 1,
      anon_sym_RBRACK,
    ACTIONS(183), 1,
      anon_sym_CR,
    STATE(2), 1,
      aux_sym_metadata_repeat1,
    STATE(39), 1,
      aux_sym_array_repeat1,
    ACTIONS(180), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
  [694] = 3,
    ACTIONS(188), 1,
      anon_sym_CR,
    STATE(10), 1,
      aux_sym_metadata_repeat2,
    ACTIONS(186), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [706] = 3,
    ACTIONS(192), 1,
      anon_sym_CR,
    ACTIONS(194), 1,
      sym__whitespace,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [718] = 3,
    ACTIONS(192), 1,
      anon_sym_CR,
    ACTIONS(196), 1,
      sym__whitespace,
    ACTIONS(190), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [730] = 3,
    ACTIONS(202), 1,
      aux_sym_delimiter_token2,
    ACTIONS(198), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(200), 2,
      anon_sym_CR,
      anon_sym_,
  [742] = 3,
    ACTIONS(206), 1,
      anon_sym_CR,
    STATE(11), 1,
      aux_sym_metadata_repeat2,
    ACTIONS(204), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
  [754] = 3,
    ACTIONS(200), 1,
      anon_sym_CR,
    ACTIONS(202), 1,
      aux_sym_delimiter_token2,
    ACTIONS(198), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [766] = 4,
    ACTIONS(57), 1,
      sym_key,
    ACTIONS(59), 1,
      aux_sym_delimiter_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(34), 2,
      sym_pair,
      sym_delimiter,
  [780] = 2,
    ACTIONS(210), 1,
      anon_sym_CR,
    ACTIONS(208), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACE,
  [790] = 2,
    ACTIONS(214), 1,
      anon_sym_CR,
    ACTIONS(212), 4,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_,
      anon_sym_RBRACE,
  [800] = 2,
    ACTIONS(218), 1,
      anon_sym_CR,
    ACTIONS(216), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACK,
  [809] = 2,
    ACTIONS(222), 1,
      anon_sym_CR,
    ACTIONS(220), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [818] = 3,
    ACTIONS(11), 1,
      sym_key,
    ACTIONS(13), 1,
      aux_sym_delimiter_token1,
    STATE(44), 2,
      sym_pair,
      sym_delimiter,
  [829] = 2,
    ACTIONS(95), 1,
      anon_sym_CR,
    ACTIONS(93), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACE,
  [838] = 2,
    ACTIONS(39), 1,
      anon_sym_CR,
    ACTIONS(37), 3,
      anon_sym_LF,
      anon_sym_CR_LF,
      anon_sym_RBRACK,
  [847] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [851] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [855] = 1,
    ACTIONS(228), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 140,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 186,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 230,
  [SMALL_STATE(12)] = 250,
  [SMALL_STATE(13)] = 270,
  [SMALL_STATE(14)] = 289,
  [SMALL_STATE(15)] = 308,
  [SMALL_STATE(16)] = 329,
  [SMALL_STATE(17)] = 348,
  [SMALL_STATE(18)] = 368,
  [SMALL_STATE(19)] = 388,
  [SMALL_STATE(20)] = 408,
  [SMALL_STATE(21)] = 425,
  [SMALL_STATE(22)] = 436,
  [SMALL_STATE(23)] = 447,
  [SMALL_STATE(24)] = 464,
  [SMALL_STATE(25)] = 475,
  [SMALL_STATE(26)] = 486,
  [SMALL_STATE(27)] = 503,
  [SMALL_STATE(28)] = 520,
  [SMALL_STATE(29)] = 531,
  [SMALL_STATE(30)] = 542,
  [SMALL_STATE(31)] = 559,
  [SMALL_STATE(32)] = 576,
  [SMALL_STATE(33)] = 593,
  [SMALL_STATE(34)] = 604,
  [SMALL_STATE(35)] = 621,
  [SMALL_STATE(36)] = 632,
  [SMALL_STATE(37)] = 649,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 677,
  [SMALL_STATE(40)] = 694,
  [SMALL_STATE(41)] = 706,
  [SMALL_STATE(42)] = 718,
  [SMALL_STATE(43)] = 730,
  [SMALL_STATE(44)] = 742,
  [SMALL_STATE(45)] = 754,
  [SMALL_STATE(46)] = 766,
  [SMALL_STATE(47)] = 780,
  [SMALL_STATE(48)] = 790,
  [SMALL_STATE(49)] = 800,
  [SMALL_STATE(50)] = 809,
  [SMALL_STATE(51)] = 818,
  [SMALL_STATE(52)] = 829,
  [SMALL_STATE(53)] = 838,
  [SMALL_STATE(54)] = 847,
  [SMALL_STATE(55)] = 851,
  [SMALL_STATE(56)] = 855,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat3, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat3, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat3, 3),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat3, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_metadata_repeat2, 2),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat2, 2), SHIFT_REPEAT(12),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat2, 2), SHIFT_REPEAT(12),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_repeat2, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(13),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(13),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(16),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat1, 2), SHIFT_REPEAT(16),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat3, 2), SHIFT_REPEAT(51),
  [110] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_repeat3, 2), SHIFT_REPEAT(55),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_metadata_repeat3, 2), SHIFT_REPEAT(43),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(8),
  [149] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(8),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 5),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(2),
  [183] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(2),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 2),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 4),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pair, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_delimiter, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_delimiter, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_object_repeat1, 3),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
