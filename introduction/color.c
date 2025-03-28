#include <stdio.h>
#include <stdlib.h>
const char *computer = "\033[1;34mX\033[0m" ;
const char *BLACK = "\033[1;30m" ;
const char *RED = "\033[1;31m" ;
const char *GREEN = "\033[1;32m" ;
const char *YELLOW = "\033[1;33m" ;
const char *BLUE = "\033[1;34m" ;
const char *MAGENTA = "\033[1;35m" ;
const char *CYAN = "\033[1;36m" ;
const char *WHITE = "\033[1;37m" ;
const char *COLOR_END = "\033[0m" ;

int main()
{
    printf("Computer: %s\n", computer) ;

    printf("%sHello World%s\n", BLACK, COLOR_END) ;
    printf("%sHello World%s\n", RED, COLOR_END) ;
    printf("%sHello World%s\n", GREEN, COLOR_END) ;
    printf("%sHello World%s\n", YELLOW, COLOR_END) ;
    printf("%sHello World%s\n", BLUE, COLOR_END) ;
    printf("%sHello World%s\n", MAGENTA, COLOR_END) ;
    printf("%sHello World%s\n", CYAN, COLOR_END) ;
    printf("%sHello World%s\n", WHITE, COLOR_END) ;
    return 0 ;
}