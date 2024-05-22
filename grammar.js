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

module.exports = grammar({
  name: "wbproto",
  conflicts: $ => [[$._vectorWithoutBrackets]],
  word: $ => $._word,
  extras: $ => [/\s/, $.comment],
  externals: $ => [$._text_fragment, $.error_sentinel],
  rules: {
    source_file: $ => seq(repeat($.extern), choice($.proto, repeat1(choice($.class, $.javascript)))),

    extern: $ => seq("EXTERNPROTO", $.string),
    proto: $ => seq("PROTO", field("proto", $.identifier), "[", repeat($.field), "]", "{", repeat(choice($.class, $.javascript)), "}"),

    comment: _ => /#.*\n/,
    _word: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    identifier: $ => choice($._word, $.javascript),

    // builtin types
    null: _ => "NULL",
    boolean: _ => choice('TRUE', 'FALSE'),
    number: _ => /[+-]?(\d+|\d+\.\d*|\.\d+)([eE][+-]?\d+)?[ij]?/,
    string: _ => seq('"', field("string_content", /[^"]*/), '"'),
    _vectorWithBrackets: $ => seq("[", repeat(seq(optional(","), $._value)), "]"),
    _vectorWithoutBrackets: $ => prec(1, repeat1(seq(optional(","), $.number))),
    vector: $ => choice($._vectorWithBrackets, $._vectorWithoutBrackets),

    _fieldType: _ => choice("field", "unconnectedField"),
    _fieldValue: $ => choice($.boolean, $.string, $.vector, $.null, $.javascript),
    field: $ => seq($._fieldType, field("type", $.identifier), field("name", $.identifier), $._fieldValue),

    _value: $ => choice(seq(optional(seq("DEF", $.identifier)), choice($.boolean, $.string, $.vector, $.class, $.null, $.javascript)), seq(choice("IS", "USE"), $.identifier)),

    class: $ => seq($.identifier, "{", repeat($.property), "}"),

    property: $ => seq(optional("hidden"), $.identifier, $._value),

    javascript: $ => seq(choice("%<", "%<="), alias($._text_fragment, $.code), ">%"),
  }
});
