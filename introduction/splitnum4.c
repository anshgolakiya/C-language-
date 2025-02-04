#include <stdio.h>
int main()
{
    int num ;

    printf("enter a number : ");
    scanf("%d",&num);

    int frist = num / 1000 ;
    int sec = (num % 1000) / 100 ;
    int third = (num % 100) / 10 ;
    int four = num % 10 ;

    printf("frist = %d , second = %d , third = %d , four = %d",frist,sec,third,four);

    // sum of split number ;

    int sum = frist + sec + third + four ;

    printf("\nsum = %d",sum);
    return 0 ;
}