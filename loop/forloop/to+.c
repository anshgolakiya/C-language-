#include <stdio.h>
void main()
{
    int b = 100 ;
    for (int i =1 ; b > 0 ; i++) //* upto all terms which are positive.
    {
        printf("%d ",b);
        b = b - 3 ;             
    }
}