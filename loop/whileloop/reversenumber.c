#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number " );
    scanf("%d",&num);
    int reverse = 0 ;
    while(num != 0)
    {
        reverse = reverse * 10 + num % 10 ;
        num = num / 10 ;
    }
    printf("reverse number id %d",reverse );
    return 0 ;
}