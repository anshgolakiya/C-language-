#include <stdio.h>
void main() {
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int len = 0;

    while (num != 0) {
        len++;
        num /= 10;
    }
    printf(" the lenght of given number is %d ", len);
}