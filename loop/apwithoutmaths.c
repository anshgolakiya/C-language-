#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d ",&num);
    int a = 4 ;
    for(int i = 1 ; i<= num ; i = i+2) // an = a + (n-1)d
    {
        printf("%d ",a);
        a = a + 3 ;
    }
}