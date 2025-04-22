#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr ;
    int num ;
    printf("Enetr the size of array you want to create : ");
    scanf("%d",&num);

    arr = (int *)calloc(num , sizeof(int));

    for(int i = 0 ; i < num ; i++)
    {
        printf("Enter a element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num ; i ++)
    {
        printf("%d ",arr[i]);
    }

    printf("\nEneter the size of new array you want to create : ");
    scanf("%d",&num);

    arr = (int *)realloc(arr,num*sizeof(int));
    for(int i = 0 ; i < num ; i++)
    {
        printf("Enter a element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0 ;
}