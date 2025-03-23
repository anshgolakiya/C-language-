#include <stdio.h>
int main()
{
    char str[100], rev[100];
    printf("Enter a string : ");
    gets(str);
    int count = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        count++ ;
    }
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        rev[i] = str[count-1] ;
        count-- ;
    }
    printf("Reverse of the string is : %s", rev);
    return 0;
}
