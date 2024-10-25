#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j = 1 ; j <= num ; j++)
        {
            printf("%c",j + 64);
        }
        printf("\n");
    }
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%c",j + 64);
        }
        printf("\n");
    }
}