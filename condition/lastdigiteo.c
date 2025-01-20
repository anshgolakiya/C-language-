#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scenf("%d",&num);

    int lastdigit = num % 10 ;
    printf("lastdigit = %d",lastdigit);

    if(lastdigit % 2 == 0)
    {
        printf("given number's lastdigit is even number.");
    }
    else
    {
        printf("given number's lastdigit is odd number.");
    }
}