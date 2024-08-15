#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number ; ");
    scanf("%d",&num);
    int a = 0 ;
    int i ;
    for (i =2 ; i<= num-1 ; i++)
    {
        if (num%i == 0)
        {
            a = 1 ;
            break;
        }     
    }
    if (a ==0) 
    {
        printf("our number is prime.");
    }
    else
    {
        printf("our number is composite.");
    }
    
}
