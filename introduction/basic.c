#include <stdio.h>
int main()
{
    int num1 = 5;
    float pi = 3.1415 ;
    char ch = 'A' ;
    double num2 = 3438 ;
    printf("num1 = %d size = %lu",num1,sizeof(num1));
    printf("pi = %d size = %lu",num1,sizeof(pi));
    printf("ch = %d size = %lu",num1,sizeof(ch));
    printf("num2 = %d size = %lu",num1,sizeof(num2));
    
    return 0 ;
}