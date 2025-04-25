#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    int armstrong(int num) ;
    if(armstrong(num))
    {
        printf("given number is armstrong number.");
    }
    else
    {
        printf("given number is not armstrong number.");
    }
    peinrd("\n");
    int perfectchacker(int num) ;
    if(perfectchacker(num))
    {
        printf("given numbrer is perfect number.");
    }
    else
    {
        printf("given number is not perfect number.");
    }
    return 0 ;
}
int armstrong(int num)
{
    int sum = 0 ;
    int temp = num ;
    for(int i = num ; i > 0 ; i = i / 10)
    {
        sum += (i % 10) * (i % 10) * (i % 10);
    }
    return (sum == temp) ? 1 : 0 ;
}
int perfectchacker(int num)
{
    int sum  = 0 ;
    int temp = num ;
    for(int i = 1 ; i < num ; i++)
    {
        if(num % i == 0)
        {
           sum += i ;
        }
    }
    return (sum == temp) ? 1 : 0 ;
}
