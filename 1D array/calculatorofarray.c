#include <stdio.h>
int main()
{
    int num ;
    printf("enter  a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter a element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0 ;
    for(int i = 0 ; i < num ;i++) sum += arr[i] ;
    int sub = 0 ;
    for(int i = 0 ; i < num ;i++) sub -= arr[i] ;
    int pro = 1 ;
    for(int i = 0 ; i < num ;i++) pro *= arr[i] ;
    float div = 1 ;
    for(int i = 0 ; i < num ;i++) div /= arr[i] ;
    printf("sum of array : %d\n",sum);
    printf("sub of array : %d\n",sub);
    printf("pro of array : %d\n",pro);
    printf("div of array : %f\n",div);
    return 0 ;
}