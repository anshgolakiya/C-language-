#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    printf("odd num : ");
    for(int i = 1 ; i <= num ; i = i + 2)
    {
        printf("%d ",i);
    }

    printf("\neven number : ");
    for(int i = 2 ; i <= num ; i = i + 2)
    {
        printf("%d ",i);
    }
}