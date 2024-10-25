#include <stdio.h>
void main()
{
    int num1 , num2 ;
    printf("enter number of rows : ");
    scanf("%d",&num1);
    printf("enter number of colums : ");
    scanf("%d",&num2);

    for(int i = 1 ; i <= num1 ; i++)
    {
        for(int j = 1 ; j<= num2 ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}