#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int getreverse(int num);
    printf("reverse number is %d.",getreverse(num));
}
int getreverse(int num)
{
    int reverse = 0 ;
    for(int i = num ; i > 0 ; i = i / 10)
    {
        reverse = reverse * 10 + i % 10 ;
    }
    return reverse ;
}