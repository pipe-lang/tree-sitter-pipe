#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  sym_number = 1,
  sym_float = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  aux_sym__unquoted_string_token1 = 9,
  sym__quoted_string = 10,
  sym_inclusive = 11,
  sym_exclusive = 12,
  sym_name = 13,
  anon_sym_COLON = 14,
  sym_module = 15,
  sym__instruction = 16,
  sym_bool = 17,
  sym_string = 18,
  sym_array = 19,
  sym_range = 20,
  sym_struct = 21,
  sym__unquoted_string = 22,
  sym__range_operator = 23,
  sym_attributes = 24,
  sym_identifier = 25,
  aux_sym_module_repeat1 = 26,
  aux_sym_attributes_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_number] = "number",
  [sym_float] = "float",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [sym__quoted_string] = "_quoted_string",
  [sym_inclusive] = "inclusive",
  [sym_exclusive] = "exclusive",
  [sym_name] = "name",
  [anon_sym_COLON] = ":",
  [sym_module] = "module",
  [sym__instruction] = "_instruction",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_range] = "range",
  [sym_struct] = "struct",
  [sym__unquoted_string] = "_unquoted_string",
  [sym__range_operator] = "_range_operator",
  [sym_attributes] = "attributes",
  [sym_identifier] = "identifier",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_number] = sym_number,
  [sym_float] = sym_float,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [sym__quoted_string] = sym__quoted_string,
  [sym_inclusive] = sym_inclusive,
  [sym_exclusive] = sym_exclusive,
  [sym_name] = sym_name,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_module] = sym_module,
  [sym__instruction] = sym__instruction,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_range] = sym_range,
  [sym_struct] = sym_struct,
  [sym__unquoted_string] = sym__unquoted_string,
  [sym__range_operator] = sym__range_operator,
  [sym_attributes] = sym_attributes,
  [sym_identifier] = sym_identifier,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
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
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__unquoted_string_token1] = {
    .visible = false,
    .named = false,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym__unquoted_string] = {
    .visible = false,
    .named = true,
  },
  [sym__range_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
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
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '[') ADVANCE(10);
      if (lookahead == ']') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 't') ADVANCE(18);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(17);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(8);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(19);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_inclusive);
      if (lookahead == '<') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_exclusive);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
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
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym__unquoted_string_token1] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym_inclusive] = ACTIONS(1),
    [sym_exclusive] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(39),
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [2] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [sym_attributes] = STATE(37),
    [sym_identifier] = STATE(41),
    [aux_sym_module_repeat1] = STATE(9),
    [aux_sym_attributes_repeat1] = STATE(35),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(23),
    [aux_sym__unquoted_string_token1] = ACTIONS(25),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [3] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [sym_attributes] = STATE(42),
    [sym_identifier] = STATE(41),
    [aux_sym_module_repeat1] = STATE(9),
    [aux_sym_attributes_repeat1] = STATE(35),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(27),
    [aux_sym__unquoted_string_token1] = ACTIONS(25),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [4] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_number] = ACTIONS(31),
    [sym_float] = ACTIONS(34),
    [anon_sym_true] = ACTIONS(37),
    [anon_sym_false] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(40),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [aux_sym__unquoted_string_token1] = ACTIONS(43),
    [sym__quoted_string] = ACTIONS(46),
    [sym_inclusive] = ACTIONS(49),
    [sym_exclusive] = ACTIONS(52),
    [sym_name] = ACTIONS(55),
  },
  [5] = {
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(58),
    [sym_number] = ACTIONS(60),
    [sym_float] = ACTIONS(62),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_RBRACE] = ACTIONS(58),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [6] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(11),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(64),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [7] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(66),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [8] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(7),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(68),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [9] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(70),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [10] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(72),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [11] = {
    [sym__instruction] = STATE(18),
    [sym_bool] = STATE(18),
    [sym_string] = STATE(18),
    [sym_array] = STATE(18),
    [sym_range] = STATE(18),
    [sym_struct] = STATE(18),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACK] = ACTIONS(74),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [12] = {
    [sym__instruction] = STATE(26),
    [sym_bool] = STATE(26),
    [sym_string] = STATE(26),
    [sym_array] = STATE(26),
    [sym_range] = STATE(26),
    [sym_struct] = STATE(26),
    [sym__unquoted_string] = STATE(30),
    [sym__range_operator] = STATE(13),
    [sym_number] = ACTIONS(76),
    [sym_float] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [anon_sym_RBRACE] = ACTIONS(58),
    [aux_sym__unquoted_string_token1] = ACTIONS(84),
    [sym__quoted_string] = ACTIONS(86),
    [sym_inclusive] = ACTIONS(88),
    [sym_exclusive] = ACTIONS(90),
    [sym_name] = ACTIONS(92),
  },
  [13] = {
    [sym__instruction] = STATE(27),
    [sym_bool] = STATE(27),
    [sym_string] = STATE(27),
    [sym_array] = STATE(27),
    [sym_range] = STATE(27),
    [sym_struct] = STATE(27),
    [sym__unquoted_string] = STATE(30),
    [sym__range_operator] = STATE(13),
    [sym_number] = ACTIONS(94),
    [sym_float] = ACTIONS(96),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [aux_sym__unquoted_string_token1] = ACTIONS(84),
    [sym__quoted_string] = ACTIONS(86),
    [sym_inclusive] = ACTIONS(88),
    [sym_exclusive] = ACTIONS(90),
    [sym_name] = ACTIONS(92),
  },
  [14] = {
    [sym__instruction] = STATE(16),
    [sym_bool] = STATE(16),
    [sym_string] = STATE(16),
    [sym_array] = STATE(16),
    [sym_range] = STATE(16),
    [sym_struct] = STATE(16),
    [sym__unquoted_string] = STATE(22),
    [sym__range_operator] = STATE(14),
    [sym_number] = ACTIONS(98),
    [sym_float] = ACTIONS(100),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [15] = {
    [sym__instruction] = STATE(28),
    [sym_bool] = STATE(28),
    [sym_string] = STATE(28),
    [sym_array] = STATE(28),
    [sym_range] = STATE(28),
    [sym_struct] = STATE(28),
    [sym__unquoted_string] = STATE(30),
    [sym__range_operator] = STATE(13),
    [sym_number] = ACTIONS(102),
    [sym_float] = ACTIONS(104),
    [anon_sym_true] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(82),
    [aux_sym__unquoted_string_token1] = ACTIONS(84),
    [sym__quoted_string] = ACTIONS(86),
    [sym_inclusive] = ACTIONS(88),
    [sym_exclusive] = ACTIONS(90),
    [sym_name] = ACTIONS(92),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(110), 1,
      sym_inclusive,
    ACTIONS(112), 1,
      sym_exclusive,
    STATE(5), 1,
      sym__range_operator,
    ACTIONS(108), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_name,
  [25] = 3,
    STATE(5), 1,
      sym__range_operator,
    ACTIONS(116), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(114), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [46] = 5,
    ACTIONS(110), 1,
      sym_inclusive,
    ACTIONS(112), 1,
      sym_exclusive,
    STATE(5), 1,
      sym__range_operator,
    ACTIONS(120), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
    ACTIONS(118), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_name,
  [71] = 2,
    ACTIONS(124), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(122), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [89] = 2,
    ACTIONS(128), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(126), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [107] = 2,
    ACTIONS(132), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(130), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [125] = 2,
    ACTIONS(136), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(134), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [143] = 2,
    ACTIONS(140), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [161] = 2,
    ACTIONS(144), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [179] = 3,
    ACTIONS(150), 1,
      anon_sym_COLON,
    ACTIONS(146), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(148), 6,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [198] = 3,
    ACTIONS(116), 1,
      sym_inclusive,
    STATE(12), 1,
      sym__range_operator,
    ACTIONS(114), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [210] = 4,
    ACTIONS(152), 1,
      sym_inclusive,
    ACTIONS(154), 1,
      sym_exclusive,
    STATE(12), 1,
      sym__range_operator,
    ACTIONS(106), 2,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
  [224] = 4,
    ACTIONS(152), 1,
      sym_inclusive,
    ACTIONS(154), 1,
      sym_exclusive,
    STATE(12), 1,
      sym__range_operator,
    ACTIONS(156), 2,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
  [238] = 4,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    ACTIONS(160), 1,
      aux_sym__unquoted_string_token1,
    STATE(29), 1,
      aux_sym_attributes_repeat1,
    STATE(41), 1,
      sym_identifier,
  [251] = 2,
    ACTIONS(136), 1,
      sym_inclusive,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [260] = 2,
    ACTIONS(124), 1,
      sym_inclusive,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [269] = 2,
    ACTIONS(144), 1,
      sym_inclusive,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [278] = 2,
    ACTIONS(128), 1,
      sym_inclusive,
    ACTIONS(126), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [287] = 2,
    ACTIONS(132), 1,
      sym_inclusive,
    ACTIONS(130), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [296] = 4,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    ACTIONS(163), 1,
      aux_sym__unquoted_string_token1,
    STATE(29), 1,
      aux_sym_attributes_repeat1,
    STATE(41), 1,
      sym_identifier,
  [309] = 2,
    ACTIONS(140), 1,
      sym_inclusive,
    ACTIONS(138), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [318] = 1,
    ACTIONS(165), 1,
      anon_sym_RBRACE,
  [322] = 1,
    ACTIONS(150), 1,
      anon_sym_COLON,
  [326] = 1,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [330] = 1,
    ACTIONS(169), 1,
      anon_sym_LBRACE,
  [334] = 1,
    ACTIONS(171), 1,
      anon_sym_COLON,
  [338] = 1,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
  [342] = 1,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 25,
  [SMALL_STATE(18)] = 46,
  [SMALL_STATE(19)] = 71,
  [SMALL_STATE(20)] = 89,
  [SMALL_STATE(21)] = 107,
  [SMALL_STATE(22)] = 125,
  [SMALL_STATE(23)] = 143,
  [SMALL_STATE(24)] = 161,
  [SMALL_STATE(25)] = 179,
  [SMALL_STATE(26)] = 198,
  [SMALL_STATE(27)] = 210,
  [SMALL_STATE(28)] = 224,
  [SMALL_STATE(29)] = 238,
  [SMALL_STATE(30)] = 251,
  [SMALL_STATE(31)] = 260,
  [SMALL_STATE(32)] = 269,
  [SMALL_STATE(33)] = 278,
  [SMALL_STATE(34)] = 287,
  [SMALL_STATE(35)] = 296,
  [SMALL_STATE(36)] = 309,
  [SMALL_STATE(37)] = 318,
  [SMALL_STATE(38)] = 322,
  [SMALL_STATE(39)] = 326,
  [SMALL_STATE(40)] = 330,
  [SMALL_STATE(41)] = 334,
  [SMALL_STATE(42)] = 338,
  [SMALL_STATE(43)] = 342,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(18),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(24),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(22),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(22),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(14),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(40),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 2, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unquoted_string, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unquoted_string, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(38),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
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
