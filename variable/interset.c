#include <stdio.h>
void main()
{
    int p ;
    int r ;
    int n ;

    printf("enter principal amount : ");
    scanf("%d",&p);
    printf("enter rate of interest : ");
    scanf("%d",&r);
    printf("enter number of years : ");
    scanf("%d",&n);

    printf("interest = %d",(p*r*n)/100 );
    

}