#include <stdio.h>
#include <stdlib.h>
int main()
{
    int random_number = rand() ;
    printf("Random number is : %d\n",random_number) ;
    int random_number1 = rand() % 100 + 1 ;
    printf("Random number between 1 to 100 is : %d\n",random_number1) ;
    int random_number2 = rand() % 1000 + 1 ;
    printf("Random number between 1 to 1000 is : %d\n",random_number2) ;
    int random_number3 = rand() % 100 + 10 ;
    printf("Random number between 10 to 100 is : %d\n",random_number3) ;
    int random_number4 = rand() % 1000 + 100 ;
    
}