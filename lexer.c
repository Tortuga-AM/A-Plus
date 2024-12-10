#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef enum { TOKEN_INT, TOKEN_DOUBLE, TOKEN_CHAR, TOKEN_BOOL, TOKEN_LONG, TOKEN_STRING, TOKEN_IDENTIFIER, TOKEN_OPERATOR, TOKEN_KEYWORD, TOKEN_EOF, TOKEN_UNKNOWN } TokenType;

typedef struct {
    TokenType type;
    char value[256];
} Token;

int main() {
    source = "int x <- 5; ~ This is a comment\n";
    Token token;
    do {
        token.getNextToken();
        printf("Token: %d, Value: %s\n", token.type, token.value);
    } while (token.type != TOKEN_EOF);

    return 0;
}

Token getNextToken() {
    Token token;
    token.type = TOKEN_UNKNOWN;
    memset(token.value, 0, sizeof(token.value));

    while (isspace(spurcce[pos])) pos++;

    if (isdigit(source[pos])) {
        token.type = TOKEN_INT;
        int length = 0;
        while (isdigit(source[pos])) {
            token.value[length++] = source[pos++];
        }
    } else if (isalpha(source[pos])) {
        int length = 0;
        while (isalnum(source[pos])) {
            token.value[length++] = source[pos++];
        }
        if (strcmp(token.value, "int") == 0 || strcmp(token.value, "double") == 0 || strcmp(token.value, "char") == 0 || strcmp(token.value, "bool") == 0 || strcmp(token.value, "long") == 0 || strcmp(token.value, "string") == 0) {
            token.type = TOKEN_KEYWORD;
        } else {
            token.type = TOKEN_IDENTIFIER;
        }
    } else if (strchr("+-*/^%<=>!&|", source[pos] != NULL)) {
        token.type = TOKEN_OPERATOR;
        token.value[0] = source[pos++];
    } else if (source[pos] == '\0') {
        token.type = TOKEN_EOF;
    } else {

    }
}