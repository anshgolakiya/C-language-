#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter a element number : ");
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i = 0 ; i < num-1 ; i++)
    {
        for(int j = 0 ; j < num-1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
            }
        }
    }
    printf("\n");
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}