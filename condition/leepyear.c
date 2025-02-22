#include <stdio.h>
int main()
{
    int year ;
    printf("enter a year : ");
    scanf("%d",&year);
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("given year %d is leep year.",year);
    }
    else
    {
        printf("given year %d is not leep year.",year);
    }
    
}