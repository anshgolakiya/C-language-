#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ") ;
    scanf("%d", &num) ;
    int sum = 0 ;
    for(int i = num ; i > 0 ; i = i / 10)
    {
        sum = sum + i % 10 ;
    }
    pritnf("Sum of digits of %d is %d", num, sum) ;
    return 0 ;
}