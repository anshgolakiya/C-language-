#include <stdio.h>
int main()
{
    int num ;
    printf("Enetr a size of array : ");
    scanf("%d",&num);
    int arr[num] ;
    for(int i = 0 ; i < num ; i++)
    {
        printf("Enetr an element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 1 ; i < num ; i++)
    {
        int key = arr[i];
        int j = i -1 ;
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j] ;
            j--;
        }
        arr[j+1] = key ;
    }
    printf("sorted array :\n");
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
}