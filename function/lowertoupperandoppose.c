#include <ctype.h>
#include <stdio.h>
void main()
{
    char ch ;
    printf("enter a word : ");
    scanf("%c",&ch);

     ch= tolower(ch);

    printf("given word in lower case is %c \n",ch);

    ch = toupper(ch);

    printf("ch = %c",ch);



}