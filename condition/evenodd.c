#include <stdio.h>
int main()
{
    int  num;

    printf("enter a number : ");
    scanf("%d",&num);

    if(num%2 == 0)
    {
        printf("given number is even number.");
    }
    else
    {
        printf("given number is odd number.");
    }
    return 0 ;
}