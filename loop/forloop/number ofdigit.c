#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number :");
    scanf("%d",&num);
    int count = 0 ;
    for( ;num != 0 ;)
    {
        num = num / 10 ;
        count ++ ;
    }
    printf("%d",count);
}