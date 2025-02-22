#include <stdio.h>
int main()
{
    int arr[5] = {2,4,6,8,10} ;
    float arr1[5] = {1.1,1.2,1.3,1.4,1.5};
    for(int i = 0 ; i <= 4 ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int j = 0 ; j <= 4 ; j++)
    {
        printf("%.2f",arr1[j]);
    }
    return 0 ;
}