#include <stdio.h>

int main() {
    int age = 19;

    // Check if it's underage.
    if(age < 18) {
        // If condition 1 is true, print "It's underage" to the console.
        printf("It's underage");
    } else if(age == 18) {
        // If condition 1 is false and condition 2 is true, print "The age is equal to 18" to the console.
        printf("The age is equal to 18");
    } else {
        // If condition 1 is false and condition 2 is false, print "It's of legal age" to the console.
        printf("It's of legal age");
    }

    return 0;
}