#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    for(int i =  1 ; i <= num ; i++)
    {
        for(int j =1 ; j <= num ; j++)
        {
            int a = num/2 + 1 ;
            if(j==a || i==a)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
        
    }

}