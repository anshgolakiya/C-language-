#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int fact = 1 ;
 
    for (int i = num  ; i >= 1 ; i--)
    {
        for(int j = 1 ; j <= i ; j++)
        {
            fact = fact * j ;
        }
        printf("%d! = %d\n",i,fact);
        fact = 1 ;
    }
}