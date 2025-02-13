#include <stdio.h>
int factorial(int n)
{
    int ans = 1 ;
    for(int i = 1 ; i <= n ; i++)
    {
        ans *= i ;
    }
    return ans ;
}
int ncr(int n , int r)
{
    if(r > n)
    return 0 ;
    else
    {
        return factorial(n)/(factorial(r)*factorial(n-r)) ;
    }
}
int npr(int n , int r)
{
    if(r > n)
        return 0 ;
    else
    {
        return factorial(n)/factorial(n-r) ;
    }
}
int main()
{
    int n , r;
    printf("enter a value of n : ");
    scanf("%d",&n);
    printf("enter a value of r : ");
    scanf("%d",&r);
    if(n < 0)
    {
        printf("enter a positive number.");
    }
    else
    {
        printf("ncr(%d,%d) = %d ",n,r,ncr(n,r));
        printf("npr(%d,%d) = %d ",n,r,npr(n,r));
    }
}