#include "engine/token.h"

int token_precedence(Token_Kind kind)
{
    switch (kind)
    {
    case TOKEN_KIND_PLUS:
    case TOKEN_KIND_MINUS:
        return 1;

    case TOKEN_KIND_MUL:
    case TOKEN_KIND_DIV:
        return 2;

    case TOKEN_KIND_EXP:
        return 3;

    default:
        return 0;
    }
}

Token_Assoc token_associativity(Token_Kind kind)
{
    switch (kind)
    {
    case TOKEN_KIND_PLUS:
    case TOKEN_KIND_MINUS:
        return ASSOC_LEFT;

    case TOKEN_KIND_MUL:
    case TOKEN_KIND_DIV:
        return ASSOC_LEFT;

    case TOKEN_KIND_EXP:
        return ASSOC_RIGHT;

    default:
        return ASSOC_LEFT;
    }
}