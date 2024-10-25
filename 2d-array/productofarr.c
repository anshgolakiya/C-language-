#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 4;
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int pro = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            pro *= array[i][j];  
        }
    }
    printf("The pro of all elements in the 2D array is: %d\n", pro);

    return 0;
}
