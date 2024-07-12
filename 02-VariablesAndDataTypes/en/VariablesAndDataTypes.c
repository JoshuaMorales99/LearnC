#include <stdio.h>

int main() {
    // Declare signed integer variables.
    int aNumber = 4;
    int anotherNumber = 0;
    
    // Change the value of the variable.
    anotherNumber = 2;

    // Print the values to console.
    printf("The sum is equal to: %d\n", aNumber + anotherNumber);
    printf("The subtraction is equal to: %d\n", aNumber - anotherNumber);
    printf("The multiplication is equal to: %d\n", aNumber * anotherNumber);
    printf("The division is equal to: %d\n", aNumber / anotherNumber);

    return 0;
}