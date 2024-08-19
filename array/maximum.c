#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number :");
    scanf("%d",&num);
    int arr[num] ;
    for(int i = 0 ; i < num ;i++)
    {
        printf("enter elements number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int max = arr[0] ;
    for(int i = 0 ; i < num ;i++)
    {
        if(max < arr[i])
        {
            max = arr[i] ;
        }
    }
    printf("maximum = %d",max);    
}