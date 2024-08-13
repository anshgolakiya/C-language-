#include <stdio.h>
void main()
{
    char ch1 ;
    printf("enter a charector : ");
    scanf("%c",&ch1);
    
    int new1 = (int)ch1 ;
    int new2 = new1 + 32 ;
    char ch2 = (char)new2 ;

    printf("%c\n",ch2);

    int new3 = (int)ch2 ;
    int new4 = new3 - 32 ;
    char ch3 = (char)new4 ;

    printf("%c",ch3);
}   