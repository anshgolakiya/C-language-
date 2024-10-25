#include <stdio.h>
void main()
{
    int num1 ;
    int num2 ;
    int num3 ;

    printf("enter num1 : ");
    scanf("%d",&num1);
    printf("enter num2 : ");
    scanf("%d",&num2);
    printf("enter num3 : ");
    scanf("%d",&num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("maximum number is %d",num1); 
        }
        else
        {
            printf("maximum number is %d",num3);
        }   
    }
    else
    {
        if (num2>num3)
        {
            printf("maximum number is %d",num2);
        }
        else
        {
            printf("maximum number is %d",num3);
        }
    }

}