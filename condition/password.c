#include <stdio.h>
int main()
{
    int password , correctpassword = 9909 ;

    printf("enter password : ");
    scanf("%d",&password);

    if(correctpassword == password)
    {
        printf("given password is correct.");
    }
    else
    {
        printf("incorrect passwoed.");
    }
    return 0 ;
}