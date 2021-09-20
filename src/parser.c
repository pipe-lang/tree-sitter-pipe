#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_number = 1,
  sym_float = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_DOT_DOT = 7,
  sym__unquoted_string = 8,
  sym__quoted_string = 9,
  sym_module = 10,
  sym__instruction = 11,
  sym_bool = 12,
  sym_string = 13,
  sym_array = 14,
  sym_range = 15,
  aux_sym_module_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT_DOT] = "..",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_module] = "module",
  [sym__instruction] = "_instruction",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_range] = "range",
  [aux_sym_module_repeat1] = "module_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_module] = sym_module,
  [sym__instruction] = sym__instruction,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_range] = sym_range,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
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
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_begin = 1,
  field_end = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_begin] = "begin",
  [field_end] = "end",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_end, 1},
  [1] =
    {field_begin, 0},
  [2] =
    {field_begin, 0},
    {field_end, 2},
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
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(11);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(15);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__quoted_string);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym__unquoted_string] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(15),
    [sym__instruction] = STATE(10),
    [sym_bool] = STATE(10),
    [sym_string] = STATE(10),
    [sym_array] = STATE(10),
    [sym_range] = STATE(10),
    [aux_sym_module_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(17),
  },
  [2] = {
    [sym__instruction] = STATE(10),
    [sym_bool] = STATE(10),
    [sym_string] = STATE(10),
    [sym_array] = STATE(10),
    [sym_range] = STATE(10),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym_number] = ACTIONS(21),
    [sym_float] = ACTIONS(24),
    [anon_sym_true] = ACTIONS(27),
    [anon_sym_false] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_DOT_DOT] = ACTIONS(33),
    [sym__unquoted_string] = ACTIONS(36),
    [sym__quoted_string] = ACTIONS(39),
  },
  [3] = {
    [sym__instruction] = STATE(10),
    [sym_bool] = STATE(10),
    [sym_string] = STATE(10),
    [sym_array] = STATE(10),
    [sym_range] = STATE(10),
    [aux_sym_module_repeat1] = STATE(5),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(17),
  },
  [4] = {
    [sym__instruction] = STATE(10),
    [sym_bool] = STATE(10),
    [sym_string] = STATE(10),
    [sym_array] = STATE(10),
    [sym_range] = STATE(10),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(17),
  },
  [5] = {
    [sym__instruction] = STATE(10),
    [sym_bool] = STATE(10),
    [sym_string] = STATE(10),
    [sym_array] = STATE(10),
    [sym_range] = STATE(10),
    [aux_sym_module_repeat1] = STATE(2),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(46),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(17),
  },
  [6] = {
    [sym__instruction] = STATE(14),
    [sym_bool] = STATE(14),
    [sym_string] = STATE(14),
    [sym_array] = STATE(14),
    [sym_range] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(48),
    [sym_number] = ACTIONS(50),
    [sym_float] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(48),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(17),
  },
  [7] = {
    [sym__instruction] = STATE(12),
    [sym_bool] = STATE(12),
    [sym_string] = STATE(12),
    [sym_array] = STATE(12),
    [sym_range] = STATE(12),
    [sym_number] = ACTIONS(54),
    [sym_float] = ACTIONS(56),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_DOT_DOT] = ACTIONS(13),
    [sym__unquoted_string] = ACTIONS(15),
    [sym__quoted_string] = ACTIONS(17),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_number] = ACTIONS(60),
    [sym_float] = ACTIONS(58),
    [anon_sym_true] = ACTIONS(60),
    [anon_sym_false] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(58),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_DOT_DOT] = ACTIONS(58),
    [sym__unquoted_string] = ACTIONS(60),
    [sym__quoted_string] = ACTIONS(58),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_number] = ACTIONS(64),
    [sym_float] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(64),
    [anon_sym_false] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_DOT_DOT] = ACTIONS(62),
    [sym__unquoted_string] = ACTIONS(64),
    [sym__quoted_string] = ACTIONS(62),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym_number] = ACTIONS(68),
    [sym_float] = ACTIONS(66),
    [anon_sym_true] = ACTIONS(68),
    [anon_sym_false] = ACTIONS(68),
    [anon_sym_LBRACK] = ACTIONS(66),
    [anon_sym_RBRACK] = ACTIONS(66),
    [anon_sym_DOT_DOT] = ACTIONS(70),
    [sym__unquoted_string] = ACTIONS(68),
    [sym__quoted_string] = ACTIONS(66),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_number] = ACTIONS(74),
    [sym_float] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(74),
    [anon_sym_false] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(72),
    [anon_sym_RBRACK] = ACTIONS(72),
    [anon_sym_DOT_DOT] = ACTIONS(72),
    [sym__unquoted_string] = ACTIONS(74),
    [sym__quoted_string] = ACTIONS(72),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_number] = ACTIONS(78),
    [sym_float] = ACTIONS(76),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_false] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_DOT_DOT] = ACTIONS(70),
    [sym__unquoted_string] = ACTIONS(78),
    [sym__quoted_string] = ACTIONS(76),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_number] = ACTIONS(82),
    [sym_float] = ACTIONS(80),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_DOT_DOT] = ACTIONS(80),
    [sym__unquoted_string] = ACTIONS(82),
    [sym__quoted_string] = ACTIONS(80),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_number] = ACTIONS(86),
    [sym_float] = ACTIONS(84),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_false] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_DOT_DOT] = ACTIONS(84),
    [sym__unquoted_string] = ACTIONS(86),
    [sym__quoted_string] = ACTIONS(84),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 2, .production_id = 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pipe(void) {
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
