#include <stdio.h>

int main() {
    // Declare array.
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // Change the first element of the array.
    numbers[0] = 15;

    // Print the first element of the array.
    printf("The value is: %d", numbers[0]);

    return 0;
}