#include <stdio.h>
int main()
{
    int num ;
    printf("Entera number : ");
    scanf("%d",&num) ;
    int fibonasis(int num) ;
    printf("%d",fibonasis(num));
}
int fibonasis(int num)
{
    int frist = 0 ;
    int sec = 1 ;
    int sum ;
    int fibosum = 0 ;
    for(int i = 0 ; i <= num ; i++)
    {
        sum = frist + sec ;
        fibosum += sum ;
        frist = sec ;
        sec = sum ;
    }
    return fibosum ;
}