#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch ;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isupper(ch))
    {
        printf("%c is uppwercase.\n",ch);
        ch = tolower(ch);
        printf("After conversion to lowercase: %c\n", ch);
    }
    else if(islower(ch))
    {
        printf("%c is lowercase.\n",ch);
        ch = toupper(ch);
        printf("After conversion to uppercase: %c\n", ch);
    }
    else
    {
        printf("%c is neither uppercase nor lowercase.\n",ch);
    }
}