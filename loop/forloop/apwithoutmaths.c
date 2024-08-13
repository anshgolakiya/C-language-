#include <stdio.h>
void main()
{
    int num ; 
    printf("enter a number : ");
    scanf("%d",&num);
    int a = 3;
    for(int i = 1 ; i<=num ;i++)
    {
        printf("%d ",a);
        a = a*8;
    }
}