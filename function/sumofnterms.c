#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int sumofnterms(int num);
    printf("sum of n terms : %d",sumofnterms(num));
}
int sumofnterms(int num)
{
    int sum = 0 ;
    for(int i  = 1 ; i <= num ; i++)
    {
        sum += i ;
    }
    return sum ;
}