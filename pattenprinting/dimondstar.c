#include <stdio.h>
int main()
{
    int num;
    printf("enter a number : ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            
            
            if (j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for (int i = num -1 ; i >= 1; i--)
    {
        for (int j = i; j < num; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            
            
            if (j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }

        return 0;
}