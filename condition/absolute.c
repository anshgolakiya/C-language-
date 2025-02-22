#include <stdio.h>
int main()
{
    int num ;
    printf("enter a nunber : ");
    if(num < 0)
    {
        num = -num;
    }
    printf("absolite value is %d",num);
}