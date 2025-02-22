#include <stdio.h>
int main()
{
    int modulo , number ;
    printf("enter a number : ");
    scanf("%d",&number);
    modulo = number % 7;
    printf("%d",modulo);
}