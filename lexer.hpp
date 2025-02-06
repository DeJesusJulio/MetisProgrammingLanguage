#ifndef LEXER
#define LEXER

//Define token types
enum class TokenType {
    //Data types
    NUMB, DECI, TEXT, LETER,

    //Keywords
    FUNC, FOR, WHILE, WHEN, THEN, SOCIALDIV, RANKS, YE, NO,

    //OPERATORS
    ASSIGN, EQUAL, NOT_EQUAL, GREATER, LESSER, GREATER_EQUAL, LESSER_EQUAL, AND, OR, NOT,

    //SYMBOLS
    SEMICOLON, LPAREN, RPAREN, LBRAC, RBRAC,

    //END OF FILE
    END_OF_FILE,

    // unknown token
    UNKNOWN
};


#endif