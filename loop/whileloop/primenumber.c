#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 1) 
    {
        printf("The number is neither prime nor composite.\n");
        return 0;
    }
    int isprime = 1;  
    for (int i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            isprime = 0;  
            break;      
        }
    }
    if (isprime == 1) 
    {
        printf("The given number is a prime number.\n");
    } else 
    {
        printf("The given number is a composite number.\n");
    }

    return 0;
}
