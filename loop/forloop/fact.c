#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int fact = 1 ;
    for (int j = num; j >= 1 ; j-- )
    {
        for(int i = 1 ; i <= j ; i++)
        {
            fact = fact*i;
        }
        printf("%d! = %d\n",j,fact );
        fact = 1;
    }
    
}