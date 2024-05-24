#include <stdio.h>

// Declare the function 'myFunction'.
void myFunction();

int main() {
    // Call the function 'myFunction' multiple times.
    myFunction();
    myFunction();
    myFunction();

    return 0;
}

// Define the function 'myFunction'.
void myFunction() {
    // Print a message to the console.
    printf("I have just been executed!\n");
}