#include <stdio.h>
int main(){
    int a = 09;      // octal invalid in C (but lexer will just see a number token)
    char c = 'ab';   // invalid char literal (lexer will catch as char literal or error depending on quotes)
    $invalid = 5;    // invalid token starting with $
    "unterminated string
    /* unterminated comment
    return 0;
}
