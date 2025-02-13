#include <stdio.h>
int main()
{
    int num1 , num2  ;
    char operator ;
    int result ;
    
    printf("enter a operator : ");
    scanf("%c",&operator);
    printf("enter a number 1 : ");
    scanf("%d",&num1);
    printf("enter a number 2 : ");
    scanf("%d",&num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2 ;
        printf("result = %d",result);
        break;
    case '-':
        result = num1 - num2 ;
        printf("result = %d",result);
        break;
    case '*':
        result = num1 * num2 ;
        printf("result = %d",result);
        break;
    case '/':
        result = num1 / num2 ;
        printf("result = %d",result);
        break;
    default:
        printf("give operator id incorrect.");
        break;
    }
    return 0 ;

    
}