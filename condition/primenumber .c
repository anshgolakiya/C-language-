#include <stdio.h>
int main()
{
    int num ;
    printf("enter a num : ");
    scanf("%d",&num);
    int count;
    for(int i = 1 ; i <= num ; i++)
    {
    if(num%i == 0)
    {
        count ++ ;
    }
    }
    printf("%d",count);
}