#include "tree_sitter/parser.h"
#include <stdio.h>
#include <string.h>

enum TokenType {
    TEXT,
    ERROR_SENTINEL,
};

static inline void advance(TSLexer *lexer)
{
    lexer->advance(lexer, false);
}

static inline void skip(TSLexer *lexer)
{
    lexer->advance(lexer, true);
}

void *tree_sitter_wbproto_external_scanner_create()
{
    return NULL;
}

void tree_sitter_wbproto_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_wbproto_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

void tree_sitter_wbproto_external_scanner_deserialize(
    void *payload,
    const char *buffer,
    unsigned length)
{}

bool tree_sitter_wbproto_external_scanner_scan(
    void *payload,
    TSLexer *lexer,
    const bool *valid_symbols)
{
    if (valid_symbols[TEXT]) {
        lexer->result_symbol = TEXT;
        while (!lexer->eof(lexer)) {
            lexer->mark_end(lexer);
            if (lexer->lookahead == '>') {
                advance(lexer);
                if (lexer->lookahead == '%') {
                    return true;
                }
                continue;
            }
            advance(lexer);
        }
    }

    return false;
}
