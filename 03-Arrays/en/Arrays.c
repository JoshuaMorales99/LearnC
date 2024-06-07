#include <stdio.h>

int main() {
    // Declare array.
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // Change the first element of the array.
    numbers[0] = 15;
    // Store the length of the array.
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Print the first element of the array.
    printf("The value of the first element is: %d\n", numbers[0]);
    // Print the size in bytes of the given array.
    printf("The array numbers has a size of: %lu Bytes\n", sizeof(numbers));
    // Print the length of the given array.
    printf("The array numbers has a length of: %d\n", length);

    return 0;
}