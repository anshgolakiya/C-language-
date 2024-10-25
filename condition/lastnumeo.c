#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    int lastdigit = num % 10 ;

    printf("the last digit of given number is %d",lastdigit);

    if(lastdigit % 2 == 0)
    {
        printf("last digit is even");
    }
    else
    {
        printf("last digit is odd");
    }



}