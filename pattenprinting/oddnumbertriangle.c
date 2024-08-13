#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int a = 2 ;
    for(int i = 1 ; i <= num ; i++)
    {
        
        for(int j = 1 ; j <= num ; j++)
        {
            printf("%d ",a);
            a = a + 2 ;
        }
        printf("\n") ;
    }
    printf("-------------------\n");
    for(int i = 1 ; i <= num ; i++)
    {
        int a = 1 ;
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%d",a);
            a = a + 2 ;
        }
        printf("\n") ;
    
    }
}
    
   
