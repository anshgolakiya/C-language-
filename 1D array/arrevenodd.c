#include <stdio.h>
int main()
{
    int num ;
    printf("enter a nunber : ");
    scanf("%d",&num);
    int arr[num] ;
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter a element number %d : ",i+1);
        scanf("%d ",&arr[i]);
    }
    for(int j = 0 ; j < num ;j++)
    {
        if(arr[j] % 2 == 0) // condition (arr[j]) % 2 == 0
        {
            printf("arr[%d] = %d is even number.\n",j,arr[j]);

        }
        else
        {
            printf("arr[%d] = %d is odd number.\n",j,arr[j]);
        }
    }
}