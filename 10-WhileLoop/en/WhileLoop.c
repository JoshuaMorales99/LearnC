#include <stdio.h>

int main() {
    int i = 0;

    printf("The numbers from 0 to 3 are:\n");
    // Print the numbers from 0 to 3.
    while(i < 10) {
        // Check if the value is equal to 4.
        if(i == 4) {
            // Stop and exit the loop.
            break;
        }
        // Print the numeric value.
        printf("%d\n", i);
        // Increment the value of i by 1.
        i++;
    }

    int j = 0;

    printf("\nThe numbers from 0 to 9, except 4, are:\n");
    // Print the numbers from 0 to 9, except 4.
    while(j < 10) {
        // Check if the value is equal to 4.
        if(j == 4) {
            // Increment the value of j by 1.
            j++;
            // Interrupt the iteration.
            continue;
        }
        // Print the numeric value.
        printf("%d\n", j);
        // Increment the value of j by 1.
        j++;
    }
}