#include <stdio.h>
float getsum(float num1 , float num2)
{
    return num1 + num2 ;
}
float getsub(float num1 , float num2)
{
    return num1 - num2 ;
}
float getproduct(float num1 , float num2)
{
    return num1 * num2 ;
} 
float getdiv(float num1 , float num2)
{
    return num1 / num2 ;
}
int main()
{
    float num1 , num2 ;
    char operator ;
    printf("enter a operator : ");
    scanf("%c",&operator);
    printf("enter a num1 : ");
    scanf("%f",&num1);
    printf("enter a num2 : ");
    scanf("%f",&num2);
    float result ;
    switch (operator)
    {
    case '+':
        result= getsum(num1 ,num2);
        printf("sum = %f \n",result);
        break;
    case '-':
        result = getsub(num1,num2);
        printf("sub = %f \n",result);
        break;
    case '*':
        result = getproduct(num1,num2);
        printf("product = %f \n",result);
        break;
    case '/':
        result = getdiv(num1,num2);
        printf("div = %f \n",result);
        break;
    default:
    break;
 }
    return 0 ;

}