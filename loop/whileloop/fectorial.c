#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int fact = 1 ;
    int i = 1 ;
    while(i <= num)
    {
        fact *= i ;
        i++ ;
    }
    printf("factorial of %d id %d",num,fact);
    return 0 ;
}