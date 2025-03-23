#include <stdio.h>
int main()
{
    int days ;
    printf("enter a days : ");
    scanf("%d",&days);
    int year = days/365 ;
    int remaining_days = days - (year*365) ;
    int week = (remaining_days%365)/7;
    int day = remaining_days % 7 ;
    printf("%d year %d week %d day.",year,week,day);
}