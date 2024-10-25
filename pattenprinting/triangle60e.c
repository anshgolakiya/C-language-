#include <stdio.h>
int main()
{
    int  num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int nsp1 = 0 ;
    int nst1 = num ;
    for (int i = 0; i < num; i++) {

        for (int j = 0; j < i +1; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (num - i) - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    int nsp2 = num  ; 
    int nst2 = 1 ;
    for(int i = 1 ; i <= num ; i++)
    {
        for(int k = 1 ; k <= nsp2; k++)
        {
            printf(" ") ;
        }
        nsp2-- ;
        for(int j = 1 ; j <=nst2 ; j++)
        {
            printf("*");
        }
        nst2 +=2 ;
        printf("\n");
    }
    return 0 ;
}