#include <stdio.h>

int main() {
    char onePerson[] = "John Smith";
    char anotherPerson[11] = "John Smith";
    char yetAnotherPerson[] = {'J', 'o', 'h', 'n', ' ', 'S', 'm', 'i', 't', 'h', '\0'};
    int age = 27;

    // Print the age of the different people.
    printf("Mr. %s is %d years old.\n", onePerson, age);
    printf("Mr. %s is %d years old.\n", anotherPerson, age);
    printf("Mr. %s is %d years old.\n", yetAnotherPerson, age);

    char aString[20] = "Jello";

    // Change the first element of the array.
    aString[0] = 'H';
    // Print the first character of the string.
    printf("The first character of %s is %c.\n", aString, aString[0]);

    return 0;
}