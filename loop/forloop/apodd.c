#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    for(int i =1 ;i<=2*num -1 ;i=i+2)
    {
        printf("%d ",i);
    }
}