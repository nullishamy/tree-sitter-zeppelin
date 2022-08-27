#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_source_file_token1 = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  aux_sym_arguments_token1 = 4,
  anon_sym_DOT = 5,
  sym_open_paren = 6,
  sym_close_paren = 7,
  sym_ident = 8,
  sym_string = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym_eval_block = 12,
  sym_fn = 13,
  sym__arg = 14,
  sym_arguments = 15,
  sym_property = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_arguments_repeat1 = 18,
  aux_sym_property_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_arguments_token1] = "arguments_token1",
  [anon_sym_DOT] = ".",
  [sym_open_paren] = "open_paren",
  [sym_close_paren] = "close_paren",
  [sym_ident] = "ident",
  [sym_string] = "string",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_eval_block] = "eval_block",
  [sym_fn] = "fn",
  [sym__arg] = "_arg",
  [sym_arguments] = "arguments",
  [sym_property] = "property",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_property_repeat1] = "property_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_arguments_token1] = aux_sym_arguments_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_open_paren] = sym_open_paren,
  [sym_close_paren] = sym_close_paren,
  [sym_ident] = sym_ident,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_eval_block] = sym_eval_block,
  [sym_fn] = sym_fn,
  [sym__arg] = sym__arg,
  [sym_arguments] = sym_arguments,
  [sym_property] = sym_property,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_property_repeat1] = aux_sym_property_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
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
  [aux_sym_arguments_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_open_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_close_paren] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_eval_block] = {
    .visible = true,
    .named = true,
  },
  [sym_fn] = {
    .visible = true,
    .named = true,
  },
  [sym__arg] = {
    .visible = false,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_property_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_base = 2,
  field_name = 3,
  field_values = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_base] = "base",
  [field_name] = "name",
  [field_values] = "values",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_base, 0},
  [1] =
    {field_args, 1},
    {field_name, 0},
  [3] =
    {field_base, 0},
    {field_values, 1},
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
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ',') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '}') ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead != 0 &&
          lookahead != ')' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_arguments_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_open_paren);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_close_paren);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ident);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_arguments_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_open_paren] = ACTIONS(1),
    [sym_close_paren] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [sym_eval_block] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      aux_sym_arguments_token1,
    ACTIONS(11), 1,
      sym_close_paren,
    ACTIONS(13), 1,
      sym_ident,
    STATE(16), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(15), 2,
      sym_string,
      sym_number,
    STATE(15), 3,
      sym_fn,
      sym__arg,
      sym_property,
  [22] = 5,
    ACTIONS(19), 1,
      anon_sym_DOT,
    ACTIONS(21), 1,
      sym_open_paren,
    STATE(6), 1,
      aux_sym_property_repeat1,
    STATE(11), 1,
      sym_arguments,
    ACTIONS(17), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [40] = 4,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 2,
      sym_string,
      sym_number,
    STATE(23), 2,
      sym_fn,
      sym_property,
  [55] = 3,
    ACTIONS(13), 1,
      sym_ident,
    ACTIONS(27), 2,
      sym_string,
      sym_number,
    STATE(22), 3,
      sym_fn,
      sym__arg,
      sym_property,
  [68] = 3,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_property_repeat1,
    ACTIONS(29), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [80] = 4,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym_source_file_token1,
    ACTIONS(36), 1,
      anon_sym_LBRACE,
    STATE(7), 2,
      sym_eval_block,
      aux_sym_source_file_repeat1,
  [94] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(41), 1,
      aux_sym_source_file_token1,
    STATE(7), 2,
      sym_eval_block,
      aux_sym_source_file_repeat1,
  [108] = 3,
    ACTIONS(45), 1,
      anon_sym_DOT,
    STATE(9), 1,
      aux_sym_property_repeat1,
    ACTIONS(43), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [120] = 1,
    ACTIONS(43), 4,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      anon_sym_DOT,
      sym_close_paren,
  [127] = 1,
    ACTIONS(48), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [133] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
  [139] = 1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
      anon_sym_LBRACE,
  [145] = 1,
    ACTIONS(54), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [151] = 3,
    ACTIONS(9), 1,
      aux_sym_arguments_token1,
    ACTIONS(56), 1,
      sym_close_paren,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
  [161] = 3,
    ACTIONS(9), 1,
      aux_sym_arguments_token1,
    ACTIONS(56), 1,
      sym_close_paren,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
  [171] = 1,
    ACTIONS(58), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [177] = 3,
    ACTIONS(9), 1,
      aux_sym_arguments_token1,
    ACTIONS(60), 1,
      sym_close_paren,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
  [187] = 3,
    ACTIONS(62), 1,
      aux_sym_arguments_token1,
    ACTIONS(65), 1,
      sym_close_paren,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
  [197] = 1,
    ACTIONS(67), 3,
      anon_sym_RBRACE,
      aux_sym_arguments_token1,
      sym_close_paren,
  [203] = 1,
    ACTIONS(69), 2,
      sym_ident,
      sym_number,
  [208] = 1,
    ACTIONS(65), 2,
      aux_sym_arguments_token1,
      sym_close_paren,
  [213] = 1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
  [217] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 94,
  [SMALL_STATE(9)] = 108,
  [SMALL_STATE(10)] = 120,
  [SMALL_STATE(11)] = 127,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 145,
  [SMALL_STATE(15)] = 151,
  [SMALL_STATE(16)] = 161,
  [SMALL_STATE(17)] = 171,
  [SMALL_STATE(18)] = 177,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 208,
  [SMALL_STATE(23)] = 213,
  [SMALL_STATE(24)] = 217,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, .production_id = 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 2, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_block, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_block, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_zeppelin(void) {
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
