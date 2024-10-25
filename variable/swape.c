#include <stdio.h>
void main()
{
    int num1 ;
    int num2 ;
    int temp ;
    printf("enter a number 1 : ");
    scanf("%d",&num1);
    printf("enter a number 2 : ");
    scanf("%d",&num2);
    printf("num1 = %d, num2 = %d",num1,num2);
    temp = num1 ;
    num1 = num2 ;
    num2 = temp ;
    printf("\nnum1 = %d, num2 = %d",num1,num2);
    num1 = num1 + num2 ;
    num1 = num1 - num2 ;
    num2 = num1 - num2 ;
    printf("\nnum1 = %d, num2 = %d",num1,num2);
}