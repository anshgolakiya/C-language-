#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ;i++)
    {
        printf("enter  a element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num ;i++)
    {
        printf("%d ",arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size of array : %d",size);
    return 0 ;
}