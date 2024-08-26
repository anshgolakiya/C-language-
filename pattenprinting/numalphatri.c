#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    
    for(int i = 1 ; i <= num ; i++)
    {
        if (i%2 == 0)
        {
            for(int j = 1 ; j <= i ; j++)
            {
                printf("%c",j + 64) ;
            }
        }
        else 
        {
            for(int j = 1 ; j <= i ; j++ )
            {
                printf("%d",j) ;
            }
        }
        printf("\n");
    }
}