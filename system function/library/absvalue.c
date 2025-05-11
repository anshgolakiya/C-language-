#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num < 0)
    {
        printf("num = %d",abs(num));
    }
    else
    {
        printf("num = %d",num);
    }
}