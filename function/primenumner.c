#include <stdio.h>
int isprime(int num)
{
    int getprime = 1 ;
    for(int i = 2 ; i <= num-1 ; i++)
    {
        if(num%i == 0)
        {
            getprime = 0 ;
        }
    }
    return getprime ;
}
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    
    int prime = isprime(num);

    if(prime == 1)
    {
        printf("%d is prime number.",num);
    }
    else
    {
        printf("%d is composite number.",num);
    }
}