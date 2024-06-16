#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 124
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 6

enum ts_symbol_identifiers {
  sym__word = 1,
  anon_sym_IMPORTABLE = 2,
  anon_sym_EXTERNPROTO = 3,
  anon_sym_PROTO = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_PERCENT_LT = 9,
  anon_sym_PERCENT_LT_EQ = 10,
  anon_sym_GT_PERCENT = 11,
  sym_comment = 12,
  anon_sym_hidden = 13,
  sym_null = 14,
  anon_sym_TRUE = 15,
  anon_sym_FALSE = 16,
  sym_number = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_string_token1 = 19,
  anon_sym_USE = 20,
  anon_sym_DEF = 21,
  anon_sym_field = 22,
  anon_sym_unconnectedField = 23,
  anon_sym_vrmlField = 24,
  anon_sym_hiddenField = 25,
  anon_sym_w3dField = 26,
  anon_sym_deprecatedField = 27,
  anon_sym_exposedField = 28,
  anon_sym_MFBool = 29,
  anon_sym_MFColor = 30,
  anon_sym_MFFloat = 31,
  anon_sym_MFInt32 = 32,
  anon_sym_MFNode = 33,
  anon_sym_MFRotation = 34,
  anon_sym_MFString = 35,
  anon_sym_MFVec2f = 36,
  anon_sym_MFVec3f = 37,
  anon_sym_SFBool = 38,
  anon_sym_SFColor = 39,
  anon_sym_SFFloat = 40,
  anon_sym_SFInt32 = 41,
  anon_sym_SFNode = 42,
  anon_sym_SFRotation = 43,
  anon_sym_SFString = 44,
  anon_sym_SFVec2f = 45,
  anon_sym_SFVec3f = 46,
  anon_sym_IS = 47,
  sym__text_fragment = 48,
  sym_error_sentinel = 49,
  sym_source_file = 50,
  sym_extern = 51,
  sym_proto = 52,
  sym_javascript = 53,
  sym_identifier = 54,
  sym_property = 55,
  sym_boolean = 56,
  sym_string = 57,
  sym_node = 58,
  aux_sym__MFBool = 59,
  aux_sym__MFNumber = 60,
  aux_sym__MFString = 61,
  aux_sym__MFNode = 62,
  sym_vector = 63,
  sym_vecf = 64,
  sym__fieldDecl = 65,
  sym__fieldType = 66,
  sym__fieldValue = 67,
  sym_field = 68,
  sym__value = 69,
  aux_sym_source_file_repeat1 = 70,
  aux_sym_source_file_repeat2 = 71,
  aux_sym_extern_repeat1 = 72,
  aux_sym_proto_repeat1 = 73,
  aux_sym_node_repeat1 = 74,
  aux_sym_vecf_repeat1 = 75,
  aux_sym__fieldType_repeat1 = 76,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__word] = "_word",
  [anon_sym_IMPORTABLE] = "IMPORTABLE",
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
  [anon_sym_USE] = "USE",
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
  [aux_sym_extern_repeat1] = "extern_repeat1",
  [aux_sym_proto_repeat1] = "proto_repeat1",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_vecf_repeat1] = "vecf_repeat1",
  [aux_sym__fieldType_repeat1] = "_fieldType_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__word] = sym__word,
  [anon_sym_IMPORTABLE] = anon_sym_IMPORTABLE,
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
  [anon_sym_USE] = anon_sym_USE,
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
  [aux_sym_extern_repeat1] = aux_sym_extern_repeat1,
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
  [anon_sym_IMPORTABLE] = {
    .visible = true,
    .named = false,
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
  [anon_sym_USE] = {
    .visible = true,
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
  [aux_sym_extern_repeat1] = {
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
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 1},
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
  [1] = {
    [0] = sym_identifier,
  },
  [3] = {
    [1] = sym_identifier,
  },
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
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 7,
  [19] = 19,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 19,
  [30] = 27,
  [31] = 31,
  [32] = 23,
  [33] = 33,
  [34] = 34,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 24,
  [39] = 14,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 52,
  [55] = 45,
  [56] = 16,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 22,
  [61] = 24,
  [62] = 21,
  [63] = 12,
  [64] = 58,
  [65] = 36,
  [66] = 66,
  [67] = 34,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 71,
  [72] = 70,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 75,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 77,
  [82] = 80,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 85,
  [87] = 78,
  [88] = 88,
  [89] = 89,
  [90] = 83,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 79,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 102,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 108,
  [118] = 112,
  [119] = 106,
  [120] = 110,
  [121] = 114,
  [122] = 122,
  [123] = 123,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '"', 22,
        '#', 17,
        '%', 3,
        '.', 5,
        '>', 1,
        '[', 8,
        ']', 9,
        '{', 10,
        '}', 11,
        '+', 2,
        '-', 2,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == '<') ADVANCE(12);
      END_STATE();
    case 4:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_PERCENT_LT);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_PERCENT_LT_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_GT_PERCENT);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '"') ADVANCE(17);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'i' ||
          lookahead == 'j') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ',') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '#') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(24);
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
      if (lookahead == 'M') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'U') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'F') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'S') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == '3') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'L') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_IS);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        'B', 40,
        'C', 41,
        'F', 42,
        'I', 43,
        'N', 44,
        'R', 45,
        'S', 46,
        'V', 47,
      );
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        'B', 50,
        'C', 51,
        'F', 52,
        'I', 53,
        'N', 54,
        'R', 55,
        'S', 56,
        'V', 57,
      );
      END_STATE();
    case 27:
      if (lookahead == 'U') ADVANCE(58);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(65);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DEF);
      END_STATE();
    case 37:
      if (lookahead == 'E') ADVANCE(67);
      END_STATE();
    case 38:
      if (lookahead == 'S') ADVANCE(68);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(69);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(79);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(80);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 58:
      if (lookahead == 'E') ADVANCE(88);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_USE);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(91);
      END_STATE();
    case 63:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(95);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(99);
      END_STATE();
    case 71:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(101);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(104);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 79:
      if (lookahead == 'O') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(108);
      END_STATE();
    case 81:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 87:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_TRUE);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 90:
      if (lookahead == 's') ADVANCE(117);
      END_STATE();
    case 91:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 93:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 94:
      if (lookahead == 'F') ADVANCE(121);
      END_STATE();
    case 95:
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 96:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_FALSE);
      END_STATE();
    case 98:
      if (lookahead == 'T') ADVANCE(124);
      END_STATE();
    case 99:
      if (lookahead == 'l') ADVANCE(125);
      END_STATE();
    case 100:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(127);
      END_STATE();
    case 102:
      if (lookahead == '3') ADVANCE(128);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(130);
      END_STATE();
    case 105:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 106:
      if (lookahead == '2') ADVANCE(132);
      if (lookahead == '3') ADVANCE(133);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PROTO);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(134);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 111:
      if (lookahead == '3') ADVANCE(137);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(139);
      END_STATE();
    case 114:
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 115:
      if (lookahead == '2') ADVANCE(141);
      if (lookahead == '3') ADVANCE(142);
      END_STATE();
    case 116:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 120:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 121:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(148);
      END_STATE();
    case 123:
      if (lookahead == 'P') ADVANCE(149);
      END_STATE();
    case 124:
      if (lookahead == 'A') ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_MFBool);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(151);
      END_STATE();
    case 127:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 128:
      if (lookahead == '2') ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_MFNode);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'f') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'f') ADVANCE(157);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_SFBool);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == '2') ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_SFNode);
      END_STATE();
    case 139:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 140:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 141:
      if (lookahead == 'f') ADVANCE(163);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(164);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_hidden);
      if (lookahead == 'F') ADVANCE(167);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 148:
      if (lookahead == 'l') ADVANCE(170);
      END_STATE();
    case 149:
      if (lookahead == 'R') ADVANCE(171);
      END_STATE();
    case 150:
      if (lookahead == 'B') ADVANCE(172);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_MFColor);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_MFFloat);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_MFInt32);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(173);
      END_STATE();
    case 155:
      if (lookahead == 'g') ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_MFVec2f);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_MFVec3f);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_SFColor);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_SFFloat);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SFInt32);
      END_STATE();
    case 161:
      if (lookahead == 'i') ADVANCE(175);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SFVec2f);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_SFVec3f);
      END_STATE();
    case 165:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 166:
      if (lookahead == 'F') ADVANCE(178);
      END_STATE();
    case 167:
      if (lookahead == 'i') ADVANCE(179);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(180);
      END_STATE();
    case 169:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 170:
      if (lookahead == 'd') ADVANCE(182);
      END_STATE();
    case 171:
      if (lookahead == 'O') ADVANCE(183);
      END_STATE();
    case 172:
      if (lookahead == 'L') ADVANCE(184);
      END_STATE();
    case 173:
      if (lookahead == 'o') ADVANCE(185);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_MFString);
      END_STATE();
    case 175:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SFString);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 179:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 180:
      if (lookahead == 't') ADVANCE(190);
      END_STATE();
    case 181:
      if (lookahead == 'd') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_w3dField);
      END_STATE();
    case 183:
      if (lookahead == 'T') ADVANCE(192);
      END_STATE();
    case 184:
      if (lookahead == 'E') ADVANCE(193);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 187:
      if (lookahead == 'd') ADVANCE(196);
      END_STATE();
    case 188:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 190:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_vrmlField);
      END_STATE();
    case 192:
      if (lookahead == 'O') ADVANCE(200);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_IMPORTABLE);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_MFRotation);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_SFRotation);
      END_STATE();
    case 196:
      if (lookahead == 'F') ADVANCE(201);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(204);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_EXTERNPROTO);
      END_STATE();
    case 201:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_hiddenField);
      END_STATE();
    case 204:
      if (lookahead == 'F') ADVANCE(207);
      END_STATE();
    case 205:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_exposedField);
      END_STATE();
    case 207:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 208:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 209:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(212);
      END_STATE();
    case 211:
      if (lookahead == 'l') ADVANCE(213);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_deprecatedField);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(214);
      END_STATE();
    case 214:
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
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 23},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 23},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__word] = ACTIONS(1),
    [anon_sym_IMPORTABLE] = ACTIONS(1),
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
    [anon_sym_USE] = ACTIONS(1),
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
    [sym__text_fragment] = ACTIONS(1),
    [sym_error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(104),
    [sym_extern] = STATE(17),
    [sym_proto] = STATE(113),
    [sym_javascript] = STATE(72),
    [sym_identifier] = STATE(106),
    [sym_node] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(17),
    [aux_sym_source_file_repeat2] = STATE(50),
    [aux_sym_extern_repeat1] = STATE(92),
    [sym__word] = ACTIONS(5),
    [anon_sym_IMPORTABLE] = ACTIONS(7),
    [anon_sym_EXTERNPROTO] = ACTIONS(7),
    [anon_sym_PROTO] = ACTIONS(9),
    [anon_sym_PERCENT_LT] = ACTIONS(11),
    [anon_sym_PERCENT_LT_EQ] = ACTIONS(13),
    [sym_comment] = ACTIONS(3),
    [anon_sym_USE] = ACTIONS(15),
    [anon_sym_DEF] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(27), 1,
      sym_null,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(39), 1,
      anon_sym_IS,
    STATE(16), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(4), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [56] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(39), 1,
      anon_sym_IS,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(43), 1,
      sym_null,
    STATE(16), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(2), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [112] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__word,
    ACTIONS(48), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_RBRACE,
    ACTIONS(53), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(56), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(59), 1,
      sym_null,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_USE,
    ACTIONS(74), 1,
      anon_sym_DEF,
    ACTIONS(77), 1,
      anon_sym_IS,
    STATE(16), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(62), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(4), 7,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
      aux_sym__fieldType_repeat1,
  [168] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(39), 1,
      anon_sym_IS,
    ACTIONS(80), 1,
      sym_null,
    ACTIONS(82), 1,
      sym_number,
    STATE(56), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(98), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [220] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(39), 1,
      anon_sym_IS,
    ACTIONS(82), 1,
      sym_number,
    ACTIONS(84), 1,
      sym_null,
    STATE(56), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(99), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__value,
  [272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(88), 13,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [300] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      sym_number,
    STATE(40), 1,
      sym_javascript,
    STATE(75), 1,
      aux_sym__MFNumber,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(55), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(64), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(69), 2,
      sym_string,
      aux_sym__MFString,
  [353] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    ACTIONS(96), 1,
      sym_number,
    STATE(40), 1,
      sym_javascript,
    STATE(76), 1,
      aux_sym__MFNumber,
    STATE(119), 1,
      sym_identifier,
    ACTIONS(29), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(45), 2,
      sym_node,
      aux_sym__MFNode,
    STATE(58), 2,
      sym_boolean,
      aux_sym__MFBool,
    STATE(68), 2,
      sym_string,
      aux_sym__MFString,
  [406] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(93), 1,
      sym__fieldType,
    ACTIONS(98), 18,
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
  [433] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(100), 1,
      anon_sym_LBRACK,
    ACTIONS(102), 1,
      sym_null,
    ACTIONS(106), 1,
      sym_number,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(33), 1,
      sym_javascript,
    STATE(106), 1,
      sym_identifier,
    ACTIONS(104), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(59), 6,
      sym_boolean,
      sym_string,
      sym_node,
      sym_vector,
      sym_vecf,
      sym__fieldValue,
  [482] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(110), 12,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 18,
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
  [532] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(123), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(126), 1,
      sym_number,
    STATE(14), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(118), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(116), 8,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [564] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(131), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [588] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(137), 1,
      sym_number,
    STATE(24), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(135), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(133), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [622] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(9), 1,
      anon_sym_PROTO,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    STATE(72), 1,
      sym_javascript,
    STATE(92), 1,
      aux_sym_extern_repeat1,
    STATE(106), 1,
      sym_identifier,
    STATE(107), 1,
      sym_proto,
    ACTIONS(7), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
    STATE(43), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    STATE(53), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 7,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(88), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [692] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(139), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(131), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [738] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(143), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [761] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(137), 1,
      sym_number,
    STATE(24), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(135), 3,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_DQUOTE,
    ACTIONS(133), 7,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [792] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(147), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [815] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(153), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(151), 8,
      anon_sym_PERCENT_LT,
      sym__word,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(155), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [863] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(159), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [886] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 6,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(163), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(159), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [931] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(139), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(163), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [975] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(167), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [997] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(147), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1019] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      sym_number,
    STATE(38), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(171), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1049] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(175), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [1071] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(155), 11,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1093] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      anon_sym_LBRACK,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
      sym_number,
      anon_sym_DQUOTE,
    ACTIONS(179), 9,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_hidden,
      sym_null,
      anon_sym_TRUE,
      anon_sym_FALSE,
      anon_sym_USE,
      anon_sym_DEF,
      anon_sym_IS,
  [1115] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(173), 1,
      sym_number,
    STATE(38), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(171), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1142] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(183), 1,
      sym_number,
    STATE(39), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(153), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1169] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(188), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(191), 1,
      sym_number,
    STATE(39), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
    ACTIONS(118), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1196] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(201), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(208), 1,
      sym_number,
    ACTIONS(210), 1,
      anon_sym_DQUOTE,
    ACTIONS(196), 2,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(206), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    ACTIONS(194), 3,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1225] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      sym__fieldDecl,
    STATE(42), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(214), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      sym__fieldDecl,
    STATE(44), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(214), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1271] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_PERCENT_LT_EQ,
    STATE(92), 1,
      aux_sym_extern_repeat1,
    ACTIONS(220), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
    STATE(43), 2,
      sym_extern,
      aux_sym_source_file_repeat1,
    ACTIONS(218), 5,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1296] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_RBRACK,
    STATE(10), 1,
      sym__fieldDecl,
    STATE(44), 2,
      sym_field,
      aux_sym_proto_repeat1,
    ACTIONS(227), 7,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1319] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(47), 2,
      sym_node,
      aux_sym__MFNode,
  [1351] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(54), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1383] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      sym__word,
    ACTIONS(237), 1,
      anon_sym_RBRACK,
    ACTIONS(239), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(242), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(245), 1,
      anon_sym_USE,
    ACTIONS(248), 1,
      anon_sym_DEF,
    STATE(73), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(47), 2,
      sym_node,
      aux_sym__MFNode,
  [1415] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(46), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1447] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(251), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(54), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1479] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_javascript,
    STATE(106), 1,
      sym_identifier,
    STATE(52), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1511] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(255), 1,
      anon_sym_RBRACE,
    STATE(70), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(49), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1543] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
    ACTIONS(259), 1,
      sym__word,
    ACTIONS(262), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(265), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(268), 1,
      anon_sym_USE,
    ACTIONS(271), 1,
      anon_sym_DEF,
    STATE(72), 1,
      sym_javascript,
    STATE(106), 1,
      sym_identifier,
    STATE(52), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1575] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(15), 1,
      anon_sym_USE,
    ACTIONS(17), 1,
      anon_sym_DEF,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_javascript,
    STATE(106), 1,
      sym_identifier,
    STATE(52), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1607] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RBRACE,
    ACTIONS(259), 1,
      sym__word,
    ACTIONS(276), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(279), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(282), 1,
      anon_sym_USE,
    ACTIONS(285), 1,
      anon_sym_DEF,
    STATE(70), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(54), 2,
      sym_node,
      aux_sym_source_file_repeat2,
  [1639] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      sym__word,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(35), 1,
      anon_sym_USE,
    ACTIONS(37), 1,
      anon_sym_DEF,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym_javascript,
    STATE(119), 1,
      sym_identifier,
    STATE(47), 2,
      sym_node,
      aux_sym__MFNode,
  [1671] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym_number,
    ACTIONS(133), 2,
      sym__word,
      anon_sym_hidden,
    STATE(61), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
  [1698] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(292), 7,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
      anon_sym_PROTO,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1714] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(66), 3,
      sym_javascript,
      sym_boolean,
      aux_sym__MFBool,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1750] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(135), 1,
      anon_sym_RBRACE,
    ACTIONS(290), 1,
      sym_number,
    ACTIONS(133), 2,
      sym__word,
      anon_sym_hidden,
    STATE(61), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
  [1774] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(153), 1,
      anon_sym_RBRACE,
    ACTIONS(300), 1,
      sym_number,
    ACTIONS(151), 2,
      sym__word,
      anon_sym_hidden,
    STATE(14), 2,
      sym_javascript,
      aux_sym_vecf_repeat1,
  [1798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1812] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1826] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(296), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(66), 3,
      sym_javascript,
      sym_boolean,
      aux_sym__MFBool,
  [1848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1862] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_RBRACK,
    ACTIONS(304), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(307), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(310), 2,
      anon_sym_TRUE,
      anon_sym_FALSE,
    STATE(66), 3,
      sym_javascript,
      sym_boolean,
      aux_sym__MFBool,
  [1884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 8,
      anon_sym_RBRACK,
      anon_sym_field,
      anon_sym_unconnectedField,
      anon_sym_vrmlField,
      anon_sym_hiddenField,
      anon_sym_w3dField,
      anon_sym_deprecatedField,
      anon_sym_exposedField,
  [1898] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    STATE(71), 3,
      sym_javascript,
      sym_string,
      aux_sym__MFString,
  [1919] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    STATE(71), 3,
      sym_javascript,
      sym_string,
      aux_sym__MFString,
  [1940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 2,
      anon_sym_RBRACE,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(313), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1957] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      anon_sym_RBRACK,
    ACTIONS(319), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(322), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(71), 3,
      sym_javascript,
      sym_string,
      aux_sym__MFString,
  [1978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(313), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [1995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_LBRACE,
    ACTIONS(328), 2,
      anon_sym_RBRACK,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(194), 4,
      anon_sym_PERCENT_LT,
      sym__word,
      anon_sym_USE,
      anon_sym_DEF,
  [2012] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_RBRACK,
    ACTIONS(332), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(335), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(338), 1,
      sym_number,
    STATE(74), 2,
      sym_javascript,
      aux_sym__MFNumber,
  [2032] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(288), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      sym_number,
    STATE(74), 2,
      sym_javascript,
      aux_sym__MFNumber,
  [2052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(230), 1,
      anon_sym_RBRACK,
    ACTIONS(341), 1,
      sym_number,
    STATE(74), 2,
      sym_javascript,
      aux_sym__MFNumber,
  [2072] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(345), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_hidden,
    STATE(94), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2089] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(349), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript,
    STATE(30), 1,
      sym_identifier,
  [2108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(351), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(89), 1,
      sym_identifier,
  [2127] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(353), 1,
      anon_sym_RBRACE,
    STATE(83), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2144] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(355), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2161] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(357), 1,
      anon_sym_RBRACE,
    STATE(90), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2178] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(359), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2195] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(351), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(31), 1,
      sym_identifier,
  [2214] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(77), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2231] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(363), 1,
      anon_sym_RBRACE,
    STATE(81), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2248] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(351), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(27), 1,
      sym_identifier,
  [2267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(349), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript,
    STATE(111), 1,
      sym_identifier,
  [2286] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(349), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript,
    STATE(114), 1,
      sym_identifier,
  [2305] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym__word,
    ACTIONS(347), 1,
      anon_sym_hidden,
    ACTIONS(365), 1,
      anon_sym_RBRACE,
    STATE(94), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2322] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(13), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(349), 1,
      sym__word,
    STATE(15), 1,
      sym_javascript,
    STATE(121), 1,
      sym_identifier,
  [2341] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_string,
    STATE(96), 1,
      aux_sym_extern_repeat1,
    ACTIONS(367), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
  [2358] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(351), 1,
      sym__word,
    STATE(11), 1,
      sym_identifier,
    STATE(20), 1,
      sym_javascript,
  [2377] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      sym__word,
    ACTIONS(372), 1,
      anon_sym_RBRACE,
    ACTIONS(374), 1,
      anon_sym_hidden,
    STATE(94), 2,
      sym_property,
      aux_sym_node_repeat1,
  [2394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(25), 1,
      anon_sym_PERCENT_LT_EQ,
    ACTIONS(351), 1,
      sym__word,
    STATE(20), 1,
      sym_javascript,
    STATE(91), 1,
      sym_identifier,
  [2413] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      anon_sym_DQUOTE,
    STATE(96), 1,
      aux_sym_extern_repeat1,
    ACTIONS(377), 2,
      anon_sym_IMPORTABLE,
      anon_sym_EXTERNPROTO,
  [2427] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      anon_sym_LBRACE,
    ACTIONS(386), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(382), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2441] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      anon_sym_RBRACE,
    ACTIONS(388), 2,
      sym__word,
      anon_sym_hidden,
  [2452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_RBRACE,
    ACTIONS(392), 2,
      sym__word,
      anon_sym_hidden,
  [2463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(396), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2474] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 1,
      anon_sym_PERCENT_LT,
    ACTIONS(400), 2,
      anon_sym_PERCENT_LT_EQ,
      sym__word,
  [2485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      anon_sym_GT_PERCENT,
  [2492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 1,
      ts_builtin_sym_end,
  [2499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      ts_builtin_sym_end,
  [2506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_GT_PERCENT,
  [2513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_LBRACE,
  [2520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      ts_builtin_sym_end,
  [2527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
  [2534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
  [2541] = 2,
    ACTIONS(418), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_string_token1,
  [2548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_LBRACK,
  [2555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(424), 1,
      sym__text_fragment,
  [2562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
  [2569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LBRACE,
  [2576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(428), 1,
      sym__word,
  [2583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
  [2590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DQUOTE,
  [2597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      sym__text_fragment,
  [2604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
  [2611] = 2,
    ACTIONS(418), 1,
      sym_comment,
    ACTIONS(438), 1,
      aux_sym_string_token1,
  [2618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_LBRACE,
  [2625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LBRACE,
  [2632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(444), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 56,
  [SMALL_STATE(4)] = 112,
  [SMALL_STATE(5)] = 168,
  [SMALL_STATE(6)] = 220,
  [SMALL_STATE(7)] = 272,
  [SMALL_STATE(8)] = 300,
  [SMALL_STATE(9)] = 353,
  [SMALL_STATE(10)] = 406,
  [SMALL_STATE(11)] = 433,
  [SMALL_STATE(12)] = 482,
  [SMALL_STATE(13)] = 508,
  [SMALL_STATE(14)] = 532,
  [SMALL_STATE(15)] = 564,
  [SMALL_STATE(16)] = 588,
  [SMALL_STATE(17)] = 622,
  [SMALL_STATE(18)] = 668,
  [SMALL_STATE(19)] = 692,
  [SMALL_STATE(20)] = 715,
  [SMALL_STATE(21)] = 738,
  [SMALL_STATE(22)] = 761,
  [SMALL_STATE(23)] = 792,
  [SMALL_STATE(24)] = 815,
  [SMALL_STATE(25)] = 840,
  [SMALL_STATE(26)] = 863,
  [SMALL_STATE(27)] = 886,
  [SMALL_STATE(28)] = 909,
  [SMALL_STATE(29)] = 931,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 975,
  [SMALL_STATE(32)] = 997,
  [SMALL_STATE(33)] = 1019,
  [SMALL_STATE(34)] = 1049,
  [SMALL_STATE(35)] = 1071,
  [SMALL_STATE(36)] = 1093,
  [SMALL_STATE(37)] = 1115,
  [SMALL_STATE(38)] = 1142,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1196,
  [SMALL_STATE(41)] = 1225,
  [SMALL_STATE(42)] = 1248,
  [SMALL_STATE(43)] = 1271,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1319,
  [SMALL_STATE(46)] = 1351,
  [SMALL_STATE(47)] = 1383,
  [SMALL_STATE(48)] = 1415,
  [SMALL_STATE(49)] = 1447,
  [SMALL_STATE(50)] = 1479,
  [SMALL_STATE(51)] = 1511,
  [SMALL_STATE(52)] = 1543,
  [SMALL_STATE(53)] = 1575,
  [SMALL_STATE(54)] = 1607,
  [SMALL_STATE(55)] = 1639,
  [SMALL_STATE(56)] = 1671,
  [SMALL_STATE(57)] = 1698,
  [SMALL_STATE(58)] = 1714,
  [SMALL_STATE(59)] = 1736,
  [SMALL_STATE(60)] = 1750,
  [SMALL_STATE(61)] = 1774,
  [SMALL_STATE(62)] = 1798,
  [SMALL_STATE(63)] = 1812,
  [SMALL_STATE(64)] = 1826,
  [SMALL_STATE(65)] = 1848,
  [SMALL_STATE(66)] = 1862,
  [SMALL_STATE(67)] = 1884,
  [SMALL_STATE(68)] = 1898,
  [SMALL_STATE(69)] = 1919,
  [SMALL_STATE(70)] = 1940,
  [SMALL_STATE(71)] = 1957,
  [SMALL_STATE(72)] = 1978,
  [SMALL_STATE(73)] = 1995,
  [SMALL_STATE(74)] = 2012,
  [SMALL_STATE(75)] = 2032,
  [SMALL_STATE(76)] = 2052,
  [SMALL_STATE(77)] = 2072,
  [SMALL_STATE(78)] = 2089,
  [SMALL_STATE(79)] = 2108,
  [SMALL_STATE(80)] = 2127,
  [SMALL_STATE(81)] = 2144,
  [SMALL_STATE(82)] = 2161,
  [SMALL_STATE(83)] = 2178,
  [SMALL_STATE(84)] = 2195,
  [SMALL_STATE(85)] = 2214,
  [SMALL_STATE(86)] = 2231,
  [SMALL_STATE(87)] = 2248,
  [SMALL_STATE(88)] = 2267,
  [SMALL_STATE(89)] = 2286,
  [SMALL_STATE(90)] = 2305,
  [SMALL_STATE(91)] = 2322,
  [SMALL_STATE(92)] = 2341,
  [SMALL_STATE(93)] = 2358,
  [SMALL_STATE(94)] = 2377,
  [SMALL_STATE(95)] = 2394,
  [SMALL_STATE(96)] = 2413,
  [SMALL_STATE(97)] = 2427,
  [SMALL_STATE(98)] = 2441,
  [SMALL_STATE(99)] = 2452,
  [SMALL_STATE(100)] = 2463,
  [SMALL_STATE(101)] = 2474,
  [SMALL_STATE(102)] = 2485,
  [SMALL_STATE(103)] = 2492,
  [SMALL_STATE(104)] = 2499,
  [SMALL_STATE(105)] = 2506,
  [SMALL_STATE(106)] = 2513,
  [SMALL_STATE(107)] = 2520,
  [SMALL_STATE(108)] = 2527,
  [SMALL_STATE(109)] = 2534,
  [SMALL_STATE(110)] = 2541,
  [SMALL_STATE(111)] = 2548,
  [SMALL_STATE(112)] = 2555,
  [SMALL_STATE(113)] = 2562,
  [SMALL_STATE(114)] = 2569,
  [SMALL_STATE(115)] = 2576,
  [SMALL_STATE(116)] = 2583,
  [SMALL_STATE(117)] = 2590,
  [SMALL_STATE(118)] = 2597,
  [SMALL_STATE(119)] = 2604,
  [SMALL_STATE(120)] = 2611,
  [SMALL_STATE(121)] = 2618,
  [SMALL_STATE(122)] = 2625,
  [SMALL_STATE(123)] = 2632,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(95),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__fieldType_repeat1, 2, 0, 0), SHIFT_REPEAT(84),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_javascript, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_javascript, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldDecl, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 6, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 6, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vecf, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vecf, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__value, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldValue, 1, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [188] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(112),
  [191] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vecf_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFNode, 1, 0, 0),
  [196] = {.entry = {.count = 4, .reusable = true}}, REDUCE(aux_sym__MFBool, 1, 0, 0), REDUCE(aux_sym__MFNumber, 1, 0, 0), REDUCE(aux_sym__MFString, 1, 0, 0), REDUCE(aux_sym__MFNode, 1, 0, 0),
  [201] = {.entry = {.count = 4, .reusable = false}}, REDUCE(aux_sym__MFBool, 1, 0, 0), REDUCE(aux_sym__MFNumber, 1, 0, 0), REDUCE(aux_sym__MFString, 1, 0, 0), REDUCE(aux_sym__MFNode, 1, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MFBool, 1, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proto_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [234] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(15),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0),
  [239] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(118),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(118),
  [245] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(87),
  [248] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNode, 2, 0, 0), SHIFT_REPEAT(95),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [259] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(15),
  [262] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(112),
  [268] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(78),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(79),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(118),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(118),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(87),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extern, 2, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extern, 2, 0, 0),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 4, 0, 5),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(112),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(112),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFBool, 2, 0, 0), SHIFT_REPEAT(21),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1, 0, 0),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(112),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(112),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFString, 2, 0, 0), SHIFT_REPEAT(110),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNode, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(112),
  [335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(112),
  [338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MFNumber, 2, 0, 0), SHIFT_REPEAT(74),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0),
  [374] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_node_repeat1, 2, 0, 0), SHIFT_REPEAT(115),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_extern_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_extern_repeat1, 2, 0, 0),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 1, 0, 0),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldType, 1, 0, 0),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 3, 0, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 3),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 2, 0, 1),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 2, 0, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 3, 0, 0),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldType, 3, 0, 0),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldType, 4, 0, 0),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__fieldType, 4, 0, 0),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 7, 0, 4),
  [408] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 8, 0, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proto, 6, 0, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [438] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
