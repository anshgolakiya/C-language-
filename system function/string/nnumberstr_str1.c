#include <stdio.h>
#include <string.h>
int main()
{
    char str1[25] = "hello world " ;
    char str2[] = "hello human" ;

    strncat(str1 , str2 , 5);

    printf("%s",str1);

}