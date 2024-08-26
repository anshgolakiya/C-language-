#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("--------type 1 -----------\n");
    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = 1 ; j <= num + 1 - i ; j++)
        {
            printf("*");

        }
        printf("\n");
    }
    printf("--------type 2-----------\n");
    int a = num ;
    for (int i = 1 ; i <= num ; i++)
    {
        for (int j = 1 ; j <= a ; j++)
        {
            printf("*");

        }
        a-- ;
        printf("\n");
    }
}