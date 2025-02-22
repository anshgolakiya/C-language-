#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int sumofdigit (int num);
    printf("sum of digit is %d.",sumofdigit(num));
    return 0 ;
}
int sumofdigit(int num)
{
    int frist = num /100 ;
    int sec = (num%100)/10 ;
    int third = num%10 ;
    int sum = frist + sec + third ;
    return sum ;
}