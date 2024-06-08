#include <stdio.h>

int main() {
    // Declare the variable age and initialize it.
    int age = 40;
    // Declare the pointer for age.
    int *ptr = &age;

    // Increment the value of age by 1.
    age = age + 1;
    // Increment the value of age with the pointer by 1.
    *ptr = *ptr + 1;

    // Print the value of the variable.
    printf("The value of age is: %d\n", age);
    // Print the memory address of the variable.
    printf("The memory address of the age variable is: %p\n", &age);

    // DEREFERENCE: Print the value of the variable with the pointer.
    printf("The value of age with the pointer is: %d\n", *ptr);
    // REFERENCE: Print the memory address of the variable with the pointer.
    printf("The value of the age pointer is: %p\n", ptr);

    return 0;
}