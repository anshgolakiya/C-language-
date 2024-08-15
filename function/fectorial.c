#include <stdio.h>
int isfactorial(int num )
{
    int ans = 1 ;
    int i = 1 ;
    while(i <= num)
    {
        ans *= i ;
        i++ ;
    }
    return ans ;
}
int main()
{
    int num ;
    printf("enter a number :");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("given number is invalid");
    }
    else
    {
        int fact = isfactorial(num) ;
        printf("%d",fact);
    }
}   