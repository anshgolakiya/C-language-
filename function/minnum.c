#include <stdio.h>
int minimum(int num1 ,int num2)
{
    int minimum = num1 ;
    if(num2 < num1)
    {
        minimum = num2 ;
    }
    return minimum ;
}
int main()
{
    int num1 , num2 ;
    printf("enter a number 1 : ");
    scanf("%d",&num1);
    printf("enter a number 2 : ");
    scanf("%d",&num2);
    int min = minimum(num1 ,num2);
    printf("%d",min);
    return 0 ;
}