#include <stdio.h>
void main()
{
    int d ;
    int u;
    int a;
    int t;

    printf("enter a acceleration : ");
    scanf("%d",&a);
    printf("enter a velocity : ");
    scanf("%d",&u);
    printf("enter a time : ");
    scanf("%d",&t);

    d = u*t + a*t*t ;

    printf("disarnce = %d",d);
}