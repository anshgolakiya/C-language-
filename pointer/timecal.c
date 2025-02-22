#include <stdio.h>
int main()
{
    int time , hours , minute , second ;
    printf("enter a time in second : ");
    scanf("%d",&time);

    void timecalculator(int time , int *hours , int *minute , int *second);
    timecalculator(time , &hours ,&minute  , &second);
    printf("%d hours %d minute %d second",hours,minute,second);

    return 0 ;
}
void timecalculator(int time , int *hours , int *minute , int *second)
{
    *hours = time/3600 ;
    *minute = (time%3600)/60 ;
    *second = time%60 ;

}