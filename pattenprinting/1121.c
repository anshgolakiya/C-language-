#include <stdio.h>
void main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int nsp = num ;
    int nst = 1 ;
    for (int i = 1 ; i <= num ; i++)
    {
        int a = i-1+96;
        for(int k = 1 ; k <= nsp ; k++)
        {
            printf(" ");
        }
        nsp--;
        for(int j = 1 ; j <= i ; j++)
        {
            printf("%c",j+96);
        }
        for(int q = 1 ; q <= i-1 ; q++)
        {
            printf("%c",a);
            a--;
        }
        printf("\n");
    }
}