#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int frist = num / 100 ;
    int sec = (num%100)/10 ;
    int third = num%10;
    printf("sum of digit : %d",frist + sec + third);


}