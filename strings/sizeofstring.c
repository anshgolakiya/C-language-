#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);
    char str[num];
    printf("Enter a string : ");
    scanf("%s",&str);
    int count  = 0 ;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        count++ ;
    }
    printf("size of string : %d ",count);
}