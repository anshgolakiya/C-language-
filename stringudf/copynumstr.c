#include <stdio.h>
int main()
{
    char str[50] , copynumstr[50];
    printf("Enter a string : ");
    gets(str);
    int num ;
    printf("Enter the number of characters you want to copy : ");
    scanf("%d",&num);
    int i = 0 ;
    while(i < num)
    {
        copynumstr[i] = str[i] ;
        i++ ;
    }
    copynumstr[i] = '\0' ;
    printf("Copy of the string is : %s", copynumstr);
}