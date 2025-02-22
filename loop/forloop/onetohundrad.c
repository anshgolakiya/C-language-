#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);

    for (int i = 1; i <= num; i++)
    {
        printf("%d ",i);
    }
    printf("\nreverse : \n");
    for(int i = num ; i >= 1 ; i--)
    {
        printf("%d ",i);
    }
    
}