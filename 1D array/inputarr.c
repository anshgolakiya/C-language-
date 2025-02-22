#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int j = 0 ; j < num ; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0 ;
}