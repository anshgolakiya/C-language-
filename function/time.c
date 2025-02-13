#include <stdio.h>
int gettime(int time)
{
    int hours = time / 3600 ;
    int minute = (time % 3600)/60;
    int second = time % 60 ;
    
}
int main()
{
    int time ;
    printf("enter a time : ");
    scanf("%d",&time);
    int gettime(time);
}