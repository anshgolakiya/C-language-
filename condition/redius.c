#include <stdio.h>
int main()
{
    float radious ;
    printf("enter a radious : ");
    scanf("%f",&radious);

    if(radious > 0 )
    {
        printf("area of circle is %.2f",3.14*radious*radious);
    }
    else if (radious == 0)
    {
        printf("area of circle is zero.");
    }
    else
    {
        printf("redius is negetive , please enter positive redius.");
    }
    
}