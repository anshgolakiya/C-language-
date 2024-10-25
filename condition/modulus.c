#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    if(num%3 == 0)
    {
        printf("Given number is multiple of 3.");
    }
    else
    {
        printf("Given number is not multiple of 3.");
    }


}
