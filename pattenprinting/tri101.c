#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            if(j%2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    printf("--------------------------\n");
    for(int i = 1 ; i <= num ; i++)
    {
        for(int j =1 ; j <= i ; j++) 
        {
            if ((i+j) %2 == 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
    
        printf("\n");
    }
}