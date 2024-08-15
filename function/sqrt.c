#include <stdio.h>
#include <math.h>
int main()
{
    int num1;
    printf("enter a number 1 : ");
    scanf("%d",&num1);

    int root = sqrt(num1);
    printf("the square root is %d",root);
    return 0 ;
}