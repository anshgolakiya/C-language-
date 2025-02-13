#include <stdio.h>
int main()
{
    int num  ;

    printf("enter a number : ");
    scanf("%d",&num);
    printf("odd number :");
    for(int i = 1 ; i <= 2*num-1 ; i = i + 2)
    {
        printf("%d ",i);
    }
    printf("\neven number :");
    for(int i = 2 ; i <= 2*num ; i = i + 2)
    {
        printf("%d ",i);
    }
}