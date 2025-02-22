#include <stdio.h>
int main()
{
    int num , i , j , isprime ;
    printf("enter a number :  ");
    scanf("%d",&num);

    for(i = 2 ; i <= num ; i++)
    {
        isprime = 1 ;
        for(j = 2 ; j * j <= i ; j++)
        {
            if(i % j == 0)
            {
                isprime = 0 ;
                printf("composite.");
                break;
            }
        }
        if(isprime == 1)
        {
            printf("%d ",i);
        }
    }
    return 0 ;
}