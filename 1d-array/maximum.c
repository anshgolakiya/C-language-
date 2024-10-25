#include <stdio.h>
int getmax(int arr[] , int max , int num)
{
    max = arr[0];
    for(int i = 1 ; i < num ; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max ;
}
int getmin(int arr[] , int min , int num )
{
    min = arr[0];
    for(int i = 1 ; i < num ; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min ;
}
int main ()
{
    int num ; 
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = getmax(arr,max,num) ;
    printf("maximum number is %d\n",max);
    int min = getmin(arr,min,num);
    printf("minimum number is %d",min);
    return 0 ;
}