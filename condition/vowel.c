#include <stdio.h>
int main()
{
    char vowel ;

    printf("enter a alphabet : ");
    scanf("%c",&vowel);

    if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
    {
        printf("given alphabet is vowel.");
    }
    else if(vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U')
    {
        printf("given alphabet is vowel.");
    }
    else
    {
        printf("given alphabet is not vowel.");
    }
}