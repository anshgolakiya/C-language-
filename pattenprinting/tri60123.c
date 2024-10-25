#include <stdio.h>
void main()
{
    int num ;
    printf(":enter a number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num  ; i++)
    {
        for(int k = 1 ; k <= i-1; k++)
        {
        printf(" ");
        }
        for(int j = 1 ; j <= num + 1 - i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 1 ; i <= num ; i++)
    {
        for(int k = 1 ; k <= num - i ; k++)
        {
            printf(" ");
        }
        for(int j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}