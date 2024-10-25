#include <stdio.h>
int fun(int arr[])
{
    arr[4] = 23 ;
    return arr[4] ;
}
int main()
{
    int num  ; 
    printf("enter a number : ") ;
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("%d\n",arr[4]);
    fun(arr) ;
    printf("%d",arr[4]);
}