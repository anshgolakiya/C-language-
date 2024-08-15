#include <stdio.h>
void main()
{
    float kilometer ;
    float meter ;
    float feet ;
    printf("enter a kilometer : ");
    scanf("%f",&kilometer);

    meter = kilometer * 1000;
    feet = kilometer * 3280.84 ;

    printf("meter = %f",meter);
    printf("feet = %f",feet);

}