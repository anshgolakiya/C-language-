#include <stdio.h>
int main()
{
    int num ;
    printf("Enter a number : ") ;
    scanf("%d",&num);
    int evenchacker(int num) ;
    if(evenchacker(num))
    {
        printf("given number is even number.");
    }
    else{
        printf("given numeber is odd number.");
    }
}
int evenchacker(int num)
{
    return (num % 2 == 0) ? 1 : 0 ;
    // return ((num & 1) == 0) ? 1 : 0 ;
}