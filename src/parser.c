#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  anon_sym_COLON_COLON = 9,
  aux_sym__unquoted_string_token1 = 10,
  sym__quoted_string = 11,
  sym_inclusive = 12,
  sym_exclusive = 13,
  anon_sym_COLON = 14,
  sym_name = 15,
  sym_module = 16,
  sym__instruction = 17,
  sym_bool = 18,
  sym_string = 19,
  sym_array = 20,
  sym_range = 21,
  sym_struct = 22,
  sym_enum = 23,
  sym__unquoted_string = 24,
  sym__range_operator = 25,
  sym_attributes = 26,
  sym_identifier = 27,
  aux_sym_module_repeat1 = 28,
  aux_sym_attributes_repeat1 = 29,
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
  [anon_sym_COLON_COLON] = "::",
  [aux_sym__unquoted_string_token1] = "_unquoted_string_token1",
  [sym__quoted_string] = "_quoted_string",
  [sym_inclusive] = "inclusive",
  [sym_exclusive] = "exclusive",
  [anon_sym_COLON] = ":",
  [sym_name] = "name",
  [sym_module] = "module",
  [sym__instruction] = "_instruction",
  [sym_bool] = "bool",
  [sym_string] = "string",
  [sym_array] = "array",
  [sym_range] = "range",
  [sym_struct] = "struct",
  [sym_enum] = "enum",
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
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [aux_sym__unquoted_string_token1] = aux_sym__unquoted_string_token1,
  [sym__quoted_string] = sym__quoted_string,
  [sym_inclusive] = sym_inclusive,
  [sym_exclusive] = sym_exclusive,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_name] = sym_name,
  [sym_module] = sym_module,
  [sym__instruction] = sym__instruction,
  [sym_bool] = sym_bool,
  [sym_string] = sym_string,
  [sym_array] = sym_array,
  [sym_range] = sym_range,
  [sym_struct] = sym_struct,
  [sym_enum] = sym_enum,
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
  [anon_sym_COLON_COLON] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
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
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
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
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(32);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '{') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '}') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
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
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'a') ADVANCE(22);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(12);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'e') ADVANCE(13);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'l') ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'r') ADVANCE(25);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 's') ADVANCE(21);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (lookahead == 'u') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym__unquoted_string_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__quoted_string);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_inclusive);
      if (lookahead == '<') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_exclusive);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(18);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
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
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 5},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 0},
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
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [aux_sym__unquoted_string_token1] = ACTIONS(1),
    [sym__quoted_string] = ACTIONS(1),
    [sym_inclusive] = ACTIONS(1),
    [sym_exclusive] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(46),
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(9),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
    [sym__range_operator] = STATE(14),
    [sym_attributes] = STATE(45),
    [sym_identifier] = STATE(47),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_attributes_repeat1] = STATE(41),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
    [sym__range_operator] = STATE(14),
    [sym_attributes] = STATE(48),
    [sym_identifier] = STATE(47),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_attributes_repeat1] = STATE(41),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(19),
    [sym_bool] = STATE(19),
    [sym_string] = STATE(19),
    [sym_array] = STATE(19),
    [sym_range] = STATE(19),
    [sym_struct] = STATE(19),
    [sym_enum] = STATE(19),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(70),
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
  [10] = {
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
    [sym__range_operator] = STATE(14),
    [aux_sym_module_repeat1] = STATE(4),
    [sym_number] = ACTIONS(5),
    [sym_float] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_RBRACE] = ACTIONS(72),
    [aux_sym__unquoted_string_token1] = ACTIONS(13),
    [sym__quoted_string] = ACTIONS(15),
    [sym_inclusive] = ACTIONS(17),
    [sym_exclusive] = ACTIONS(19),
    [sym_name] = ACTIONS(21),
  },
  [11] = {
    [sym__instruction] = STATE(17),
    [sym_bool] = STATE(17),
    [sym_string] = STATE(17),
    [sym_array] = STATE(17),
    [sym_range] = STATE(17),
    [sym_struct] = STATE(17),
    [sym_enum] = STATE(17),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(30),
    [sym_bool] = STATE(30),
    [sym_string] = STATE(30),
    [sym_array] = STATE(30),
    [sym_range] = STATE(30),
    [sym_struct] = STATE(30),
    [sym_enum] = STATE(30),
    [sym__unquoted_string] = STATE(35),
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
    [sym__instruction] = STATE(31),
    [sym_bool] = STATE(31),
    [sym_string] = STATE(31),
    [sym_array] = STATE(31),
    [sym_range] = STATE(31),
    [sym_struct] = STATE(31),
    [sym_enum] = STATE(31),
    [sym__unquoted_string] = STATE(35),
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
    [sym_enum] = STATE(16),
    [sym__unquoted_string] = STATE(23),
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
    [sym__instruction] = STATE(32),
    [sym_bool] = STATE(32),
    [sym_string] = STATE(32),
    [sym_array] = STATE(32),
    [sym_range] = STATE(32),
    [sym_struct] = STATE(32),
    [sym_enum] = STATE(32),
    [sym__unquoted_string] = STATE(35),
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
  [25] = 5,
    ACTIONS(110), 1,
      sym_inclusive,
    ACTIONS(112), 1,
      sym_exclusive,
    STATE(5), 1,
      sym__range_operator,
    ACTIONS(116), 4,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_name,
  [50] = 2,
    ACTIONS(120), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      anon_sym_COLON,
      sym_name,
  [69] = 3,
    STATE(5), 1,
      sym__range_operator,
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
  [90] = 2,
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
  [108] = 2,
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
  [126] = 2,
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
  [144] = 2,
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
  [162] = 2,
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
  [180] = 2,
    ACTIONS(148), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(146), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [198] = 2,
    ACTIONS(152), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(150), 8,
      ts_builtin_sym_end,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [216] = 3,
    ACTIONS(118), 1,
      anon_sym_COLON,
    ACTIONS(154), 5,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      aux_sym__unquoted_string_token1,
      sym_inclusive,
    ACTIONS(156), 6,
      sym_float,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      sym__quoted_string,
      sym_exclusive,
      sym_name,
  [235] = 4,
    ACTIONS(160), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(158), 2,
      sym_number,
      sym_name,
    STATE(24), 2,
      sym_bool,
      sym_identifier,
  [251] = 4,
    ACTIONS(164), 1,
      aux_sym__unquoted_string_token1,
    ACTIONS(80), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_number,
      sym_name,
    STATE(33), 2,
      sym_bool,
      sym_identifier,
  [267] = 3,
    ACTIONS(124), 1,
      sym_inclusive,
    STATE(12), 1,
      sym__range_operator,
    ACTIONS(122), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [279] = 4,
    ACTIONS(166), 1,
      sym_inclusive,
    ACTIONS(168), 1,
      sym_exclusive,
    STATE(12), 1,
      sym__range_operator,
    ACTIONS(106), 2,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
  [293] = 4,
    ACTIONS(166), 1,
      sym_inclusive,
    ACTIONS(168), 1,
      sym_exclusive,
    STATE(12), 1,
      sym__range_operator,
    ACTIONS(170), 2,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
  [307] = 2,
    ACTIONS(144), 1,
      sym_inclusive,
    ACTIONS(142), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [316] = 2,
    ACTIONS(128), 1,
      sym_inclusive,
    ACTIONS(126), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [325] = 2,
    ACTIONS(140), 1,
      sym_inclusive,
    ACTIONS(138), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [334] = 2,
    ACTIONS(152), 1,
      sym_inclusive,
    ACTIONS(150), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [343] = 2,
    ACTIONS(132), 1,
      sym_inclusive,
    ACTIONS(130), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [352] = 2,
    ACTIONS(136), 1,
      sym_inclusive,
    ACTIONS(134), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [361] = 4,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      aux_sym__unquoted_string_token1,
    STATE(39), 1,
      aux_sym_attributes_repeat1,
    STATE(47), 1,
      sym_identifier,
  [374] = 2,
    ACTIONS(120), 1,
      sym_inclusive,
    ACTIONS(118), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [383] = 4,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(177), 1,
      aux_sym__unquoted_string_token1,
    STATE(39), 1,
      aux_sym_attributes_repeat1,
    STATE(47), 1,
      sym_identifier,
  [396] = 2,
    ACTIONS(148), 1,
      sym_inclusive,
    ACTIONS(146), 3,
      anon_sym_RBRACE,
      aux_sym__unquoted_string_token1,
      sym_exclusive,
  [405] = 2,
    ACTIONS(179), 1,
      anon_sym_LBRACE,
    ACTIONS(181), 1,
      anon_sym_COLON_COLON,
  [412] = 2,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      anon_sym_COLON_COLON,
  [419] = 1,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
  [423] = 1,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
  [427] = 1,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [431] = 1,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 25,
  [SMALL_STATE(18)] = 50,
  [SMALL_STATE(19)] = 69,
  [SMALL_STATE(20)] = 90,
  [SMALL_STATE(21)] = 108,
  [SMALL_STATE(22)] = 126,
  [SMALL_STATE(23)] = 144,
  [SMALL_STATE(24)] = 162,
  [SMALL_STATE(25)] = 180,
  [SMALL_STATE(26)] = 198,
  [SMALL_STATE(27)] = 216,
  [SMALL_STATE(28)] = 235,
  [SMALL_STATE(29)] = 251,
  [SMALL_STATE(30)] = 267,
  [SMALL_STATE(31)] = 279,
  [SMALL_STATE(32)] = 293,
  [SMALL_STATE(33)] = 307,
  [SMALL_STATE(34)] = 316,
  [SMALL_STATE(35)] = 325,
  [SMALL_STATE(36)] = 334,
  [SMALL_STATE(37)] = 343,
  [SMALL_STATE(38)] = 352,
  [SMALL_STATE(39)] = 361,
  [SMALL_STATE(40)] = 374,
  [SMALL_STATE(41)] = 383,
  [SMALL_STATE(42)] = 396,
  [SMALL_STATE(43)] = 405,
  [SMALL_STATE(44)] = 412,
  [SMALL_STATE(45)] = 419,
  [SMALL_STATE(46)] = 423,
  [SMALL_STATE(47)] = 427,
  [SMALL_STATE(48)] = 431,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(17),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(17),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(26),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(6),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(23),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(23),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(14),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(14),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(44),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 2, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 2, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3, .production_id = 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 3, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 3),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_enum, 3),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__unquoted_string, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__unquoted_string, 1),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [174] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(18),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [189] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
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
