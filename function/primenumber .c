#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num) {
    if (num == 1) {
        return true; 
    }
    if (num == 2) {
        return true; 
    }
    if (num % 2 == 0) {
        return false;
    }
    int count = 1 ;
    for(int i = 3 ; i <= num ; i++)
    {
        if(num%i == 0)
        {
            count++ ;
        }   
    }
        if (count == 2)
        {
            return true ;
        }
        else
        {
            return false ;
        }
    return true; 
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPrime(number))
    {
        printf("prime number");
    }
    else{
        printf("not prime number");
    }
    return 0;
}