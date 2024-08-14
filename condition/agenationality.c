#include <stdio.h>
void main()
{
    int age ;
    char nationality ;
    printf("enter your age : ");
    scanf("%d",&age);

    if(age >0)
    {
        if(age > 18)
        {
            printf(" are you indian ?[y/n] : ");
            fflush(stdin);
            scanf("%c",&nationality);
            if (nationality=='y')
            {
                printf("you can acceptable for vote.");

            }
            else
            {
               printf("you can not acceptable for vote.");

            }
        }
        else
        {
            printf("you can not acceptable for vote.");
        }

    }
    else
    {
        printf("you can not acceptable for vote.");
    }
}