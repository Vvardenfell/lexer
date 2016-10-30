#ifndef TOKEN_H
#define TOKEN_H

enum class TokenType : unsigned char {
    DEADBEEF,

    PLUS,
    MINUS,
    COLON,
    ASTERISK,
    LESS_THAN,
    GREATER_THAN,
    EQUALITY,
    ASSIGNMENT,
    WHATEVER,
    NOT,
    LOGICAL_AND,
    SEMICOLON,
    PARENTHESIS_OPEN,
    PARENTHESIS_CLOSE,
    CURLY_BRACKET_OPEN,
    CURLY_BRACKET_CLOSE,
    SQUARE_BRACKET_OPEN,
    SQUARE_BRACKET_CLOSE,

    INTEGER,
    IDENTIFIER,

    IF,
    WHILE
};


#endif /* TOKEN_H */
