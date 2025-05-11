#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);  

    if (isalnum(ch)) // alnum = alpha + digit
    {
        printf("%c is alphanumeric.\n", ch);
    }
    else
    {
        printf("%c is not alphanumeric.\n", ch);
    }

    return 0;
}
