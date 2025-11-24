#include <stdio.h>
int swap(int *a , int *b)
{
    int temp = *a ;
    *a = *b ;
    *b = temp;
}
int partition(int arr[] , int low , int high)
{
    int pivot = arr[high];
    int i = low - 1 ;
    for(int j = low ; j < high ; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1 ;
}
int quicksort(int arr[] ,int low , int high)
{
    if(low < high) // if(low > high) -> desc
    {
        int pi = partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);
    }
}
int main()
{
    int num ;
    printf("Enetr a size of array : ");
    scanf("%d",&num);
    int arr[num] ;
    for(int i = 0 ; i < num ; i++)
    {
        printf("Enter an element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,num-1);
    printf("sorted array :\n");
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}