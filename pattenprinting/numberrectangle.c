#include <stdio.h>
void main()
{
    int num1 ;
    printf("enter a number of rows : ");
    scanf("%d",&num1) ;
    int num2 ;
    printf("enter a number of colum : ");
    scanf("%d",&num2) ;

    for(int i = 1 ; i <= num2 ;i++)
    {
        for(int j = 1 ; j <= num1 ; j++)
        {
            printf("%d",j) ;
        }
        printf("\n");
    }
    
}