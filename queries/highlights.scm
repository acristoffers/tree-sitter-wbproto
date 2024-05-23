; Includes

(extern "EXTERNPROTO" @include)

; Keywords

[
  "DEF"
  "EXTERNPROTO"
  "IS"
  "PROTO"
  "USE"
] @keyword

; Variables

(identifier) @variable

; Fields/Properties

(property . (identifier) @property)

; Types

(class . (identifier) @type)

((identifier) @type
  (#lua-match? @type "^[A-Z][a-zA-Z0-9_]+$"))

; Functions

; Punctuation

"," @punctuation.delimiter

[ "[" "]" "{" "}" ] @punctuation.bracket

; Literals

(string) @string
(number) @number
(boolean) @boolean
(null) @boolean

; Comments

(comment) @comment @spell

; Errors

(ERROR) @error
