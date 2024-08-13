#include <stdio.h>
void main()
{
    int num1 ;
    printf("enter a number 1 : ");
    scanf("%d",&num1);
    int a = 1 ;
    for(int i =1 ; i<=num1 ; i++)
    {
        printf("%d\n ",a);
        a = a*2 ;
    }
    int num2 ;
    printf("enter number 2 : ");
    scanf("%d",&num2);
    int b = 3 ;
    for(int i = 1 ; i <= num2 ; i++)
    {
        printf("%d\n ",b);
        b = b*4 ;   
    }

}