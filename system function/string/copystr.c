#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "hello world" ;
    char destination[25] ;

    strcpy(destination , source) ;

    printf("source string : %s\n",source);
    printf("copied string : %s",destination);
}