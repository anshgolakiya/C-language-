#include <stdio.h>
int main()
{
    int num ;
    int password = 9909 ;
    printf("enter a number : ");
    scanf("%d",&num);
    
    if(num <= 0)
    {
        num = num * -1 ;
    }
    if(password == num)
    {
        printf("given password is correct.");
    }
    else
    {
        printf("given password is incorrect.");
    }

}