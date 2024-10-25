#include <stdio.h>
void main()
{
    char operator ;
    double num1 ;
    double num2 ;
    double result ;

     printf("enter a operator : ");
    scanf("%c",&operator);

    printf("enter anumber a : ");
    scanf("%lf",&num1);
    printf("enter anumber a : ");
    scanf("%lf",&num2);

   
    switch (operator)
    {
    case '+' :
        result = num1 + num2 ;
        printf("%lf",result);
        break;
    case '-' :
        result = num1 - num2 ;
        printf("%lf",result);
        break;
    case '*' :
        result = num1 * num2 ;
        printf("%lf",result);
        break;
    case '/' :
        result = num1 / num2 ;
        printf("%lf",result);
        break;
    case '%':
        result = (int)num1 % (int)num2 ;
        printf("%lf",result);
    
    default:
        printf("given operator is not valid.");
        break;
    }
}