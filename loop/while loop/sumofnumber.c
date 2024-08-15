#include <stdio.h>
void main()
{
    int number ;
    printf("enter a number : ");
    scanf("%d",&number);
    int originalnumber = number ;
    int ld ;
    int sum = 0 ;

    while(number != 0)
    {
        ld = number % 10 ;
        sum += ld ;
        number /= 10 ;
    }
     printf("given number 's digits sum is %d",sum) ;
}