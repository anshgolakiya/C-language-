#include <stdio.h>
int main()
{
    int start , end ;
    printf("enter a start : ");
    scanf("%d",&start);
    printf("enter a end : ");
    scanf("%d",&end);

    for(int i = start ; i <= end ; i++)
    {
        for(int j = 1 ; j <= 10 ; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("----------------\n");
    }
    for(int i = end ; i >= start ; i++)
    {
        for(int j = 1 ; j <= 10 ; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("----------------\n");
    }

}