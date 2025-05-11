#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%ch", &ch);

    if (isupper(ch)) 
    {
        printf("%c is uppercase.\n", ch);
    } 
    else if (islower(ch)) 
    {
        printf("%c is lowercase.\n", ch);
    } else 
    {
        printf("%c is neither uppercase nor lowercase.\n", ch);
    }

    return 0;
}