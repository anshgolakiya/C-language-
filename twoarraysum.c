#include <stdio.h>
int inputarr(int arr[3][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j =0 ; j < 3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
int printarr(int arr[3][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j =0 ; j < 3 ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
int getsum(int arr1[3][3], int arr2[3][3], int result[3][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
    printarr(result);
}
int getsub(int arr1[3][3], int arr2[3][3], int result[3][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            result[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printarr(result);
}
int getmul(int arr1[3][3], int arr2[3][3], int result[3][3])
{
    for(int i =0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            result[i][j] =0 ;
            for(int k = 0 ; k < 3 ; k++)
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    printarr(result);
}
int main()
{
    int arr1[3][3], arr2[3][3] ,result[3][3];
    printf("Enter elements for first array:\n");
    inputarr(arr1);
    printf("Enter elements for second array:\n");
    inputarr(arr2);
    printf("sum of two arrays:\n");
    getsum(arr1, arr2,result);
    printf("subtraction of two arrays:\n");
    getsub(arr1, arr2,result);
    printf("multiplication of two arrays:\n");
    getmul(arr1, arr2,result);
    return 0 ;
}