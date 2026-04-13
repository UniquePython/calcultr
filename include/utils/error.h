#ifndef ERROR_H
#define ERROR_H

typedef enum calcultr_error
{
    ERR_NONE,

    ERR_DIVISION_BY_ZERO,
    ERR_SYNTAX,
    ERR_UNMATCHED_PAREN,
    ERR_UNKNOWN_FUNCTION,
    ERR_DOMAIN,
    ERR_OVERFLOW,
} Calcultr_Error;

#endif