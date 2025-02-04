#include <stdio.h>
int main()
{
    int num1 , num2 , num3 ;
    int temp ;

    printf("enter a num1 : ");
    scanf("%d",&num1);
    printf("enter a num2 : ");
    scanf("%d",&num2);
    printf("enter a num3 : ");
    scanf("%d",&num3);
    temp =  num1 ;
    num1 =  num2 ;
    num2 =  num3 ;
    num3 =  temp ;
    printf("num1 = %d \n",num1);
    printf("num2 = %d \n",num2);
    printf("num3 = %d \n",num3); 
    return 0 ;
}