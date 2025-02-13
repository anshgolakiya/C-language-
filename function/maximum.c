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
    int maximum(int num1 , int num2 , int num3);
    printf("maximum number is %d.",maximum(num1,num2,num3));
}
int maximum(int num1 , int num2 , int num3)
{
    int max ;
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            max = num1 ;
        }
        else
        {
            max = num3 ;
        }
    }
    else
    {
        if(num2 > num3)
        {
            max = num2 ;
        }
        else
        {
            max = num3 ;
        }
    }
    return max ;  
}