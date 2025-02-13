#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int positivenumber = abs(num);
    printf("positive number is %d",positivenumber);
}