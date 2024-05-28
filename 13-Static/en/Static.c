#include <stdio.h>

// Declare global variable.
int globalCounter;

// Declare the functions.
int localRunner();
int staticRunner();
int globalRunner();

int main() {
    printf("The value of the non-static variable is: %d\n", localRunner());
    printf("The value of the non-static variable is: %d\n", localRunner());

    printf("\nThe value of the static variable is: %d\n", staticRunner());
    printf("The value of the static variable is: %d\n", staticRunner());

    printf("\nThe value of the global variable is: %d\n", globalRunner());
    printf("The value of the global variable is: %d\n", globalRunner());

    return 0;
}

int localRunner() {
    // Declare local variable counter and initialize to 0.
    int localCounter = 0;
    // Increment counter variable.
    localCounter++;
    // Return the value of counter.
    return localCounter;
}

int staticRunner() {
    // Declare static variable counter and initialize to 0.
    static int staticCounter = 0;
    // Increment counter variable.
    staticCounter++;
    // Return the value of counter.
    return staticCounter;
}

int globalRunner() {
    // Increment counter variable.
    globalCounter++;
    // Return the value of counter.
    return globalCounter;
}