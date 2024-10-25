#include <stdio.h>
int areAllEven(int arr[], int size, int count1) {
    count1 = 0 ;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            count1++;
        }
    }
    return count1 ;
}
int areAllodd(int arr[], int size, int count2) {
    count2 = 0 ;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            count2++;
        }
    }
    return count2 ;
}
int main() 
{
    int arr[] = {2, 4, 6, 8, 10}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int count1 , count2;
    int even = areAllEven(arr,size,count1) ;
    int odd = areAllodd(arr,size,count2) ;
    printf("%d",even) ;
    printf("%d",odd) ;
    return 0 ;
}