#include <stdio.h>
int keypresent(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    // int key ;
    // printf("enter a key : ");
    // scanf("%d",&key);
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter element number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    int ld = num-1 ;
    int key = arr[ld] ;
    int index = keypresent(arr, size, key);
    if (index != -1) {
        printf("Key %d is present at index %d.\n", key, index);
    } else {
        printf("Key %d is not present in the array.\n", key);
    }

    return 0;
}
