#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ") ;
    scanf("%d", &num) ;
    int reverse = 0 ;
    for(int i = num ; i > 0 ; i = i / 10)
    {
        reverse = reverse*10 + i % 10 ;
    }
    pritnf("Reverse of %d is %d", num, reverse) ;
    return 0 ;
}