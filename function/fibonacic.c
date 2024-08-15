#include <stdio.h>
int isfibonacci(int num)
{
    if(num <= 0)
    {
        printf("input is unvaid.");
        return 0 ;
    }
    else
    {
        int frist = 0 , sec = 1 , sum ;
        for(int i = 1 ; i <= num - 2 ; i++)
        {
            sum = frist + sec ;
            frist = sec ;
            sec = sum ;
        
        }
        return sec ;
    }
}
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int result = isfibonacci(num) ;
    if(result != 0)
    {
        printf("%d",result);
    }
    return 0 ;
}