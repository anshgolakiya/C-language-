#include <stdio.h>
int main()
{
    for(int i = 65 ; i <= 90 ; i++)
    {
        printf("%c ",i);
    }
    printf("\n----------------------\n");
    for(int i = 90 ; i >= 65 ; i--)
    {
        printf("%c ",i);
    }
}