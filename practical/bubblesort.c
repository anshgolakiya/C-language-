#include <stdio.h>
int main()
{
    int num ;
    printf("Enter size of array : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("Enter an element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("assending order : ");
    for(int i = 0 ; i < num - 1 ; i++)
    {
        for(int j = 0 ; j < num - 1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\ndescending order : \n");
    for(int i = 0 ; i < num - 1 ; i++)
    {
        for(int j = 0 ; j < num - 1 ; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    printf("after bubble sort : \n");
    for(int i  = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
}