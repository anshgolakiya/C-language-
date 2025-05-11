#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void clear_screen()
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
int main()
{
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);

    for(int i = 1 ; i <= num ; i++)
    {
        clear_screen();
        printf("num = %d",i);
        sleep(1) ;
    }
}