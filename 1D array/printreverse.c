#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i <= num-1 ; i--)
    {
        printf("enter element number %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int j = num-1 ; j >= 0 ; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0 ;
}