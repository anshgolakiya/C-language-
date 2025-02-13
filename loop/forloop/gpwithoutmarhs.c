#include <stdio.h>
int main()
{
    int num ;
    int add ;
    int start ;

    printf("enter a number : ");
    scanf("%d",&num);
    printf("enter addition number : ");
    scanf("%d",&add);
    printf("ent a starting number : ");
    scanf("%d",&start);
    int a = start ;

    for(int i = 1 ; i <= num ; i++ )
    {
        printf("%d ",a);
        a = a * add ;
    }
}