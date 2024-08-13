#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int frist , sec , third;
    frist = num / 100 ;
    sec = (num/100)%10 ;
    third = num% 10 ;
    int sum = frist + sec + third ;
    printf("sum pf given number digit is %d",sum);


}