#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int mark[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i);
        scanf("%d",&mark[i]);
    }
    for(int i = 0 ; i < num ; i++)
    {
        if(mark[i] <=35)
        {
            printf("%d ",i+1);
        }
    }
}