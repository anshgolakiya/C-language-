%{
#include <stdio.h>

FILE *yyin;
%}

%%
"int"|"float"|"char"|"if"|"else"|"while"|"for"|"return"	{ printf("%s --> Keyword\n", yytext); }

[0-9]+	 { printf("%s --> Number\n", yytext); }

[a-zA-Z_][a-zA-Z0-9_]* { printf("%s --> Identifier\n", yytext); }

"+"|"-"|"*"|"/"|"=" { printf("%s --> Operator\n", yytext); }

"("|")"|"{"|"}"|";"|"," { printf("%s --> Special Symbol\n", yytext); }

[ \t\n] ;

.	 { printf("%s --> Invalid Character\n", yytext); }

%%

int yywrap()
{
    return 1;
}

int main()
{
    yyin = fopen("input.txt", "r");

    if (yyin == NULL)
    {
        printf("File not found\n");
        return 1;
    }

    yylex();

    fclose(yyin);

    return 0;
}
