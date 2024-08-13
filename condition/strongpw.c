#include <stdio.h>
void main()
{
    int password ;
    printf("enter a password = ");
    scanf("%d",&password);
    if (password < 0)
    {
        password=password*-1 ;
    }
    if (password>=1000)
    {
        printf("given password is correct.");
    }
    else
    {
        printf("given password is incorrect.");

    }
}