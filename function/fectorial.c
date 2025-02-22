#include <stdio.h>
int isfectorial(int num)
{
    int ans = 1 ;
    for(int i = 1 ; i <= num ; i++)
    {
        ans *= i ;
    }
    return ans ;
}
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("given number is invalid.");
    }
    else
    {
        int fect = isfectorial(num);
        printf("%d",fect); 
    }
}