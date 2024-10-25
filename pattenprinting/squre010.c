#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int count ;
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j = 1 ; j <= i; j++) 
        {
            if (count%2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            count++ ;
        }
        printf("\n");
    }
}