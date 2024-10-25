#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
     
     int frist = num/1000 ;
     int sec = (num % 1000)/100 ;
     int three = (num%100)/10 ;
     int four = num % 10 ;

    printf("frist = %d , sce = %d , three = %d , four = %d",frist ,sec,three,four);
}