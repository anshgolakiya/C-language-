#include <stdio.h>
int main()
{
    int num1 ;
    float num2 ;
    char ch ;
    printf("enter a charecter : ");
    scanf("%c",&ch);

    printf("enter a intiger number : ");
    scanf("%d",&num1);
    
    printf("enter a float number : ");
    scanf("%f",&num2);
    
    printf("given intiger number is %d \n",num1);
    printf("given floth number is %f \n",num2);
    printf("given charecter is %c \n",ch);
    return 0 ;
}