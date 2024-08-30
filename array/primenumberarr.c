#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // If divisible by any number other than 1 and itself, not prime
    }
    return 1; // The number is prime
}

// Function to count prime numbers in an array
int countPrimes(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int primeCount = countPrimes(arr, size);
    printf("Number of prime numbers in the array: %d\n", primeCount);

    return 0;
}