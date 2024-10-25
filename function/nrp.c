#include <stdio.h>
int  factorial (int n)
{
    int fact = 1 ;
    for(int i =1 ; i <= n ; i++)
    {
        fact *= i ;
    } 
    return fact ;
}
int npr(int n , int r)
{
    return factorial(n) / factorial(n-r);
}
int ncr (int n , int r)
{
    return factorial(n) / factorial(r) * factorial(n-r);
}
int main()
{
    int n , r ;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("enter a r : ");
    scanf("%d",&r);

    if(n >= r)
    {
        printf("npr = %d\n", npr(n , r));
        printf("ncr = %d", ncr(n , r));
    }
    else
    {
        printf("invalid input ");
    }
}