#include <stdio.h>
int countMultiplesOf3(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
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

    int count = countMultiplesOf3(arr, size);

    printf("The number of multiples of 3 in the array is: %d\n", count);

    return 0;
}
