#include <stdio.h>
void main()
{
    int num ;
    printf("enter a password : ");
    scanf("%d",&num);


    if(num<0)
    {
        num = num*-1 ;
    }
    if (num>=1000)
    {
        printf("%d password is correct.",num);
    }
    else
    {
        printf("given password is incorrect.");

    }

}
