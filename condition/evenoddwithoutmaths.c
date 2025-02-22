#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    if((num & 1)==0)
    {
        printf("given number %d is even number.",num);
    }
    else
    {
        printf("givrn number %d is odd number.",num);
    }
}