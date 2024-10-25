#include <stdio.h>
#include <stdlib.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    
    num = abs(num);
    printf("given number is %d",num);
}