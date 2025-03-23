#include <stdio.h>
int main()
{
    char str1[50] ,str2[50];
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    int i , j ;
    for(i = 0 ; str1[i] != '\0' ; i++)
    {
    }
    for(j = 0 ; str2[j] != '\0' ; j++)
    {
        str1[i] = str2[j] ;
        i++ ;
    }
    str1[i] = '\0' ;
    printf("Concatenated string is : %s",str1);
    return 0;
}