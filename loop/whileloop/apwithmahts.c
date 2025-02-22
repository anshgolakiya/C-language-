#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int i = 1 ;
    printf("ODD : ");
    while(i <= 2*num-1)
    {
        printf("%d ",i);
        i = i + 2 ;
    }
    printf("\nEVEN : ");
    int j = 2 ;
    while(j <=2*num)
    {
        printf("%d ",j);
        j = j + 2 ;
    }
    
}