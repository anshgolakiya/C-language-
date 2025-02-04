#include <stdio.h>
int main()
{
    int time ;
    printf("enter a time in second : ");
    scanf("%d",&time);
    int hours = time /3600 ;
    int minute = (time%3600)/60;
    int second = time % 60 ;
    printf("%d hours %d minute %d second",hours,minute,second);
}