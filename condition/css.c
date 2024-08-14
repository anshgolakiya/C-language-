#include <stdio.h>
void main()
{
    char ch ;

    printf("entter a digit : ");
    scanf("%c",&ch);

    if (ch >='A'&& ch<='Z')
    {
        printf("given digit is capital letter.");
    }
    if (ch >='a'&& ch<='z')
    {
        printf("given digit is small letter.");
    }
    if (ch>='0'&& ch<='9')
    {
        printf("given digit is special digit.");
    }
}