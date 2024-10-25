#include <stdio.h>

int main() {
    // Define the dimensions of the 2D array
    int rows = 3;
    int cols = 4;

    // Initialize a 2D array
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Variable to hold the sum of elements
    int sum = 0;

    // Loop through each element in the 2D array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += array[i][j];  // Add the current element to sum
        }
    }

    // Print the result
    printf("The sum of all elements in the 2D array is: %d\n", sum);

    return 0;
}
