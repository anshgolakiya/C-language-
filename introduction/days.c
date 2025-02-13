#include <stdio.h>
int main()
{
    int days ;
    printf("enter a days : ");
    scanf("%d",&days);
    int year = days / 365 ;
    int week = (days%365)/7 ;
    int day = days%7 ;
    printf("%d years %d weeks %d days",year,week,day);
}