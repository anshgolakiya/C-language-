#include <stdio.h>
#include <string.h>
int main()
{
    char str[25] ;
    puts("Enter a string : ");
    gets(str);
    int sizeofstr = strlen(str);
    printf("size of string : %d ",sizeofstr);

}