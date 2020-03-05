#include <stdio.h>
#include <string.h>

void check(char str[10]);

int main() {
    char str[100];
    printf("Enter string: ");
    gets(str);
    check(str);
    return 0;
}

void check(char str[10]) {
    if (strcmp(str, "++") == 0 || strcmp(str, "--") == 0)
        printf("Unary Operator");
    else if (strcmp(str, "+") == 0 || strcmp(str, "-") == 0 || strcmp(str, "*") == 0 || strcmp(str, "/") == 0 ||
             strcmp(str, "%") == 0)
        printf("Arithmetic Operator");
    else if (strcmp(str, "<") == 0 || strcmp(str, "<=") == 0 || strcmp(str, ">") == 0 || strcmp(str, ">=") == 0 ||
             strcmp(str, "==") == 0 || strcmp(str, "!=") == 0)
        printf("Relational Operator");
    else if (strcmp(str, "&&") == 0 || strcmp(str, "||") == 0 || strcmp(str, "!") == 0)
        printf("Logical Operator");
    else if (strcmp(str, "&") == 0 || strcmp(str, "|") == 0 || strcmp(str, "<<") == 0 || strcmp(str, ">>") == 0 ||
             strcmp(str, "~") == 0 || strcmp(str, "^") == 0)
        printf("Bitwise Operator");
    else if (strcmp(str, "=") == 0 || strcmp(str, "+=") == 0 || strcmp(str, "-=") == 0 || strcmp(str, "*=") == 0 ||
             strcmp(str, "/=") == 0 || strcmp(str, "%=") == 0)
        printf("Assignment Operator");
    else if (strcmp(str, "?:") == 0)
        printf("Ternary or Conditional Operator");
    else
        printf("Invalid Operator");
}
