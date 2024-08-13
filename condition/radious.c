#include <stdio.h>
void main()
{
    float radius ;

    printf("enter a radius : ");
    scanf("%f",&radius);

    if(radius>0)
    {
        printf("%f",3.14*radius*radius);
    }
    else
    {
      printf("given radius is not valid.");
    }

}