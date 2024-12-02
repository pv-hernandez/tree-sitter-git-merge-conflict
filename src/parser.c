#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 100
#define LARGE_STATE_COUNT 43
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 1
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  aux_sym_start_token1 = 1,
  aux_sym_start_token2 = 2,
  aux_sym_common_sep_token1 = 3,
  aux_sym_sep_token1 = 4,
  aux_sym_end_token1 = 5,
  sym__eol = 6,
  sym__char = 7,
  sym_source_file = 8,
  aux_sym__body = 9,
  sym_conflict = 10,
  sym_start = 11,
  sym_common_sep = 12,
  sym_sep = 13,
  sym_end = 14,
  sym_comment = 15,
  aux_sym_comment_repeat1 = 16,
  alias_sym_hunk = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_start_token1] = "start_token1",
  [aux_sym_start_token2] = "label",
  [aux_sym_common_sep_token1] = "common_sep_token1",
  [aux_sym_sep_token1] = "sep_token1",
  [aux_sym_end_token1] = "end_token1",
  [sym__eol] = "_eol",
  [sym__char] = "_char",
  [sym_source_file] = "source_file",
  [aux_sym__body] = "_body",
  [sym_conflict] = "conflict",
  [sym_start] = "start",
  [sym_common_sep] = "common_sep",
  [sym_sep] = "sep",
  [sym_end] = "end",
  [sym_comment] = "comment",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [alias_sym_hunk] = "hunk",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_start_token1] = aux_sym_start_token1,
  [aux_sym_start_token2] = aux_sym_start_token2,
  [aux_sym_common_sep_token1] = aux_sym_common_sep_token1,
  [aux_sym_sep_token1] = aux_sym_sep_token1,
  [aux_sym_end_token1] = aux_sym_end_token1,
  [sym__eol] = sym__eol,
  [sym__char] = sym__char,
  [sym_source_file] = sym_source_file,
  [aux_sym__body] = aux_sym__body,
  [sym_conflict] = sym_conflict,
  [sym_start] = sym_start,
  [sym_common_sep] = sym_common_sep,
  [sym_sep] = sym_sep,
  [sym_end] = sym_end,
  [sym_comment] = sym_comment,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [alias_sym_hunk] = alias_sym_hunk,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_start_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_common_sep_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_sep_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_end_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__eol] = {
    .visible = false,
    .named = true,
  },
  [sym__char] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__body] = {
    .visible = false,
    .named = false,
  },
  [sym_conflict] = {
    .visible = true,
    .named = true,
  },
  [sym_start] = {
    .visible = true,
    .named = true,
  },
  [sym_common_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_sep] = {
    .visible = true,
    .named = true,
  },
  [sym_end] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_hunk] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_common = 1,
  field_label = 2,
  field_ours = 3,
  field_theirs = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_common] = "common",
  [field_label] = "label",
  [field_ours] = "ours",
  [field_theirs] = "theirs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 1},
  [5] = {.index = 3, .length = 2},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 2},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_label, 1},
  [1] =
    {field_ours, 2},
  [2] =
    {field_theirs, 4},
  [3] =
    {field_ours, 2},
    {field_theirs, 5},
  [5] =
    {field_common, 4},
  [6] =
    {field_theirs, 6},
  [7] =
    {field_common, 5},
    {field_ours, 2},
  [9] =
    {field_ours, 2},
    {field_theirs, 7},
  [11] =
    {field_common, 4},
    {field_theirs, 7},
  [13] =
    {field_common, 5},
    {field_ours, 2},
    {field_theirs, 8},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_comment,
  },
  [3] = {
    [2] = alias_sym_hunk,
  },
  [4] = {
    [4] = alias_sym_hunk,
  },
  [5] = {
    [2] = alias_sym_hunk,
    [5] = alias_sym_hunk,
  },
  [6] = {
    [4] = alias_sym_hunk,
  },
  [7] = {
    [6] = alias_sym_hunk,
  },
  [8] = {
    [2] = alias_sym_hunk,
    [5] = alias_sym_hunk,
  },
  [9] = {
    [2] = alias_sym_hunk,
    [7] = alias_sym_hunk,
  },
  [10] = {
    [4] = alias_sym_hunk,
    [7] = alias_sym_hunk,
  },
  [11] = {
    [2] = alias_sym_hunk,
    [5] = alias_sym_hunk,
    [8] = alias_sym_hunk,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__body, 2,
    aux_sym__body,
    alias_sym_hunk,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 10,
  [22] = 12,
  [23] = 13,
  [24] = 14,
  [25] = 15,
  [26] = 16,
  [27] = 17,
  [28] = 18,
  [29] = 6,
  [30] = 19,
  [31] = 31,
  [32] = 8,
  [33] = 33,
  [34] = 33,
  [35] = 7,
  [36] = 9,
  [37] = 11,
  [38] = 31,
  [39] = 20,
  [40] = 40,
  [41] = 20,
  [42] = 20,
  [43] = 43,
  [44] = 44,
  [45] = 43,
  [46] = 46,
  [47] = 44,
  [48] = 43,
  [49] = 43,
  [50] = 44,
  [51] = 51,
  [52] = 44,
  [53] = 51,
  [54] = 54,
  [55] = 46,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 54,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 74,
  [79] = 79,
  [80] = 74,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 76,
  [85] = 79,
  [86] = 86,
  [87] = 74,
  [88] = 88,
  [89] = 89,
  [90] = 77,
  [91] = 86,
  [92] = 92,
  [93] = 83,
  [94] = 89,
  [95] = 95,
  [96] = 96,
  [97] = 92,
  [98] = 75,
  [99] = 81,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '|') ADVANCE(39);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '<') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '<') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '<') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '>') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '|') ADVANCE(30);
      END_STATE();
    case 20:
      if (lookahead == '|') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '|') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '|') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '|') ADVANCE(22);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '\r') ADVANCE(34);
      if (lookahead != 0) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_start_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_start_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_common_sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_sep_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_end_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__eol);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__eol);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__char);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '<') ADVANCE(8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '>') ADVANCE(18);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__char);
      if (lookahead == '|') ADVANCE(23);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 24},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 24},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 25},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 25},
  [52] = {.lex_state = 24},
  [53] = {.lex_state = 25},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 25},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 26},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 26},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_start_token1] = ACTIONS(1),
    [aux_sym_common_sep_token1] = ACTIONS(1),
    [aux_sym_sep_token1] = ACTIONS(1),
    [aux_sym_end_token1] = ACTIONS(1),
    [sym__eol] = ACTIONS(1),
    [sym__char] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(82),
    [aux_sym__body] = STATE(40),
    [sym_conflict] = STATE(78),
    [sym_start] = STATE(81),
    [sym_comment] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_start_token1] = ACTIONS(5),
    [sym__eol] = ACTIONS(7),
    [sym__char] = ACTIONS(9),
  },
  [2] = {
    [aux_sym__body] = STATE(5),
    [sym_conflict] = STATE(80),
    [sym_start] = STATE(81),
    [sym_common_sep] = STATE(97),
    [sym_sep] = STATE(89),
    [sym_comment] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_common_sep_token1] = ACTIONS(11),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
    [sym__char] = ACTIONS(9),
  },
  [3] = {
    [aux_sym__body] = STATE(4),
    [sym_conflict] = STATE(80),
    [sym_start] = STATE(81),
    [sym_common_sep] = STATE(92),
    [sym_sep] = STATE(94),
    [sym_comment] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_common_sep_token1] = ACTIONS(11),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
    [sym__char] = ACTIONS(9),
  },
  [4] = {
    [aux_sym__body] = STATE(20),
    [sym_conflict] = STATE(80),
    [sym_start] = STATE(81),
    [sym_common_sep] = STATE(75),
    [sym_sep] = STATE(77),
    [sym_comment] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_common_sep_token1] = ACTIONS(11),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
    [sym__char] = ACTIONS(9),
  },
  [5] = {
    [aux_sym__body] = STATE(20),
    [sym_conflict] = STATE(80),
    [sym_start] = STATE(81),
    [sym_common_sep] = STATE(98),
    [sym_sep] = STATE(90),
    [sym_comment] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_common_sep_token1] = ACTIONS(11),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(15),
    [sym__char] = ACTIONS(9),
  },
  [6] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(71),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [7] = {
    [aux_sym__body] = STATE(11),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(76),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [8] = {
    [aux_sym__body] = STATE(12),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(70),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [9] = {
    [aux_sym__body] = STATE(39),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(79),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [10] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(56),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [11] = {
    [aux_sym__body] = STATE(39),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(91),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [12] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(58),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [13] = {
    [aux_sym__body] = STATE(16),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(61),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [14] = {
    [aux_sym__body] = STATE(18),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(64),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [15] = {
    [aux_sym__body] = STATE(6),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(72),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [16] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(68),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [17] = {
    [aux_sym__body] = STATE(19),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(66),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [18] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(67),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [19] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(69),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [20] = {
    [aux_sym__body] = STATE(20),
    [sym_conflict] = STATE(80),
    [sym_start] = STATE(81),
    [sym_comment] = STATE(80),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(23),
    [aux_sym_common_sep_token1] = ACTIONS(26),
    [aux_sym_sep_token1] = ACTIONS(26),
    [sym__eol] = ACTIONS(28),
    [sym__char] = ACTIONS(31),
  },
  [21] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(56),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [22] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(58),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [23] = {
    [aux_sym__body] = STATE(26),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(61),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [24] = {
    [aux_sym__body] = STATE(28),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(64),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [25] = {
    [aux_sym__body] = STATE(29),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(72),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [26] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(68),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [27] = {
    [aux_sym__body] = STATE(30),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(66),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [28] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(67),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [29] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(71),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [30] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(69),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [31] = {
    [aux_sym__body] = STATE(21),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(63),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [32] = {
    [aux_sym__body] = STATE(22),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(70),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(34),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [33] = {
    [aux_sym__body] = STATE(9),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(93),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [34] = {
    [aux_sym__body] = STATE(36),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(83),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [35] = {
    [aux_sym__body] = STATE(37),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(84),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [36] = {
    [aux_sym__body] = STATE(39),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(85),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [37] = {
    [aux_sym__body] = STATE(39),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_sep] = STATE(86),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_sep_token1] = ACTIONS(13),
    [sym__eol] = ACTIONS(21),
    [sym__char] = ACTIONS(9),
  },
  [38] = {
    [aux_sym__body] = STATE(10),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_end] = STATE(63),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(5),
    [aux_sym_end_token1] = ACTIONS(17),
    [sym__eol] = ACTIONS(19),
    [sym__char] = ACTIONS(9),
  },
  [39] = {
    [aux_sym__body] = STATE(39),
    [sym_conflict] = STATE(87),
    [sym_start] = STATE(81),
    [sym_comment] = STATE(87),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(23),
    [aux_sym_sep_token1] = ACTIONS(26),
    [sym__eol] = ACTIONS(36),
    [sym__char] = ACTIONS(31),
  },
  [40] = {
    [aux_sym__body] = STATE(42),
    [sym_conflict] = STATE(62),
    [sym_start] = STATE(99),
    [sym_comment] = STATE(62),
    [aux_sym_comment_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_start_token1] = ACTIONS(5),
    [sym__eol] = ACTIONS(7),
    [sym__char] = ACTIONS(41),
  },
  [41] = {
    [aux_sym__body] = STATE(41),
    [sym_conflict] = STATE(74),
    [sym_start] = STATE(81),
    [sym_comment] = STATE(74),
    [aux_sym_comment_repeat1] = STATE(53),
    [aux_sym_start_token1] = ACTIONS(23),
    [aux_sym_end_token1] = ACTIONS(26),
    [sym__eol] = ACTIONS(43),
    [sym__char] = ACTIONS(31),
  },
  [42] = {
    [aux_sym__body] = STATE(42),
    [sym_conflict] = STATE(78),
    [sym_start] = STATE(81),
    [sym_comment] = STATE(78),
    [aux_sym_comment_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(26),
    [aux_sym_start_token1] = ACTIONS(23),
    [sym__eol] = ACTIONS(46),
    [sym__char] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(49), 1,
      sym__char,
    ACTIONS(26), 4,
      aux_sym_start_token1,
      aux_sym_common_sep_token1,
      aux_sym_sep_token1,
      sym__eol,
  [10] = 2,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(51), 4,
      aux_sym_start_token1,
      aux_sym_common_sep_token1,
      aux_sym_sep_token1,
      sym__eol,
  [20] = 2,
    ACTIONS(49), 1,
      sym__char,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      aux_sym_start_token1,
      sym__eol,
  [29] = 3,
    ACTIONS(57), 1,
      sym__char,
    STATE(46), 1,
      aux_sym_comment_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym__eol,
  [40] = 2,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(51), 3,
      aux_sym_start_token1,
      aux_sym_sep_token1,
      sym__eol,
  [49] = 2,
    ACTIONS(49), 1,
      sym__char,
    ACTIONS(26), 3,
      aux_sym_start_token1,
      aux_sym_end_token1,
      sym__eol,
  [58] = 2,
    ACTIONS(49), 1,
      sym__char,
    ACTIONS(26), 3,
      aux_sym_start_token1,
      aux_sym_sep_token1,
      sym__eol,
  [67] = 2,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(51), 3,
      aux_sym_start_token1,
      aux_sym_end_token1,
      sym__eol,
  [76] = 3,
    ACTIONS(62), 1,
      sym__char,
    STATE(46), 1,
      aux_sym_comment_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      sym__eol,
  [87] = 2,
    ACTIONS(53), 1,
      sym__char,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      aux_sym_start_token1,
      sym__eol,
  [96] = 3,
    ACTIONS(60), 1,
      sym__eol,
    ACTIONS(64), 1,
      sym__char,
    STATE(55), 1,
      aux_sym_comment_repeat1,
  [106] = 2,
    ACTIONS(68), 1,
      aux_sym_start_token2,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      sym__eol,
  [114] = 3,
    ACTIONS(55), 1,
      sym__eol,
    ACTIONS(70), 1,
      sym__char,
    STATE(55), 1,
      aux_sym_comment_repeat1,
  [124] = 1,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym__eol,
  [129] = 2,
    ACTIONS(75), 1,
      aux_sym_start_token2,
    ACTIONS(77), 1,
      sym__eol,
  [136] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym__eol,
  [141] = 2,
    ACTIONS(81), 1,
      aux_sym_start_token2,
    ACTIONS(83), 1,
      sym__eol,
  [148] = 2,
    ACTIONS(66), 1,
      sym__eol,
    ACTIONS(68), 1,
      aux_sym_start_token2,
  [155] = 1,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      sym__eol,
  [160] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 1,
      sym__eol,
  [167] = 1,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym__eol,
  [172] = 1,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym__eol,
  [177] = 2,
    ACTIONS(95), 1,
      aux_sym_start_token2,
    ACTIONS(97), 1,
      sym__eol,
  [184] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      sym__eol,
  [189] = 1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      sym__eol,
  [194] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      sym__eol,
  [199] = 1,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym__eol,
  [204] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      sym__eol,
  [209] = 1,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      sym__eol,
  [214] = 1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      sym__eol,
  [219] = 1,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      sym__eol,
  [224] = 1,
    ACTIONS(115), 1,
      sym__eol,
  [228] = 1,
    ACTIONS(117), 1,
      sym__eol,
  [232] = 1,
    ACTIONS(119), 1,
      sym__eol,
  [236] = 1,
    ACTIONS(121), 1,
      sym__eol,
  [240] = 1,
    ACTIONS(89), 1,
      sym__eol,
  [244] = 1,
    ACTIONS(123), 1,
      sym__eol,
  [248] = 1,
    ACTIONS(125), 1,
      sym__eol,
  [252] = 1,
    ACTIONS(127), 1,
      sym__eol,
  [256] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [260] = 1,
    ACTIONS(131), 1,
      sym__eol,
  [264] = 1,
    ACTIONS(133), 1,
      sym__eol,
  [268] = 1,
    ACTIONS(135), 1,
      sym__eol,
  [272] = 1,
    ACTIONS(137), 1,
      sym__eol,
  [276] = 1,
    ACTIONS(139), 1,
      sym__eol,
  [280] = 1,
    ACTIONS(141), 1,
      sym__eol,
  [284] = 1,
    ACTIONS(143), 1,
      sym__eol,
  [288] = 1,
    ACTIONS(145), 1,
      sym__eol,
  [292] = 1,
    ACTIONS(147), 1,
      sym__eol,
  [296] = 1,
    ACTIONS(149), 1,
      sym__eol,
  [300] = 1,
    ACTIONS(151), 1,
      sym__eol,
  [304] = 1,
    ACTIONS(153), 1,
      sym__eol,
  [308] = 1,
    ACTIONS(155), 1,
      sym__eol,
  [312] = 1,
    ACTIONS(157), 1,
      sym__eol,
  [316] = 1,
    ACTIONS(159), 1,
      sym__eol,
  [320] = 1,
    ACTIONS(161), 1,
      sym__eol,
  [324] = 1,
    ACTIONS(163), 1,
      sym__eol,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(43)] = 0,
  [SMALL_STATE(44)] = 10,
  [SMALL_STATE(45)] = 20,
  [SMALL_STATE(46)] = 29,
  [SMALL_STATE(47)] = 40,
  [SMALL_STATE(48)] = 49,
  [SMALL_STATE(49)] = 58,
  [SMALL_STATE(50)] = 67,
  [SMALL_STATE(51)] = 76,
  [SMALL_STATE(52)] = 87,
  [SMALL_STATE(53)] = 96,
  [SMALL_STATE(54)] = 106,
  [SMALL_STATE(55)] = 114,
  [SMALL_STATE(56)] = 124,
  [SMALL_STATE(57)] = 129,
  [SMALL_STATE(58)] = 136,
  [SMALL_STATE(59)] = 141,
  [SMALL_STATE(60)] = 148,
  [SMALL_STATE(61)] = 155,
  [SMALL_STATE(62)] = 160,
  [SMALL_STATE(63)] = 167,
  [SMALL_STATE(64)] = 172,
  [SMALL_STATE(65)] = 177,
  [SMALL_STATE(66)] = 184,
  [SMALL_STATE(67)] = 189,
  [SMALL_STATE(68)] = 194,
  [SMALL_STATE(69)] = 199,
  [SMALL_STATE(70)] = 204,
  [SMALL_STATE(71)] = 209,
  [SMALL_STATE(72)] = 214,
  [SMALL_STATE(73)] = 219,
  [SMALL_STATE(74)] = 224,
  [SMALL_STATE(75)] = 228,
  [SMALL_STATE(76)] = 232,
  [SMALL_STATE(77)] = 236,
  [SMALL_STATE(78)] = 240,
  [SMALL_STATE(79)] = 244,
  [SMALL_STATE(80)] = 248,
  [SMALL_STATE(81)] = 252,
  [SMALL_STATE(82)] = 256,
  [SMALL_STATE(83)] = 260,
  [SMALL_STATE(84)] = 264,
  [SMALL_STATE(85)] = 268,
  [SMALL_STATE(86)] = 272,
  [SMALL_STATE(87)] = 276,
  [SMALL_STATE(88)] = 280,
  [SMALL_STATE(89)] = 284,
  [SMALL_STATE(90)] = 288,
  [SMALL_STATE(91)] = 292,
  [SMALL_STATE(92)] = 296,
  [SMALL_STATE(93)] = 300,
  [SMALL_STATE(94)] = 304,
  [SMALL_STATE(95)] = 308,
  [SMALL_STATE(96)] = 312,
  [SMALL_STATE(97)] = 316,
  [SMALL_STATE(98)] = 320,
  [SMALL_STATE(99)] = 324,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(65),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(44),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(53),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(47),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(50),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__body, 2, 0, 0), SHIFT_REPEAT(52),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__body, 1, 0, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__body, 1, 0, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 6, 0, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_sep, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 7, 0, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 7, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 8, 0, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 9, 0, 8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 9, 0, 9),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 8, 0, 7),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 10, 0, 11),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 6, 0, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 9, 0, 10),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conflict, 8, 0, 6),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end, 2, 0, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start, 2, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_common_sep, 2, 0, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sep, 2, 0, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_git_merge_conflict(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
