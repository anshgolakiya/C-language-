#include <stdio.h>
#include <math.h>
 
int main()
{
    int num,x;
    int result;
 
    printf("Enter the value of base: ");
    scanf("%d",&num);
    printf("Enter the value of power: ");
    scanf("%d",&x);
     
    result =pow((double)num,x);
 
    printf("%d to the power of %d is= %d", num,x, result);
    return 0;
}