#include <stdio.h>
void main()
{
    int num1 ;
    printf("enter a number : ");
    scanf("%d",&num1) ;
    printf("type 1\n") ;
    for(int i = 1 ; i <= num1 ;i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%d",j) ;
        }
        printf("\n");
    }
     printf("------------type 2--------------\n");
     int a = num1 ;
     for(int i = 1 ; i <= num1 ;i++)
    {
        for(int j = 1 ; j <= a ; j++)
        {
            printf("%d",j) ;
        }
        a-- ;
        printf("\n");
    }
}