#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 4

enum {
  sym_number = 1,
  sym_float = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym__unquoted_string = 7,
  sym__quoted_string = 8,
  sym_inclusive = 9,
  sym_exclusive = 10,
  sym_module = 11,
  sym__instruction = 12,
  sym_bool = 13,
  sym_string = 14,
  sym_array = 15,
  sym_range = 16,
  sym__range_operator = 17,
  aux_sym_module_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__quoted_string] = "_quoted_string",
  [sym_inclusive] = "inclusive",
  [sym_exclusive] = "exclusive",
  [sym_module] = "module",
  [sym__instruction] = "_instruction",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_range] = "range",
  [sym__range_operator] = "_range_operator",
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
  [sym__unquoted_string] = sym__unquoted_string,
  [sym__quoted_string] = sym__quoted_string,
  [sym_inclusive] = sym_inclusive,
  [sym_exclusive] = sym_exclusive,
  [sym_module] = sym_module,
  [sym__instruction] = sym__instruction,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_range] = sym_range,
  [sym__range_operator] = sym__range_operator,
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
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__quoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym_inclusive] = {
    .visible = true,
    .named = true,
  },
  [sym_exclusive] = {
    .visible = true,
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
  [sym__range_operator] = {
    .visible = false,
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
  field_operator = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_begin] = "begin",
  [field_end] = "end",
  [field_operator] = "operator",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_begin, 0},
    {field_operator, 1},
  [2] =
    {field_end, 1},
    {field_operator, 0},
  [4] =
    {field_begin, 0},
    {field_end, 2},
    {field_operator, 1},
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
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(21);
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
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'a') ADVANCE(14);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(7);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'e') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'l') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'r') ADVANCE(17);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 's') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (lookahead == 'u') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__unquoted_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_inclusive);
      if (lookahead == '<') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_exclusive);
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
    [sym__unquoted_string] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym_inclusive] = ACTIONS(1),
    [sym_exclusive] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(15),
    [sym__instruction] = STATE(8),
    [sym_bool] = STATE(8),
    [sym_string] = STATE(8),
    [sym_array] = STATE(8),
    [sym_range] = STATE(8),
    [sym__range_operator] = STATE(7),
    [aux_sym_module_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__unquoted_string] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
  },
  [2] = {
    [sym__instruction] = STATE(8),
    [sym_bool] = STATE(8),
    [sym_string] = STATE(8),
    [sym_array] = STATE(8),
    [sym_range] = STATE(8),
    [sym__range_operator] = STATE(7),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_float] = ACTIONS(26),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(32),
    [anon_sym_RBRACK] = ACTIONS(21),
    [sym__unquoted_string] = ACTIONS(35),
    [sym__quoted_string] = ACTIONS(38),
    [sym_inclusive] = ACTIONS(41),
    [sym_exclusive] = ACTIONS(44),
  },
  [3] = {
    [sym__instruction] = STATE(8),
    [sym_bool] = STATE(8),
    [sym_string] = STATE(8),
    [sym_array] = STATE(8),
    [sym_range] = STATE(8),
    [sym__range_operator] = STATE(7),
    [aux_sym_module_repeat1] = STATE(5),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(47),
    [sym__unquoted_string] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
  },
  [4] = {
    [sym__instruction] = STATE(8),
    [sym_bool] = STATE(8),
    [sym_string] = STATE(8),
    [sym_array] = STATE(8),
    [sym_range] = STATE(8),
    [sym__range_operator] = STATE(7),
    [aux_sym_module_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__unquoted_string] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
  },
  [5] = {
    [sym__instruction] = STATE(8),
    [sym_bool] = STATE(8),
    [sym_string] = STATE(8),
    [sym_array] = STATE(8),
    [sym_range] = STATE(8),
    [sym__range_operator] = STATE(7),
    [aux_sym_module_repeat1] = STATE(2),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(51),
    [sym__unquoted_string] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
  },
  [6] = {
    [sym__instruction] = STATE(10),
    [sym_bool] = STATE(10),
    [sym_string] = STATE(10),
    [sym_array] = STATE(10),
    [sym_range] = STATE(10),
    [sym__range_operator] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_number] = ACTIONS(55),
    [sym_float] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(53),
    [sym__unquoted_string] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
  },
  [7] = {
    [sym__instruction] = STATE(9),
    [sym_bool] = STATE(9),
    [sym_string] = STATE(9),
    [sym_array] = STATE(9),
    [sym_range] = STATE(9),
    [sym__range_operator] = STATE(7),
    [sym_number] = ACTIONS(59),
    [sym_float] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym__unquoted_string] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
  },
  [8] = {
    [sym__range_operator] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_number] = ACTIONS(65),
    [sym_float] = ACTIONS(63),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(63),
    [sym__unquoted_string] = ACTIONS(65),
    [sym__quoted_string] = ACTIONS(63),
    [sym_inclusive] = ACTIONS(67),
    [sym_exclusive] = ACTIONS(69),
  },
  [9] = {
    [sym__range_operator] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_number] = ACTIONS(73),
    [sym_float] = ACTIONS(71),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [sym__unquoted_string] = ACTIONS(73),
    [sym__quoted_string] = ACTIONS(71),
    [sym_inclusive] = ACTIONS(67),
    [sym_exclusive] = ACTIONS(69),
  },
  [10] = {
    [sym__range_operator] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_number] = ACTIONS(77),
    [sym_float] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [sym__unquoted_string] = ACTIONS(77),
    [sym__quoted_string] = ACTIONS(75),
    [sym_inclusive] = ACTIONS(77),
    [sym_exclusive] = ACTIONS(75),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_number] = ACTIONS(81),
    [sym_float] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [sym__unquoted_string] = ACTIONS(81),
    [sym__quoted_string] = ACTIONS(79),
    [sym_inclusive] = ACTIONS(81),
    [sym_exclusive] = ACTIONS(79),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_number] = ACTIONS(85),
    [sym_float] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym__unquoted_string] = ACTIONS(85),
    [sym__quoted_string] = ACTIONS(83),
    [sym_inclusive] = ACTIONS(85),
    [sym_exclusive] = ACTIONS(83),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_number] = ACTIONS(89),
    [sym_float] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym__unquoted_string] = ACTIONS(89),
    [sym__quoted_string] = ACTIONS(87),
    [sym_inclusive] = ACTIONS(89),
    [sym_exclusive] = ACTIONS(87),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_number] = ACTIONS(93),
    [sym_float] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym__unquoted_string] = ACTIONS(93),
    [sym__quoted_string] = ACTIONS(91),
    [sym_inclusive] = ACTIONS(93),
    [sym_exclusive] = ACTIONS(91),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(8),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(3),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(12),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 2),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 2, .production_id = 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 3),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
