#include<stdio.h>
int main()
{
    int a, b, c, d ;
    printf("enter a : ");
    scanf("%d",&a);
    printf("enter b : ");
    scanf("%d",&b);
    printf("enter c : ");
    scanf("%d",&c);
    printf("enter d : ");
    scanf("%d",&d);
    
    if(a>b&&a>c&&a>d)
    {
        printf("a is largest number");
    }
    else if(b>a&&b>c&&b>d)
    {
        printf("b is largest number");
    }
    else if(c>a&&b>c&&c>d)
    {
        printf("c is largest number");
    }
    else
    {
        printf("d is largest number");
    }
    
    return 0;
}