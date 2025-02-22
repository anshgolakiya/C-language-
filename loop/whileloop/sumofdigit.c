#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number ; ");
    scanf("%d",&num);
    int sum = 0 ;
    while(num != 0)
    {
        sum = sum + num % 10 ;
        num /= 10 ;
    }
    printf("sum of digit is %d",sum);
    return 0 ;
}