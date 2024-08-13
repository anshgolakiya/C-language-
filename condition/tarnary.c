#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    (num > 0 ) ? printf("%d",num) : printf("%d",num*-1) ; 
}