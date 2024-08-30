#include <stdio.h>
int main()
{
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num] ;
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0 ; i < num ; i++)
    {
        printf("%d",arr[i]);    
    }
}
