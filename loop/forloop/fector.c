#include <stdio.h>
int main()
{
    int num ; 
    printf("enter a number for find fector : ");
    scanf("%d",&num);
    printf("fector of %d : ",num);
    for(int i = 1 ; i <= num ; i++)
    {
        if(num % i == 0)
        {
            printf("%d ",i);
        }
    }
}