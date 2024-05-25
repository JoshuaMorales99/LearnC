#include <stdio.h>

void printNumbers(int numbers[], int length);
int sum(int aNumber, int anotherNumber);

int main() {
    int myNumbers[] = {10, 20, 30, 40, 50};
    // Calculate the size of the integer array.
    int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
    // Print the numbers in the array.
    printNumbers(myNumbers, length);

    // Store the result of the sum of two numbers.
    int result = sum(5, 3);
    // Print the result of the sum to the console.
    printf("\nThe result is: %d\n", result);

    return 0;
}

void printNumbers(int numbers[], int length) {
    printf("The array contains the following numbers:\n");
    // Print the numbers in the array to the console.
    for(int i = 0; i < length; i++) {
        printf("%d\n", numbers[i]);
    }
}

int sum(int aNumber, int anotherNumber) {
    // Return the sum of the numbers.
    return aNumber + anotherNumber;
}