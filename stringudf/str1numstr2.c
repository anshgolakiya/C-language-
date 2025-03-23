#include <stdio.h>
int main()
{
    char str1[50] ,str2[50];
    int num ;
    printf("Enter the first string : ");
    gets(str1);
    printf("Enter the second string : ");
    gets(str2);
    printf("Enter the number of characters you want to copy : ");
    scanf("%d",&num);
    int i , j ;
    for(i = 0 ; str1[i] != '\0' ; i++)
    {
    }
    for(j = 0 ; j < num; j++)
    {
        str1[i] = str2[j] ;
        i++ ;
    }
    str1[i] = '\0' ;
    printf("Concatenated string is : %s",str1);
    return 0;
}