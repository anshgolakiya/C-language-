#include <stdio.h>
int main()
{
    int num1 , num2 , num3 ;
    printf("enter a num1 : ");
    scanf("%d",&num1);
    printf("enter a num2 : ");
    scanf("%d",&num2);
    printf("enter a num3 : ");
    scanf("%d",&num3);
    int minimum(int num1 , int num2 , int num3);
    printf("minimum number is %d.",minimum(num1,num2,num3));
}
int minimum(int num1 , int num2 , int num3)
{
    int min ;
    if(num1 < num2)
    {
        if(num1 < num3)
        {
            min = num1 ;
        }
        else
        {
            min = num3 ;
        }
    }
    else
    {
        if(num2 < num3)
        {
            min = num2 ;
        }
        else
        {
            min = num3 ;
        }
    }
    return min ;  
}