#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++)
    {
        for (int k = 1 ; k <= num - i; k++)
        {
            printf(" ");
        }
        for( int j = 1 ; j <= i ; j++)
        {
            printf("*");
            // printf("%c",j+96); // 96 transvared in 64.
        }
        printf("\n");
    }
}