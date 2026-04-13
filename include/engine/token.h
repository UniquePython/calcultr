#ifndef TOKEN_H
#define TOKEN_H

#define MAX_IDENT_LEN 32

typedef enum token_kind
{
    TOKEN_KIND_NUM,

    TOKEN_KIND_PLUS,
    TOKEN_KIND_MINUS,
    TOKEN_KIND_MUL,
    TOKEN_KIND_DIV,
    TOKEN_KIND_EXP,

    TOKEN_KIND_LPAREN,
    TOKEN_KIND_RPAREN,

    TOKEN_KIND_IDENT,
    TOKEN_KIND_COMMA,

    TOKEN_KIND_END
} Token_Kind;

typedef struct token
{
    Token_Kind kind;

    union token_value
    {
        double number;
        char string[MAX_IDENT_LEN];
    } as;

} Token;

#endif