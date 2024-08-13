#include <stdio.h>
void main()
{
    int c ;
    int f ;
    printf("enter a temperature in celsius : ");
    scanf("%d",&c);

    f = (9*c)/5 + 32 ;

    printf ("temperature fahrenhrit : %d",f);

}