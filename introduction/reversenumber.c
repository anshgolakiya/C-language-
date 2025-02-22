#include <stdio.h>
int main()
{
    int num  ;
    printf("enter a number :");
    scanf("%d",&num);
    int frist = num / 100 ;
    int sec = (num%100)/10 ;
    int third = num%10;
    int reverse = third*100 + sec*10 + frist ;
    printf("%d",reverse);
}