#include <stdio.h>
int main()
{
    char str[50] , copystr[50];
    printf("Enter a string : ");
    gets(str);
    int count = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        count++ ;
    }
    for(int i = 0 ; i <= count ; i++)
    {
        copystr[i] = str[i] ;
    }
    printf("Copy of the string is : %s", copystr);
    return 0;
}