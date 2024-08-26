#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int a = 1 ;
    for(int i = 1 ; i <= num ; i++)
    {
        for(int i = 1 ; i <= num ; i++)
        {
            printf("%.2d",a);
            a++;
        }
        printf("\n");
    }
}