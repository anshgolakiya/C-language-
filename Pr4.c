#include <stdio.h>
#include <string.h>
#include <ctype.h>

char keywords[][10] = {
    "int", "float", "char", "if", "else",
    "while", "for", "return", "void"
};

int isKeyword(char str[]) {
    int i;
    for (i = 0; i < 9; i++) {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

int main() {
    char input[200], token[50];
    int i = 0, j;

    printf("Enter a statement:\n");
    fgets(input, sizeof(input), stdin);

    while (input[i] != '\0') {

        if (isspace(input[i])) {
            i++;
            continue;
        }

        if (isalpha(input[i])) {
            j = 0;
            while (isalnum(input[i])) {
                token[j++] = input[i++];
            }
            token[j] = '\0';

            if (isKeyword(token))
                printf("%s --> Keyword\n", token);
            else
                printf("%s --> Identifier\n", token);
        }

        else if (isdigit(input[i])) {
            j = 0;
            while (isdigit(input[i])) {
                token[j++] = input[i++];
            }
            token[j] = '\0';
            printf("%s --> Number\n", token);
        }

        else if (strchr("+-*/=%", input[i])) {
            printf("%c --> Operator\n", input[i]);
            i++;
        }

        else if (strchr("();{},", input[i])) {
            printf("%c --> Special Symbol\n", input[i]);
            i++;
        }

        else {
            i++;
        }
    }

    return 0;
}
