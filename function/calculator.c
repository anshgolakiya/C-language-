#include <stdio.h>
int getsum(int num1 ,int num2)
{
    return num1 + num2 ;
}
int getsub(int num1 ,int num2)
{
    return num1 - num2 ;
}
int getpro(int num1 ,int num2)
{
    return num1 * num2 ;
}
int getdiv(int num1 ,int num2)
{
    return num1 / num2 ;
}
int main()
{
    int num1 , num2 , result ;
    char operator ;
    printf("enter a number 1 : ");
    scanf("%d",&num1);
    printf("enter a number 2 : ");
    scanf("%d",&num2);
    fflush(stdin);
    printf("enter a operator : ");
    scanf("%c",&operator);

    switch (operator)
    {
    case '+':
        
        result = getsum(num1,num2);
        printf("result = %d",result);
        break;
    case '-':
        result = getsub(num1,num2);
        printf("result = %d",result);
        break;
    case '*':
        result = getpro(num1,num2);
        printf("result = %d",result);
        break;
    case '/':
        result = getdiv(num1,num2);
        printf("result = %d",result);
        break;
    
    default:
        printf("Error : invalid operator");
        break;
    }
}