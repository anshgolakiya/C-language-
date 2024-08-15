#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int a = 1 ;
    int b = 2 ;

    for (int i = 1 ; i<=num ;i++)
    {
         printf("%d",a);
         a = a + 2 ;
    }
    printf("\n");
    for (int i = 1 ; i <=num ;i++ )
    {
        printf("%d",b);
        b = b + 2 ;
    }
       



}