#include <stdio.h>
void main()
{
    char nationality ;
    int age ;
    printf("are you indian ? [y/n] : ");
    scanf("%c",&nationality);

    printf("enter your age ; ");
    scanf("%d",&age);

    if(age>18 && nationality == 'y')
    {
        printf("you can vote.");
    }
    else
    {
        printf("you can not vote.");
    }
}