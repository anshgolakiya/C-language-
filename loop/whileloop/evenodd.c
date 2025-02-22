#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int i = 2 ;
    printf("even number without maths : ");
    while(i <= num)
    {
        printf("%d ",i);
        i = i + 2 ;
    }
    int j = 1 ;
    printf("\neven number with maths : ");
    while(j <= num)
    {
        if(j % 2 == 0)
        {
            printf("%d ",j);
        }
        j++ ;
    }
    int a = 1 ;
    printf("\neven number without maths : ");
    while(a <= num)
    {
        printf("%d ",a);
        a = a + 2 ;
    }
    int b = 1 ;
    printf("\neven number with maths : ");
    while(b <= num)
    {
        if(b % 2 != 0)
        {
            printf("%d ",b);
        }
        b++ ;
    }
}