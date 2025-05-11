#include <stdio.h>
#include <string.h>
int main()
{
    char destination[25] = "hello world " ;
    char source[] = "hello humans" ;

    strcat(destination , source);

    printf("%s",destination);

}