#include <stdio.h>
#include <string.h>
int main()
{
    char source[] = "Hello world" ;
    char destination[25] ;

    strncpy(destination, source ,5);
    destination[5] = '\0' ;

    printf("source string : %s\n",source);
    printf("n number copied string : %s ",destination);
}