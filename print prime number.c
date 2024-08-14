#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) 
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void printPrimes()
{
    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }    
    }
}
int main() 
{
    printPrimes();  
    return 0;
}