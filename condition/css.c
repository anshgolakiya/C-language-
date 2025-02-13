#include <stdio.h>
int main()
{
    char input ;
    printf("enter your input: ");
    scanf("%c",&input);
    int num = (int)input ;
    if  (num >= 65 && num <= 90)
    {
        printf("given is capital alphabet");
    }
    else if  (num >= 97 && num <= 122)
    {
        printf("given is small alphabrt.");

    }
    else if (num >= 47 && num <= 57)
    {
        printf("given is digit.");
    }
    else
    { 
        printf("given is special charactor. ");
    }
    
}