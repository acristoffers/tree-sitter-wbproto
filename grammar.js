/**
 * @file Webots Proto grammar for tree-sitter
 * @author Álan Crístoffer <acristoffers@startmail.com>
 * @license MIT
 */

/* eslint-disable arrow-parens */
/* eslint-disable camelcase */
/* eslint-disable-next-line spaced-comment */
/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const type_keywords = [
  "MFBool",
  "MFColor",
  "MFFloat",
  "MFInt32",
  "MFNode",
  "MFRotation",
  "MFString",
  "MFVec2f",
  "MFVec3f",
  "SFBool",
  "SFColor",
  "SFFloat",
  "SFInt32",
  "SFNode",
  "SFRotation",
  "SFString",
  "SFVec2f",
  "SFVec3f",
];

module.exports = grammar({
  name: "wbproto",
  word: $ => $._word,
  conflicts: $ => [[$.vector]],
  extras: $ => [/\s/, $.comment, ","],
  externals: $ => [$._text_fragment, $.error_sentinel],
  rules: {
    source_file: $ => seq(repeat($.extern), choice($.proto, repeat1(choice($.node, $.javascript)))),

    extern: $ => seq(repeat1(choice("IMPORTABLE", "EXTERNPROTO")), $.string),
    proto: $ => seq("PROTO", field("proto", $.identifier), "[", repeat($.field), "]", "{", repeat(choice($.node, $.javascript)), "}"),
    javascript: $ => seq(choice("%<", "%<="), alias($._text_fragment, $.code), ">%"),

    _word: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    comment: _ => /#.*\n/,
    identifier: $ => choice($._word, $.javascript),

    property: $ => seq(optional("hidden"), alias($._word, $.identifier), $._value),

    // builtin types
    null: _ => "NULL",
    boolean: _ => choice('TRUE', 'FALSE'),
    number: _ => /[+-]?(\d+|\d+\.\d*|\.\d+)([eE][+-]?\d+)?[ij]?/,
    string: _ => seq('"', field("string_content", /[^"]*/), '"'),
    node: $ => seq(optional(seq("DEF", $.identifier)), $.identifier, "{", repeat($.property), "}"),

    _MFBool: $ => repeat1(choice($.boolean, $.javascript)),
    _MFNumber: $ => repeat1(choice($.number, $.javascript)),
    _MFString: $ => repeat1(choice($.string, $.javascript)),
    _MFNode: $ => repeat1(choice($.node, $.javascript)),
    vector: $ => seq("[", optional(choice($._MFBool, $._MFNumber, $._MFString, $._MFNode)), "]"),
    vecf: $ => prec(2, seq(choice($.number, $.javascript), repeat1(choice($.number, $.javascript)))),

    _fieldDecl: _ => choice("field", "unconnectedField", "vrmlField", "hiddenField", "w3dField", "deprecatedField", "exposedField"),
    _fieldType: $ => seq(alias(choice(...type_keywords), $.identifier), optional(seq("{", repeat($._value), "}"))),
    _fieldValue: $ => choice($.boolean, $.string, $.vector, $.null, $.number, $.node, alias($.vecf, $.vector), $.javascript),
    field: $ => seq(alias($._fieldDecl, $.identifier), alias($._fieldType, $.type), field("name", $.identifier), $._fieldValue),

    _value: $ => choice(
      seq(choice("IS", "USE"), $.identifier),
      seq(choice(
        $.boolean,
        $.node,
        $.null,
        $.string,
        $.vector,
        $.number,
        alias($.vecf, $.vector),
        $.javascript))),
  }
});

