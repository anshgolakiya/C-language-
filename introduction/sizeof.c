#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    printf("given number = %d if oqupite = %lu bytes",num,sizeof(num));
    return 0 ;
}