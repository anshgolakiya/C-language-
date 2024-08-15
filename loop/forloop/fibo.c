#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number :");
    scanf("%d",&num);
    int frist = 0 ;
    int sec = 1 ;
    int sum ;
    
    for(int i = 1 ; i<=num ; i++)
    {
        int sum = frist + sec ;
        printf("%.2d ",sum);
        frist = sec ;
        sec = sum ;
    }

}