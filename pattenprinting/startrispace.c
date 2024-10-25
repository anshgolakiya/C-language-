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
        }
        printf("\n");
    }
    // printf("----------------------------\n");
    int a = num ;
    for(int i = 1 ; i <= num ; i++)
    {
        for (int k = 1 ; k <= i-1; k++) 
        // startriside nu oppose mate k <= i
        {
            printf(" ");
        }
        for( int j = 1 ; j <= num - i+1; j++)
        {
            printf("*") ;
        }
        printf("\n") ;
    }

}