#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 24
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
  anon_sym_LPAREN = 4,
  anon_sym_COMMA = 5,
  anon_sym_RPAREN = 6,
  anon_sym_DOT = 7,
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
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT] = ".",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT] = anon_sym_DOT,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_args, 1},
    {field_name, 0},
  [2] =
    {field_base, 0},
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
      if (eof) ADVANCE(3);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(8);
      if (lookahead == ')') ADVANCE(10);
      if (lookahead == ',') ADVANCE(9);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '}') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(13);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DOT);
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
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_eval_block] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(9), 1,
      sym_ident,
    ACTIONS(11), 2,
      sym_string,
      sym_number,
    STATE(13), 3,
      sym_fn,
      sym__arg,
      sym_property,
  [13] = 3,
    ACTIONS(9), 1,
      sym_ident,
    ACTIONS(13), 2,
      sym_string,
      sym_number,
    STATE(20), 3,
      sym_fn,
      sym__arg,
      sym_property,
  [26] = 5,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(8), 1,
      aux_sym_property_repeat1,
    STATE(10), 1,
      sym_arguments,
    ACTIONS(17), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [43] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      aux_sym_source_file_token1,
    STATE(6), 2,
      sym_eval_block,
      aux_sym_source_file_repeat1,
  [57] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      aux_sym_source_file_token1,
    ACTIONS(30), 1,
      anon_sym_LBRACE,
    STATE(6), 2,
      sym_eval_block,
      aux_sym_source_file_repeat1,
  [71] = 3,
    ACTIONS(35), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_property_repeat1,
    ACTIONS(33), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [82] = 3,
    ACTIONS(19), 1,
      anon_sym_DOT,
    STATE(7), 1,
      aux_sym_property_repeat1,
    ACTIONS(38), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [93] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
  [103] = 1,
    ACTIONS(44), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [109] = 2,
    ACTIONS(48), 1,
      anon_sym_LBRACE,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [117] = 3,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      sym_ident,
    STATE(22), 1,
      sym_fn,
  [127] = 3,
    ACTIONS(40), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      aux_sym_arguments_repeat1,
  [137] = 1,
    ACTIONS(56), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [143] = 2,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [151] = 1,
    ACTIONS(33), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [157] = 1,
    ACTIONS(62), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [163] = 3,
    ACTIONS(64), 1,
      anon_sym_COMMA,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(18), 1,
      aux_sym_arguments_repeat1,
  [173] = 2,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(10), 1,
      sym_arguments,
  [180] = 1,
    ACTIONS(67), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [185] = 1,
    ACTIONS(69), 1,
      sym_ident,
  [189] = 1,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
  [193] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 26,
  [SMALL_STATE(5)] = 43,
  [SMALL_STATE(6)] = 57,
  [SMALL_STATE(7)] = 71,
  [SMALL_STATE(8)] = 82,
  [SMALL_STATE(9)] = 93,
  [SMALL_STATE(10)] = 103,
  [SMALL_STATE(11)] = 109,
  [SMALL_STATE(12)] = 117,
  [SMALL_STATE(13)] = 127,
  [SMALL_STATE(14)] = 137,
  [SMALL_STATE(15)] = 143,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 163,
  [SMALL_STATE(19)] = 173,
  [SMALL_STATE(20)] = 180,
  [SMALL_STATE(21)] = 185,
  [SMALL_STATE(22)] = 189,
  [SMALL_STATE(23)] = 193,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 1, .production_id = 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_property_repeat1, 2), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, .production_id = 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn, 2, .production_id = 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_block, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_block, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_eval_block, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_eval_block, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
