#include <stdio.h>

int main() {
    // Declare an array of 2 rows and 3 columns.
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};
    // Change the element at row 0 and column 0.
    matrix[0][0] = 9;

    // Print the element of row 0 and column 0.
    printf("The value is: %d\n", matrix[0][0]);

    return 0;
}