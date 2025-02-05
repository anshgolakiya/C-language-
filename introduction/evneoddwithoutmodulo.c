#include <stdio.h>
int main() {
    int num;

    // Taking user input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Checking even or odd using bitwise AND operator
    if ((num & 1) == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    return 0;
}