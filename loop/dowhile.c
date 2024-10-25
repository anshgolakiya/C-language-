#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    do
    {
        printf("%d ",num);
        num-- ;
    } while(num>=1);
}