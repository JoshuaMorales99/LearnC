#include <stdio.h>
#include <string.h>

int main() {
    char aString[20] = "Hello ";
    char anotherString[] = "world!";
    char copiedString[20];

    // Print the length of the strings.
    printf("The size of %s is: %d.\n", aString, sizeof(aString));
    printf("The size of %s is: %d.\n", aString, strlen(aString));
    printf("The size of %s is: %d.\n", anotherString, sizeof(anotherString));
    printf("The size of %s is: %d.\n", anotherString, strlen(anotherString));

    // Compare the strings and print the result.
    printf("The result of the comparison between %s and %s is: %d.\n", anotherString, "world!", strcmp(anotherString, "world!"));
    printf("The result of the comparison between %s and %s is: %d.\n", aString, anotherString, strcmp(aString, anotherString));

    // Concatenate two given strings.
    strcat(aString, anotherString);
    // Print the first string to console.
    printf("The first string, after concatenation, results in: %s.\n", aString);
    // Print the second string to console.
    printf("The second string results in: %s.\n", anotherString);

    // Copy the value of the second string to the first one.
    strcpy(copiedString, aString);
    // Print the value of the second string.
    printf("The value of the second string, after copying, is: %s.\n", copiedString);
    // Print the value of the first string.
    printf("The value of the first string is: %s.\n", aString);
    
    return 0;
}