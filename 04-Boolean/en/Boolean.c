// Define constants, macros, types, and declare input and output functions.
#include <stdio.h>
// Define booleans.
#include <stdbool.h>

// Manually define the boolean type.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declare boolean variables.
    bool isTrue = true;
    bool isFalse = false;

    // Declare boolean variables.
    BOOL myTrue = TRUE;
    BOOL myFalse = FALSE;

    // Print the values to the console.
    printf("The value of isTrue is: %d\n", isTrue);
    printf("The value of isFalse is: %d\n", isFalse);
    printf("The value of myTrue is: %d\n", myTrue);
    printf("The value of myFalse is: %d\n", myFalse);

    return 0;
}