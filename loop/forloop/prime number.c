#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int isprime = 1 ;
    int i ;
    for(i = 2 ; i <= num -1  ; i++)
    {
        if(num % i == 0)
        {
            isprime = 0 ;
            // printf("composite.\n");
            break;
        }
    }
    if(isprime == 1)
    {
        printf("%d is prime number.",num);
    }
    else
    {
        printf("%d is composite number.",num);
    }
}