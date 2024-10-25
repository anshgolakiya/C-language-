#include <stdio.h>

int getSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
int getpro(int arr[], int size) {
    int pro = 1;
    for (int i = 0; i < size; i++) {
        pro *= arr[i];
    }
    return pro;
}
int getsub(int arr[] , int size) {
    int sub = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        sub = sub - arr[i];
    }
    return sub ;
}

int main() { 
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    int arr[num];
    for(int i = 0 ; i < num ; i++)
    {
        printf("enter element number %d : ",i+1) ;
        scanf("%d",&arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("sum = %d ", getSum(arr, size));
    printf("pro = %d ", getpro(arr, size));
    printf("sub = %d ", getsub(arr, size));

    return 0;
} 