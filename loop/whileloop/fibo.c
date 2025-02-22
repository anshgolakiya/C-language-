#include <stdio.h>
int main()
{
    int num ;
    printf("enter a nuber : ");
    scanf("%d",&num);
    int frist = 0 ;
    int sec = 1 ;
    int i = 1 ;
    while(i <= num)
    {
        int sum = frist + sec ; 
        printf("%.2d",sum) ;
        frist = sec ;
        sec = sum ;
        i++ ;
    }
}