#include <stdio.h>

int main() {
    printf("The even numbers from 0 to 10 are:\n");
    // Print the even numbers from 0 to 10.
    for (int i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }

    int numbers[] = {25, 50, 75, 100};

    printf("\nThe elements of the array 'numbers' are:\n");
    // Print all the elements of the array.
    for (int i = 0; i < 4; i++) {
        printf("%d\n", numbers[i]);
    }

    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("\nThe elements of the array 'matrix' are:\n");
    // Outer loop that iterates over the rows of the matrix.
    for (int i = 0; i < 2; i++) {
        // Inner loop that iterates over the columns of the matrix.
        for (int j = 0; j < 3; j++) {
            // Print the current element of the matrix.
            printf("%d ", matrix[i][j]);
        }
        // Print a newline after printing all the elements of a row.
        printf("\n");
    }
}