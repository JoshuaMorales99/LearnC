#include <stdio.h>

// Definition of Euler using a value.
#define EULER 2.7182818284
// Definition of PI using an expression.
#define PI (22.0 / 7.0)

int main() {
    // Declare an integer constant.
    const int CONSTANT_INT = 10;
    // Declare a floating-point constant.
    const float CONSTANT_FLOAT = 15.66;
    // Declare a character constant.
    const char CONSTANT_CHAR = 'a';

    // Print the values to the console.
    printf("The value of CONSTANT_INT is: %d\n", CONSTANT_INT);
    printf("The value of CONSTANT_FLOAT is: %f\n", CONSTANT_FLOAT);
    printf("The value of CONSTANT_CHAR is: %c\n", CONSTANT_CHAR);
    printf("The value of EULER is: %f\n", EULER);
    printf("The value of PI is: %f\n", PI);

    return 0;
}