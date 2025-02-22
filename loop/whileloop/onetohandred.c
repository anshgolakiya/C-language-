#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int i = 1 ;
    while (i <= num)
    {
        printf("%d ",i);
        i++ ;
    }
    
}