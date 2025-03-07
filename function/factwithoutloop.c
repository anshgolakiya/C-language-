#include <stdio.h>
int main()
{
    int num ;
    printf("ente a number :");
    scanf("%d",&num);
    int fact(int num) ;
    printf("given number factorial = %d ",fact(num));
}
int fact(int num)
{
    if(num == 1)
        return 1 ;
    else
        return num*fact(num-1);

    return fact ;
}

