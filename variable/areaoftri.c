#include <stdio.h>
void main()
{
    int height ;
    int base ;
    int area ;

    printf("enter hright : ");
    scanf("%d",&height);
    printf("enter base : ");
    scanf("%d",&base);

    area = (height*base)/2 ;
    printf("%d",area);
}