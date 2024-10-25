#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ") ;
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("*");
        }
        printf("\n") ;
    }
    int a = num-1  ;
    for(int i = 1 ; i <= num-1 ; i++)
    {
        for(int j = 1 ; j <= a ; j++)
        {
            printf("*");
        }
         a-- ;
        printf("\n");
    }
}