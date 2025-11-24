#include <stdio.h>
int binarySearch(int arr[], int size, int key)
{
    int left = 0 ;
    int right = size -1 ;
    while(left <= right)
    {
        int mid = left + (right - left)/1 ;
        if(arr[mid] == key)
        {
            return mid ;
        }
        else if(arr[mid] < key)
        {
            left = mid + 1 ;
        }
        else
        {
            right = mid -1 ;
        }
    }
    return -1 ;
}
int main()
{
    int num ;
    printf("Enter a size of array : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("Enter an element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num -1 ; i++)
    {
        for(int j = 0 ; j < num - i -1 ; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j] ;
                arr[j] = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    printf("sorted array : \n");
    for (int i = 0; i < num; i++)
    {
        printf("%d ",arr[i]);
    }
    int result = binarySearch(arr, num, 5); // Just to avoid unused function warning
    if(result != -1)
    {
        printf("Element found at index %d\n", result);
    }
    else
    {
        printf("Element not found in the array\n");
    }
    return 0 ;
}