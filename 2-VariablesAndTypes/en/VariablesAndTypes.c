#include <stdio.h>

// Define the boolean type.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declare boolean variables.
    BOOL isTrue = TRUE;
    BOOL isFalse = FALSE;

    // Print the values to console.
    printf("The value of isTrue is: %d\n", isTrue);                             // Print: 1.
    printf("The value of isFalse is: %d\n", isFalse);                           // Print: 0.
    
    // Declare signed integer variables.
    int aNumber = 4;
    int anotherNumber = 0;
    
    // Change the value of the variable.
    anotherNumber = 2;

    // Print the values to console.
    printf("The sum is equal to: %d\n", aNumber + anotherNumber);               // Make and print: 4 + 2 = 6.
    printf("The subtraction is equal to: %d\n", aNumber - anotherNumber);       // Make and print: 4 - 2 = 2.
    printf("The multiplication is equal to: %d\n", aNumber * anotherNumber);    // Make and print: 4 * 2 = 8.
    printf("The division is equal to: %d\n", aNumber / anotherNumber);          // Make and print: 4 / 2 = 2.

    return 0;
}