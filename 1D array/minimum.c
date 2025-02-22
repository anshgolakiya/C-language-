#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter a element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for(int i = 0 ; i < num ; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("maximum number in array is %d.",min);
}