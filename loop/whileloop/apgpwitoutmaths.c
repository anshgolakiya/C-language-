#include <stdio.h>
int main()
{
    int num1 ;
    printf("enter a number : ");
    scanf("%d",&num1);
    printf("AP : ");
    int add = 3 ;
    int i = 1 ;
    while(i <= num1)
    {
        printf("%d ",add);
        add += 3 ;
        i++;
    }
    int num2 ;
    printf("\nenter a number : ");
    scanf("%d",&num2);
    printf("GP :");
    int mul = 3 ;
    int j = 1 ;
    while(j <= num2)
    {
        printf("%d ",mul);
        mul *= 3 ;
        j++;
    }
}