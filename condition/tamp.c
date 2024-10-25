#include <stdio.h>
void main()
{
    int temp;
    printf("enter a temp of water : ");
    scanf("%d",&temp);

    if(temp<= 0)
    {
        printf("water is in solid form.");
    }
    if (temp>0 && temp<100)
    {
        printf("water is in licuid form.");
    }
    if(temp>=100)
    {
        printf("wateris in gasseous form.");
    }



}