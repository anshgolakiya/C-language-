#include <stdio.h>
#include <string.h>
#include <ctype.h>

char keyword[][10] = {
    "int", "float", "char", "if",
    "else", "for", "while", "return"
};

/* Check whether token is a keyword */
int isKeyword(char str[])
{
    int i;

    for (i = 0; i < 8; i++)
    {
        if (strcmp(str, keyword[i]) == 0)
        {
            return 1;
        }
    }

    return 0;
}

/* Check operator */
int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' ||
            ch == '/' || ch == '<' || ch == '>' ||
            ch == '%' || ch == '=');
}

/* Check special symbol */
int isSpecialSymbol(char ch)
{
    return (ch == ';' || ch == '(' || ch == ')' ||
            ch == '{' || ch == '}' || ch == '[' ||
            ch == ']');
}

int main()
{
    FILE *fp;
    char ch;
    char token[100];
    int i;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    printf("Lexical Analyzer:\n\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        /* Ignore spaces, tabs and new lines */
        if (isspace(ch))
        {
            continue;
        }

        /* Identifier or Keyword */
        if (isalpha(ch) || ch == '_')
        {
            i = 0;
            token[i++] = ch;

            while ((ch = fgetc(fp)) != EOF &&
                   (isalnum(ch) || ch == '_'))
            {
                token[i++] = ch;
            }

            token[i] = '\0';

            if (isKeyword(token))
            {
                printf("%-20s : Keyword\n", token);
            }
            else
            {
                printf("%-20s : Identifier\n", token);
            }

            if (ch != EOF)
            {
                ungetc(ch, fp);
            }
        }

        /* Integer Constant */
        else if (isdigit(ch))
        {
            i = 0;
            token[i++] = ch;

            while ((ch = fgetc(fp)) != EOF && isdigit(ch))
            {
                token[i++] = ch;
            }

            token[i] = '\0';

            printf("%-20s : Integer Constant\n", token);

            if (ch != EOF)
            {
                ungetc(ch, fp);
            }
        }

        /* Operator */
        else if (isOperator(ch))
        {
            printf("%-20c : Operator\n", ch);
        }

        /* Special Symbol */
        else if (isSpecialSymbol(ch))
        {
            printf("%-20c : Special Symbol\n", ch);
        }

        /* Unknown symbol */
        else
        {
            printf("%-20c : Unknown Symbol\n", ch);
        }
    }

    fclose(fp);

    return 0;
}
