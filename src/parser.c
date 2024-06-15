#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 118
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 0
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym__word = 1,
  anon_sym_EXTERNPROTO = 2,
  anon_sym_PROTO = 3,
  anon_sym_LBRACK = 4,
  anon_sym_RBRACK = 5,
  anon_sym_LBRACE = 6,
  anon_sym_RBRACE = 7,
  anon_sym_PERCENT_LT = 8,
  anon_sym_PERCENT_LT_EQ = 9,
  anon_sym_GT_PERCENT = 10,
  sym_comment = 11,
  anon_sym_hidden = 12,
  sym_null = 13,
  anon_sym_TRUE = 14,
  anon_sym_FALSE = 15,
  sym_number = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_string_token1 = 18,
  anon_sym_DEF = 19,
  anon_sym_field = 20,
  anon_sym_unconnectedField = 21,
  anon_sym_vrmlField = 22,
  anon_sym_hiddenField = 23,
  anon_sym_w3dField = 24,
  anon_sym_deprecatedField = 25,
  anon_sym_exposedField = 26,
  anon_sym_MFBool = 27,
  anon_sym_MFColor = 28,
  anon_sym_MFFloat = 29,
  anon_sym_MFInt32 = 30,
  anon_sym_MFNode = 31,
  anon_sym_MFRotation = 32,
  anon_sym_MFString = 33,
  anon_sym_MFVec2f = 34,
  anon_sym_MFVec3f = 35,
  anon_sym_SFBool = 36,
  anon_sym_SFColor = 37,
  anon_sym_SFFloat = 38,
  anon_sym_SFInt32 = 39,
  anon_sym_SFNode = 40,
  anon_sym_SFRotation = 41,
  anon_sym_SFString = 42,
  anon_sym_SFVec2f = 43,
  anon_sym_SFVec3f = 44,
  anon_sym_IS = 45,
  anon_sym_USE = 46,
  sym__text_fragment = 47,
  sym_error_sentinel = 48,
  sym_source_file = 49,
  sym_extern = 50,
  sym_proto = 51,
  sym_javascript = 52,
  sym_identifier = 53,
  sym_property = 54,
  sym_boolean = 55,
  sym_string = 56,
  sym_node = 57,
  aux_sym__MFBool = 58,
  aux_sym__MFNumber = 59,
  aux_sym__MFString = 60,
  aux_sym__MFNode = 61,
  sym_vector = 62,
  sym_vecf = 63,
  sym__fieldDecl = 64,
  sym__fieldType = 65,
  sym__fieldValue = 66,
  sym_field = 67,
  sym__value = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_source_file_repeat2 = 70,
  aux_sym_proto_repeat1 = 71,
  aux_sym_node_repeat1 = 72,
  aux_sym_vecf_repeat1 = 73,
  aux_sym__fieldType_repeat1 = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_EXTERNPROTO] = "EXTERNPROTO",
  [anon_sym_PROTO] = "PROTO",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PERCENT_LT] = "%<",
  [anon_sym_PERCENT_LT_EQ] = "%<=",
  [anon_sym_GT_PERCENT] = ">%",
  [sym_comment] = "comment",
  [anon_sym_hidden] = "hidden",
  [sym_null] = "null",
  [anon_sym_TRUE] = "TRUE",
  [anon_sym_FALSE] = "FALSE",
  [sym_number] = "number",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_DEF] = "DEF",
  [anon_sym_field] = "field",
  [anon_sym_unconnectedField] = "unconnectedField",
  [anon_sym_vrmlField] = "vrmlField",
  [anon_sym_hiddenField] = "hiddenField",
  [anon_sym_w3dField] = "w3dField",
  [anon_sym_deprecatedField] = "deprecatedField",
  [anon_sym_exposedField] = "exposedField",
  [anon_sym_MFBool] = "identifier",
  [anon_sym_MFColor] = "identifier",
  [anon_sym_MFFloat] = "identifier",
  [anon_sym_MFInt32] = "identifier",
  [anon_sym_MFNode] = "identifier",
  [anon_sym_MFRotation] = "identifier",
  [anon_sym_MFString] = "identifier",
  [anon_sym_MFVec2f] = "identifier",
  [anon_sym_MFVec3f] = "identifier",
  [anon_sym_SFBool] = "identifier",
  [anon_sym_SFColor] = "identifier",
  [anon_sym_SFFloat] = "identifier",
  [anon_sym_SFInt32] = "identifier",
  [anon_sym_SFNode] = "identifier",
  [anon_sym_SFRotation] = "identifier",
  [anon_sym_SFString] = "identifier",
  [anon_sym_SFVec2f] = "identifier",
  [anon_sym_SFVec3f] = "identifier",
  [anon_sym_IS] = "IS",
  [anon_sym_USE] = "USE",
  [sym__text_fragment] = "code",
  [sym_error_sentinel] = "error_sentinel",
  [sym_source_file] = "source_file",
  [sym_extern] = "extern",
  [sym_proto] = "proto",
  [sym_javascript] = "javascript",
  [sym_identifier] = "identifier",
  [sym_property] = "property",
  [sym_boolean] = "boolean",
  [sym_string] = "string",
  [sym_node] = "node",
  [aux_sym__MFBool] = "_MFBool",
  [aux_sym__MFNumber] = "_MFNumber",
  [aux_sym__MFString] = "_MFString",
  [aux_sym__MFNode] = "_MFNode",
  [sym_vector] = "vector",
  [sym_vecf] = "vector",
  [sym__fieldDecl] = "identifier",
  [sym__fieldType] = "type",
  [sym__fieldValue] = "_fieldValue",
  [sym_field] = "field",
  [sym__value] = "_value",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_proto_repeat1] = "proto_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_vecf_repeat1] = "vecf_repeat1",
  [aux_sym__fieldType_repeat1] = "_fieldType_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_EXTERNPROTO] = anon_sym_EXTERNPROTO,
  [anon_sym_PROTO] = anon_sym_PROTO,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PERCENT_LT] = anon_sym_PERCENT_LT,
  [anon_sym_PERCENT_LT_EQ] = anon_sym_PERCENT_LT_EQ,
  [anon_sym_GT_PERCENT] = anon_sym_GT_PERCENT,
  [sym_comment] = sym_comment,
  [anon_sym_hidden] = anon_sym_hidden,
  [sym_null] = sym_null,
  [anon_sym_TRUE] = anon_sym_TRUE,
  [anon_sym_FALSE] = anon_sym_FALSE,
  [sym_number] = sym_number,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_DEF] = anon_sym_DEF,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_unconnectedField] = anon_sym_unconnectedField,
  [anon_sym_vrmlField] = anon_sym_vrmlField,
  [anon_sym_hiddenField] = anon_sym_hiddenField,
  [anon_sym_w3dField] = anon_sym_w3dField,
  [anon_sym_deprecatedField] = anon_sym_deprecatedField,
  [anon_sym_exposedField] = anon_sym_exposedField,
  [anon_sym_MFBool] = sym_identifier,
  [anon_sym_MFColor] = sym_identifier,
  [anon_sym_MFFloat] = sym_identifier,
  [anon_sym_MFInt32] = sym_identifier,
  [anon_sym_MFNode] = sym_identifier,
  [anon_sym_MFRotation] = sym_identifier,
  [anon_sym_MFString] = sym_identifier,
  [anon_sym_MFVec2f] = sym_identifier,
  [anon_sym_MFVec3f] = sym_identifier,
  [anon_sym_SFBool] = sym_identifier,
  [anon_sym_SFColor] = sym_identifier,
  [anon_sym_SFFloat] = sym_identifier,
  [anon_sym_SFInt32] = sym_identifier,
  [anon_sym_SFNode] = sym_identifier,
  [anon_sym_SFRotation] = sym_identifier,
  [anon_sym_SFString] = sym_identifier,
  [anon_sym_SFVec2f] = sym_identifier,
  [anon_sym_SFVec3f] = sym_identifier,
  [anon_sym_IS] = anon_sym_IS,
  [anon_sym_USE] = anon_sym_USE,
  [sym__text_fragment] = sym__text_fragment,
  [sym_error_sentinel] = sym_error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym_extern] = sym_extern,
  [sym_proto] = sym_proto,
  [sym_javascript] = sym_javascript,
  [sym_identifier] = sym_identifier,
  [sym_property] = sym_property,
  [sym_boolean] = sym_boolean,
  [sym_string] = sym_string,
  [sym_node] = sym_node,
  [aux_sym__MFBool] = aux_sym__MFBool,
  [aux_sym__MFNumber] = aux_sym__MFNumber,
  [aux_sym__MFString] = aux_sym__MFString,
  [aux_sym__MFNode] = aux_sym__MFNode,
  [sym_vector] = sym_vector,
  [sym_vecf] = sym_vector,
  [sym__fieldDecl] = sym_identifier,
  [sym__fieldType] = sym__fieldType,
  [sym__fieldValue] = sym__fieldValue,
  [sym_field] = sym_field,
  [sym__value] = sym__value,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_proto_repeat1] = aux_sym_proto_repeat1,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_vecf_repeat1] = aux_sym_vecf_repeat1,
  [aux_sym__fieldType_repeat1] = aux_sym__fieldType_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EXTERNPROTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PROTO] = {
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
  [anon_sym_PERCENT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hidden] = {
    .visible = true,
    .named = false,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TRUE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FALSE] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DEF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unconnectedField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vrmlField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_hiddenField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w3dField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deprecatedField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exposedField] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MFBool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFFloat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFInt32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFNode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFRotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFString] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFVec2f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_MFVec3f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFBool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFColor] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFFloat] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFInt32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFNode] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFRotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFString] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFVec2f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SFVec3f] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_USE] = {
    .visible = true,
    .named = false,
  },
  [sym__text_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_error_sentinel] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_extern] = {
    .visible = true,
    .named = true,
  },
  [sym_proto] = {
    .visible = true,
    .named = true,
  },
  [sym_javascript] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__MFBool] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__MFNumber] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__MFString] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__MFNode] = {
    .visible = false,
    .named = false,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_vecf] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldDecl] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldType] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldValue] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proto_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vecf_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__fieldType_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_proto = 2,
  field_string_content = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_proto] = "proto",
  [field_string_content] = "string_content",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_string_content, 1},
  [1] =
    {field_proto, 1},
  [2] =
    {field_name, 2},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 8,
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
  [29] = 23,
  [30] = 30,
  [31] = 24,
  [32] = 18,
  [33] = 14,
  [34] = 17,
  [35] = 21,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 15,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 51,
  [53] = 53,
  [54] = 41,
  [55] = 49,
  [56] = 56,
  [57] = 57,
  [58] = 43,
  [59] = 44,
  [60] = 60,
  [61] = 53,
  [62] = 28,
  [63] = 22,
  [64] = 26,
  [65] = 21,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 19,
  [70] = 13,
  [71] = 68,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 80,
  [82] = 76,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 85,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 101,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 105,
  [113] = 109,
  [114] = 111,
  [115] = 106,
  [116] = 116,
  [117] = 99,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      ADVANCE_MAP(
        '"', 23,
        '#', 1,
        '%', 4,
        '.', 6,
        '>', 2,
        '[', 9,
        ']', 10,
        '{', 11,
        '}', 12,
        '+', 3,
        '-', 3,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PERCENT_LT);
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PERCENT_LT_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT_PERCENT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(5);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ADVANCE_MAP(
        'D', 1,
        'E', 2,
        'F', 3,
        'I', 4,
        'M', 5,
        'N', 6,
        'P', 7,
        'S', 8,
        'T', 9,
        'U', 10,
        'd', 11,
        'e', 12,
        'f', 13,
        'h', 14,
        'u', 15,
        'v', 16,
        'w', 17,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'X') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'S') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'F') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(37);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'B', 38,
        'C', 39,
        'F', 40,
        'I', 41,
        'N', 42,
        'R', 43,
        'S', 44,
        'V', 45,
      );
      END_STATE();
    case 23:
      if (lookahead == 'L') ADVANCE(46);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'B', 48,
        'C', 49,
        'F', 50,
        'I', 51,
        'N', 52,
        'R', 53,
        'S', 54,
        'V', 55,
      );
      END_STATE();
    case 26:
      if (lookahead == 'U') ADVANCE(56);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 28:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 31:
      if (lookahead == 'd') ADVANCE(61);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(64);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DEF);
      END_STATE();
    case 36:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 37:
      if (lookahead == 'S') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(67);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(75);
      END_STATE();
    case 47:
      if (lookahead == 'T') ADVANCE(76);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(79);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 56:
      if (lookahead == 'E') ADVANCE(85);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 61:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 64:
      if (lookahead == 'F') ADVANCE(92);
      END_STATE();
    case 65:
      if (lookahead == 'R') ADVANCE(93);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(98);
      END_STATE();
    case 71:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(102);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 76:
      if (lookahead == 'O') ADVANCE(103);
      END_STATE();
    case 77:
      if (lookahead == 'o') ADVANCE(104);
      END_STATE();
    case 78:
      if (lookahead == 'l') ADVANCE(105);
      END_STATE();
    case 79:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 81:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 84:
      if (lookahead == 'c') ADVANCE(111);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(114);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(115);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == 'F') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(119);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 95:
      if (lookahead == 'l') ADVANCE(120);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(122);
      END_STATE();
    case 98:
      if (lookahead == '3') ADVANCE(123);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(125);
      END_STATE();
    case 101:
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 102:
      if (lookahead == '2') ADVANCE(127);
      if (lookahead == '3') ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PROTO);
      END_STATE();
    case 104:
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 105:
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 107:
      if (lookahead == '3') ADVANCE(132);
      END_STATE();
    case 108:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(135);
      END_STATE();
    case 111:
      if (lookahead == '2') ADVANCE(136);
      if (lookahead == '3') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(141);
      END_STATE();
    case 117:
      if (lookahead == 'i') ADVANCE(142);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 119:
      if (lookahead == 'P') ADVANCE(144);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_MFBool);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == '2') ADVANCE(147);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_MFNode);
      END_STATE();
    case 125:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 127:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 128:
      if (lookahead == 'f') ADVANCE(151);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_SFBool);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(153);
      END_STATE();
    case 132:
      if (lookahead == '2') ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_SFNode);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 135:
      if (lookahead == 'n') ADVANCE(156);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 137:
      if (lookahead == 'f') ADVANCE(158);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == 'F') ADVANCE(161);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(162);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 'R') ADVANCE(165);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_MFColor);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_MFFloat);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_MFInt32);
      END_STATE();
    case 148:
      if (lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 149:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_MFVec2f);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_MFVec3f);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SFColor);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SFFloat);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_SFInt32);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 156:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SFVec2f);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SFVec3f);
      END_STATE();
    case 159:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 160:
      if (lookahead == 'F') ADVANCE(171);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(172);
      END_STATE();
    case 162:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 164:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 165:
      if (lookahead == 'O') ADVANCE(176);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_MFString);
      END_STATE();
    case 168:
      if (lookahead == 'o') ADVANCE(178);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_SFString);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(180);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(181);
      END_STATE();
    case 173:
      if (lookahead == 't') ADVANCE(182);
      END_STATE();
    case 174:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_w3dField);
      END_STATE();
    case 176:
      if (lookahead == 'T') ADVANCE(184);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(185);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(186);
      END_STATE();
    case 179:
      if (lookahead == 'd') ADVANCE(187);
      END_STATE();
    case 180:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 182:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_vrmlField);
      END_STATE();
    case 184:
      if (lookahead == 'O') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_MFRotation);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SFRotation);
      END_STATE();
    case 187:
      if (lookahead == 'F') ADVANCE(192);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 189:
      if (lookahead == 'd') ADVANCE(194);
      END_STATE();
    case 190:
      if (lookahead == 'd') ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_EXTERNPROTO);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_hiddenField);
      END_STATE();
    case 195:
      if (lookahead == 'F') ADVANCE(198);
      END_STATE();
    case 196:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_exposedField);
      END_STATE();
    case 198:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(201);
      END_STATE();
    case 200:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_deprecatedField);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_unconnectedField);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
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
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
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
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 25},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 25},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_EXTERNPROTO] = ACTIONS(1),
    [anon_sym_PROTO] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PERCENT_LT] = ACTIONS(1),
    [anon_sym_PERCENT_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_PERCENT] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_hidden] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [anon_sym_TRUE] = ACTIONS(1),
    [anon_sym_FALSE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DEF] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_unconnectedField] = ACTIONS(1),
    [anon_sym_vrmlField] = ACTIONS(1),
    [anon_sym_hiddenField] = ACTIONS(1),
    [anon_sym_w3dField] = ACTIONS(1),
    [anon_sym_deprecatedField] = ACTIONS(1),
    [anon_sym_exposedField] = ACTIONS(1),
    [anon_sym_MFBool] = ACTIONS(1),
    [anon_sym_MFColor] = ACTIONS(1),
    [anon_sym_MFFloat] = ACTIONS(1),
    [anon_sym_MFInt32] = ACTIONS(1),
    [anon_sym_MFNode] = ACTIONS(1),
    [anon_sym_MFRotation] = ACTIONS(1),
    [anon_sym_MFString] = ACTIONS(1),
    [anon_sym_MFVec2f] = ACTIONS(1),
    [anon_sym_MFVec3f] = ACTIONS(1),
    [anon_sym_SFBool] = ACTIONS(1),
    [anon_sym_SFColor] = ACTIONS(1),
    [anon_sym_SFFloat] = ACTIONS(1),
    [anon_sym_SFInt32] = ACTIONS(1),
    [anon_sym_SFNode] = ACTIONS(1),
    [anon_sym_SFRotation] = ACTIONS(1),
    [anon_sym_SFString] = ACTIONS(1),
    [anon_sym_SFVec2f] = ACTIONS(1),
    [anon_sym_SFVec3f] = ACTIONS(1),
    [anon_sym_IS] = ACTIONS(1),
    [anon_sym_USE] = ACTIONS(1),
    [sym__text_fragment] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(98),
    [sym_extern] = STATE(30),
    [sym_proto] = STATE(104),
    [sym_javascript] = STATE(76),
    [sym_identifier] = STATE(109),
    [sym_node] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(30),
    [aux_sym_source_file_repeat2] = STATE(50),
    [sym__word] = ACTIONS(5),
    [anon_sym_EXTERNPROTO] = ACTIONS(7),
    [anon_sym_PROTO] = ACTIONS(9),
    [anon_sym_PERCENT_LT] = ACTIONS(11),
    [anon_sym_PERCENT_LT_EQ] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DEF] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(25), 1,
      sym_null,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DEF,
    STATE(15), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(35), 2,
      anon_sym_IS,
      anon_sym_USE,
    STATE(4), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [54] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__word,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(45), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(48), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(51), 1,
      sym_null,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(60), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_DEF,
    STATE(15), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(54), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(66), 2,
      anon_sym_IS,
      anon_sym_USE,
    STATE(3), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [108] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(29), 1,
      sym_number,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    ACTIONS(71), 1,
      sym_null,
    STATE(15), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(35), 2,
      anon_sym_IS,
      anon_sym_USE,
    STATE(3), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [162] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(73), 1,
      sym_null,
    ACTIONS(75), 1,
      sym_number,
    STATE(45), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(35), 2,
      anon_sym_IS,
      anon_sym_USE,
    STATE(90), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [212] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(17), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(77), 1,
      sym_null,
    STATE(45), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(35), 2,
      anon_sym_IS,
      anon_sym_USE,
    STATE(88), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [262] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(89), 1,
      sym__fieldType,
    ACTIONS(79), 18,
      anon_sym_MFBool,
      anon_sym_MFColor,
      anon_sym_MFFloat,
      anon_sym_MFInt32,
      anon_sym_MFNode,
      anon_sym_MFRotation,
      anon_sym_MFString,
      anon_sym_MFVec2f,
      anon_sym_MFVec3f,
      anon_sym_SFBool,
      anon_sym_SFColor,
      anon_sym_SFFloat,
      anon_sym_SFInt32,
      anon_sym_SFNode,
      anon_sym_SFRotation,
      anon_sym_SFString,
      anon_sym_SFVec2f,
      anon_sym_SFVec3f,
  [289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(83), 12,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [316] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    ACTIONS(87), 1,
      sym_number,
    STATE(40), 1,
      sym_javascript,
    STATE(80), 1,
      aux_sym__MFNumber,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(68), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(73), 2,
      sym_string,
      aux_sym__MFString,
  [366] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      sym_number,
    STATE(40), 1,
      sym_javascript,
    STATE(81), 1,
      aux_sym__MFNumber,
    STATE(113), 1,
      sym_identifier,
    ACTIONS(27), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(44), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(71), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(75), 2,
      sym_string,
      aux_sym__MFString,
  [416] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 18,
      anon_sym_MFBool,
      anon_sym_MFColor,
      anon_sym_MFFloat,
      anon_sym_MFInt32,
      anon_sym_MFNode,
      anon_sym_MFRotation,
      anon_sym_MFString,
      anon_sym_MFVec2f,
      anon_sym_MFVec3f,
      anon_sym_SFBool,
      anon_sym_SFColor,
      anon_sym_SFFloat,
      anon_sym_SFInt32,
      anon_sym_SFNode,
      anon_sym_SFRotation,
      anon_sym_SFString,
      anon_sym_SFVec2f,
      anon_sym_SFVec3f,
  [440] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_DEF,
    ACTIONS(95), 1,
      anon_sym_LBRACK,
    ACTIONS(97), 1,
      sym_null,
    ACTIONS(101), 1,
      sym_number,
    ACTIONS(103), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_javascript,
    STATE(109), 1,
      sym_identifier,
    ACTIONS(99), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(72), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__fieldValue,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(105), 11,
      anon_sym_EXTERNPROTO,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [511] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(116), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(119), 1,
      sym_number,
    STATE(14), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(111), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(109), 8,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [543] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(128), 1,
      sym_number,
    STATE(21), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(124), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(122), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(83), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(130), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(134), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [647] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(138), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [670] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 6,
      anon_sym_LBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(142), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [693] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(146), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(144), 8,
      anon_sym_PERCENT_LT,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [718] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(128), 1,
      sym_number,
    STATE(21), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(124), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(122), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [749] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(148), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(152), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [795] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(156), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [817] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(160), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [839] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(166), 1,
      sym_number,
    STATE(35), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(164), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(168), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_DEF,
      anon_sym_IS,
      anon_sym_USE,
  [891] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(148), 10,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [912] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(7), 1,
      anon_sym_EXTERNPROTO,
    ACTIONS(9), 1,
      anon_sym_PROTO,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_DEF,
    STATE(76), 1,
      sym_javascript,
    STATE(109), 1,
      sym_identifier,
    STATE(116), 1,
      sym_proto,
    STATE(57), 2,
      sym_node,
      aux_sym_source_file_repeat2,
    STATE(67), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
  [951] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(152), 10,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(134), 10,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [993] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(175), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(178), 1,
      sym_number,
    STATE(33), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(111), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1020] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(130), 10,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(181), 1,
      sym_number,
    STATE(33), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(146), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1068] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(166), 1,
      sym_number,
    STATE(35), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(164), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__fieldDecl,
    STATE(38), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(185), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1118] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__fieldDecl,
    STATE(39), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(185), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_RBRACK,
    STATE(7), 1,
      sym__fieldDecl,
    STATE(39), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(191), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1164] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 2,
      sym__word,
      anon_sym_DEF,
    ACTIONS(196), 2,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(206), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
  [1192] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    ACTIONS(214), 1,
      anon_sym_hidden,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(47), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(43), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1250] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__word,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(226), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(229), 1,
      anon_sym_DEF,
    STATE(82), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(43), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1279] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(56), 2,
      sym_node,
      aux_sym__MFNode,
  [1308] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(122), 2,
      sym__word,
      anon_sym_hidden,
    STATE(65), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
  [1335] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(43), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1364] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym__word,
    ACTIONS(241), 1,
      anon_sym_RBRACE,
    ACTIONS(243), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(246), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(249), 1,
      anon_sym_hidden,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(47), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1393] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(42), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1422] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(41), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_DEF,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_javascript,
    STATE(109), 1,
      sym_identifier,
    STATE(58), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1480] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(47), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1509] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(47), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1538] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(51), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1567] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(47), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1596] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(54), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1625] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__word,
    ACTIONS(271), 1,
      anon_sym_RBRACK,
    ACTIONS(273), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(276), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(279), 1,
      anon_sym_DEF,
    STATE(79), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(56), 2,
      sym_node,
      aux_sym__MFNode,
  [1654] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_DEF,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      sym_javascript,
    STATE(109), 1,
      sym_identifier,
    STATE(58), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1683] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__word,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(287), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(290), 1,
      anon_sym_DEF,
    STATE(76), 1,
      sym_javascript,
    STATE(109), 1,
      sym_identifier,
    STATE(58), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1712] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(56), 2,
      sym_node,
      aux_sym__MFNode,
  [1741] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DEF,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_javascript,
    STATE(113), 1,
      sym_identifier,
    STATE(46), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1770] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(214), 1,
      anon_sym_hidden,
    ACTIONS(295), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
    STATE(52), 2,
      sym_property,
      aux_sym_node_repeat1,
  [1799] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1813] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(124), 1,
      anon_sym_RBRACE,
    ACTIONS(234), 1,
      sym_number,
    ACTIONS(122), 2,
      sym__word,
      anon_sym_hidden,
    STATE(65), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
  [1837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1851] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 1,
      sym_number,
    ACTIONS(146), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    STATE(14), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(144), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [1871] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      anon_sym_RBRACK,
    ACTIONS(301), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(304), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(307), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(66), 3,
      sym_javascript,
      sym_boolean,
      aux_sym__MFBool,
  [1893] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_EXTERNPROTO,
    ACTIONS(315), 1,
      anon_sym_PERCENT_LT_EQ,
    STATE(67), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    ACTIONS(310), 4,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
  [1913] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(66), 3,
      sym_javascript,
      sym_boolean,
      aux_sym__MFBool,
  [1935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1963] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    ACTIONS(317), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(66), 3,
      sym_javascript,
      sym_boolean,
      aux_sym__MFBool,
  [1985] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1999] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(74), 3,
      sym_javascript,
      sym_string,
      aux_sym__MFString,
  [2020] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      anon_sym_RBRACK,
    ACTIONS(323), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(326), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(74), 3,
      sym_javascript,
      sym_string,
      aux_sym__MFString,
  [2041] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    STATE(74), 3,
      sym_javascript,
      sym_string,
      aux_sym__MFString,
  [2062] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(334), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
  [2078] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(336), 5,
      anon_sym_EXTERNPROTO,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
  [2092] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_RBRACK,
    ACTIONS(342), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(345), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(348), 1,
      sym_number,
    STATE(78), 2,
      sym_javascript,
      aux_sym__MFNumber,
  [2112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(351), 2,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(194), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
  [2128] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      sym_number,
    STATE(78), 2,
      sym_javascript,
      aux_sym__MFNumber,
  [2148] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(232), 1,
      anon_sym_RBRACK,
    ACTIONS(353), 1,
      sym_number,
    STATE(78), 2,
      sym_javascript,
      aux_sym__MFNumber,
  [2168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      anon_sym_LBRACE,
    ACTIONS(332), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(334), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_DEF,
  [2184] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(5), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
  [2203] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(106), 1,
      sym_identifier,
  [2222] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(86), 1,
      sym_identifier,
  [2241] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(115), 1,
      sym_identifier,
  [2260] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(25), 1,
      sym_identifier,
  [2279] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(357), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [2292] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(12), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
  [2311] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(361), 3,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
  [2324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(103), 1,
      sym_identifier,
  [2343] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(355), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(84), 1,
      sym_identifier,
  [2362] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      anon_sym_LBRACE,
    ACTIONS(369), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(365), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2376] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(371), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(375), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2398] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      sym_string,
  [2408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      ts_builtin_sym_end,
  [2415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      ts_builtin_sym_end,
  [2422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_GT_PERCENT,
  [2429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      ts_builtin_sym_end,
  [2436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DQUOTE,
  [2443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LBRACE,
  [2450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
  [2457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [2464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym__text_fragment,
  [2471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(395), 1,
      anon_sym_LBRACE,
  [2478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      anon_sym_DQUOTE,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_LBRACE,
  [2492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      anon_sym_LBRACE,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(403), 1,
      ts_builtin_sym_end,
  [2506] = 2,
    ACTIONS(405), 1,
      sym_comment,
    ACTIONS(407), 1,
      aux_sym_string_token1,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      sym__text_fragment,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_LBRACE,
  [2527] = 2,
    ACTIONS(405), 1,
      sym_comment,
    ACTIONS(413), 1,
      aux_sym_string_token1,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(415), 1,
      anon_sym_LBRACE,
  [2541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(417), 1,
      anon_sym_GT_PERCENT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 108,
  [SMALL_STATE(5)] = 162,
  [SMALL_STATE(6)] = 212,
  [SMALL_STATE(7)] = 262,
  [SMALL_STATE(8)] = 289,
  [SMALL_STATE(9)] = 316,
  [SMALL_STATE(10)] = 366,
  [SMALL_STATE(11)] = 416,
  [SMALL_STATE(12)] = 440,
  [SMALL_STATE(13)] = 486,
  [SMALL_STATE(14)] = 511,
  [SMALL_STATE(15)] = 543,
  [SMALL_STATE(16)] = 577,
  [SMALL_STATE(17)] = 601,
  [SMALL_STATE(18)] = 624,
  [SMALL_STATE(19)] = 647,
  [SMALL_STATE(20)] = 670,
  [SMALL_STATE(21)] = 693,
  [SMALL_STATE(22)] = 718,
  [SMALL_STATE(23)] = 749,
  [SMALL_STATE(24)] = 772,
  [SMALL_STATE(25)] = 795,
  [SMALL_STATE(26)] = 817,
  [SMALL_STATE(27)] = 839,
  [SMALL_STATE(28)] = 869,
  [SMALL_STATE(29)] = 891,
  [SMALL_STATE(30)] = 912,
  [SMALL_STATE(31)] = 951,
  [SMALL_STATE(32)] = 972,
  [SMALL_STATE(33)] = 993,
  [SMALL_STATE(34)] = 1020,
  [SMALL_STATE(35)] = 1041,
  [SMALL_STATE(36)] = 1068,
  [SMALL_STATE(37)] = 1095,
  [SMALL_STATE(38)] = 1118,
  [SMALL_STATE(39)] = 1141,
  [SMALL_STATE(40)] = 1164,
  [SMALL_STATE(41)] = 1192,
  [SMALL_STATE(42)] = 1221,
  [SMALL_STATE(43)] = 1250,
  [SMALL_STATE(44)] = 1279,
  [SMALL_STATE(45)] = 1308,
  [SMALL_STATE(46)] = 1335,
  [SMALL_STATE(47)] = 1364,
  [SMALL_STATE(48)] = 1393,
  [SMALL_STATE(49)] = 1422,
  [SMALL_STATE(50)] = 1451,
  [SMALL_STATE(51)] = 1480,
  [SMALL_STATE(52)] = 1509,
  [SMALL_STATE(53)] = 1538,
  [SMALL_STATE(54)] = 1567,
  [SMALL_STATE(55)] = 1596,
  [SMALL_STATE(56)] = 1625,
  [SMALL_STATE(57)] = 1654,
  [SMALL_STATE(58)] = 1683,
  [SMALL_STATE(59)] = 1712,
  [SMALL_STATE(60)] = 1741,
  [SMALL_STATE(61)] = 1770,
  [SMALL_STATE(62)] = 1799,
  [SMALL_STATE(63)] = 1813,
  [SMALL_STATE(64)] = 1837,
  [SMALL_STATE(65)] = 1851,
  [SMALL_STATE(66)] = 1871,
  [SMALL_STATE(67)] = 1893,
  [SMALL_STATE(68)] = 1913,
  [SMALL_STATE(69)] = 1935,
  [SMALL_STATE(70)] = 1949,
  [SMALL_STATE(71)] = 1963,
  [SMALL_STATE(72)] = 1985,
  [SMALL_STATE(73)] = 1999,
  [SMALL_STATE(74)] = 2020,
  [SMALL_STATE(75)] = 2041,
  [SMALL_STATE(76)] = 2062,
  [SMALL_STATE(77)] = 2078,
  [SMALL_STATE(78)] = 2092,
  [SMALL_STATE(79)] = 2112,
  [SMALL_STATE(80)] = 2128,
  [SMALL_STATE(81)] = 2148,
  [SMALL_STATE(82)] = 2168,
  [SMALL_STATE(83)] = 2184,
  [SMALL_STATE(84)] = 2203,
  [SMALL_STATE(85)] = 2222,
  [SMALL_STATE(86)] = 2241,
  [SMALL_STATE(87)] = 2260,
  [SMALL_STATE(88)] = 2279,
  [SMALL_STATE(89)] = 2292,
  [SMALL_STATE(90)] = 2311,
  [SMALL_STATE(91)] = 2324,
  [SMALL_STATE(92)] = 2343,
  [SMALL_STATE(93)] = 2362,
  [SMALL_STATE(94)] = 2376,
  [SMALL_STATE(95)] = 2387,
  [SMALL_STATE(96)] = 2398,
  [SMALL_STATE(97)] = 2408,
  [SMALL_STATE(98)] = 2415,
  [SMALL_STATE(99)] = 2422,
  [SMALL_STATE(100)] = 2429,
  [SMALL_STATE(101)] = 2436,
  [SMALL_STATE(102)] = 2443,
  [SMALL_STATE(103)] = 2450,
  [SMALL_STATE(104)] = 2457,
  [SMALL_STATE(105)] = 2464,
  [SMALL_STATE(106)] = 2471,
  [SMALL_STATE(107)] = 2478,
  [SMALL_STATE(108)] = 2485,
  [SMALL_STATE(109)] = 2492,
  [SMALL_STATE(110)] = 2499,
  [SMALL_STATE(111)] = 2506,
  [SMALL_STATE(112)] = 2513,
  [SMALL_STATE(113)] = 2520,
  [SMALL_STATE(114)] = 2527,
  [SMALL_STATE(115)] = 2534,
  [SMALL_STATE(116)] = 2541,
  [SMALL_STATE(117)] = 2548,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(85),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript, 3, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldDecl, 1, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vecf, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vecf, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldValue, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(105),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFNode, 1, 0, 0),
  [196] = {.entry = {.count = 4, .reusable = true}}, REDUCE(aux_sym__MFBool, 1, 0, 0), REDUCE(aux_sym__MFNumber, 1, 0, 0), REDUCE(aux_sym__MFString, 1, 0, 0), REDUCE(aux_sym__MFNode, 1, 0, 0),
  [201] = {.entry = {.count = 4, .reusable = false}}, REDUCE(aux_sym__MFBool, 1, 0, 0), REDUCE(aux_sym__MFNumber, 1, 0, 0), REDUCE(aux_sym__MFString, 1, 0, 0), REDUCE(aux_sym__MFNode, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFBool, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [218] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [223] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [246] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [249] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(83),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(20),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(112),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(112),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(85),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(105),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(92),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(105),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(105),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(19),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 3),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0),
  [323] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(105),
  [326] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(105),
  [329] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(111),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2, 0, 0),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 2, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(105),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(105),
  [348] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(78),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 1, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 0),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 0),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 0),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 0),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 1, 0, 0),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [369] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldType, 1, 0, 0),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 4, 0, 0),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldType, 4, 0, 0),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 3, 0, 0),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldType, 3, 0, 0),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 6, 0, 2),
  [381] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 8, 0, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 7, 0, 2),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__text_fragment = 0,
  ts_external_token_error_sentinel = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_fragment] = sym__text_fragment,
  [ts_external_token_error_sentinel] = sym_error_sentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_fragment] = true,
    [ts_external_token_error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__text_fragment] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_wbproto_external_scanner_create(void);
void tree_sitter_wbproto_external_scanner_destroy(void *);
bool tree_sitter_wbproto_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_wbproto_external_scanner_serialize(void *, char *);
void tree_sitter_wbproto_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_wbproto(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym__word,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_wbproto_external_scanner_create,
      tree_sitter_wbproto_external_scanner_destroy,
      tree_sitter_wbproto_external_scanner_scan,
      tree_sitter_wbproto_external_scanner_serialize,
      tree_sitter_wbproto_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
