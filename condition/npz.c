#include <stdio.h>
int main()
{
    int num ;

    printf("enter a number : ");
    scnf('%d',&num);

    if(num < 0)
    {
        printf("given number is negetive.");
    }
    else if (num == 0)
    {
        printf("given number is zero.");
    }
    else
    {
        printf("given number is positive.");
    }

}