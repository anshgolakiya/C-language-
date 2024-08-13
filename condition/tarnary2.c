#include <stdio.h>
void main()
{
    char ch ;
    printf("enter a word : ");
    scanf("%c",&ch);

    (ch>='a' && ch<='z') ? printf("lowercase") :
    ((ch>='A' && ch<='Z') ? printf("uppercase"):)
    ((ch>=0 && ch<=9) ? printf("numbers"));
}