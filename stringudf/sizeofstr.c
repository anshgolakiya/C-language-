#include <stdio.h>
int main()
{
    char str[25] ;
    puts("Enter a string : ");
    gets(str);

    int sizeofstr(char str[]) ;
    printf("size of string : %d",sizeofstr(str));
    return 0 ;
}
int sizeofstr(char str[])
{
    int size =  0 ;
    for(int i = 0 ; str[i] != 0 ; i++)
    {
        size++ ;
    }
    return size ;
}