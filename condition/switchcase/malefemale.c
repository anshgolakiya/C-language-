#include <stdio.h>
int main()
{
    int gender ;
    printf("enter a your gender (M/m and F/f) : ");
    scanf("%c",&gender);

    switch (gender)
    {
    case 'm':
    case 'M':
        printf("Male");
        break;
    case 'f':
    case 'F':
        printf("Female");
        break;
    default:
    printf("Unspecified Gender.");
        break;
    }
    return 0 ;
}