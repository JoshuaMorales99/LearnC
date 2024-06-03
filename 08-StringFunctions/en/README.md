# String Functions 🔤
## String functions.
C has many useful string functions that can be used to perform certain operations on strings. To use them, you need to include the `<string.h>` file in the program.
```c
#include <string.h>
```

## String length.
To get the length of a string, we can use the strlen function which is defined in `<string.h>`. Let's see an example:
```c
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Print the length of the string.
printf("The size of the alphabet is: %lu\n", strlen(alphabet));
```
***Output***:
```
> The size of the alphabet is: 26
```

Another way is by using the `sizeof` operator, though it is important to understand the difference:
```c
char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Print the size of the array.
printf("The size of the alphabet is: %d\n", sizeof(alphabet));
```
***Output***:
```
> The size of the alphabet is: 27
```

> Note that the `strlen` function returns the length of the string excluding the null character `\0`, while `sizeof` returns the total size of the array including the null character. Additionally, `sizeof` returns the size in bytes of the array, not the length of the string.
> 
> Example with a fixed-size array:
> ```c
> char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
> 
> // Print the size of the array.
> printf("The size of the alphabet is: %d\n", sizeof(alphabet));
> ```
> ***Output***:
> ```
> > The size of the alphabet is: 50
> ```

## Compare Strings.
The `strcmp` function compares two strings, returning 0 if they are equal or a non-zero number if they are different. Let's see an example:
```c
char name[] = "Joe";
char anotherName[] = "Leo";

// Compare the names and print the result.
printf("The result of the comparison is: %d\n", strcmp(name, "Joe"));

// Compare the names and print the result.
printf("The result of the comparison is: %d\n", strcmp(anotherName, "Joe"));
```
***Output***:
```
> The result of the comparison is: 0
> The result of the comparison is: 1
```
> `strcmp` compares the strings character by character until a difference is found or the end is reached.

There is also another function `strncmp`, which compares the first n characters of two strings. Let's see an example:
```c
char name[] = "Joe";
char anotherName[] = "Leo";

// Compare the first 3 characters of the names and print the result.
printf("The result of the comparison is: %d\n", strncmp(name, "Joe", 3));

// Compare the first 3 characters of the names and print the result.
printf("The result of the comparison is: %d\n", strncmp(anotherName, "Joe", 3));
```
***Output***:
```
> The result of the comparison is: 0
> The result of the comparison is: 2
```
> `strncmp` compares the first n characters of the specified strings.

## Concatenate Strings.
To concatenate the value of one string with another, we can use the `strcat` function. This function takes the value of the second string and appends it to the end of the first string. Let's see an example:
```c
char name[50] = "John ";                                                        // name is: "John ".
char lastName[] = "Smith";

// Concatenate name and last name.
strcat(name, lastName);                                                         // Now name is: "John Smith".

// Print the name to console.
printf("The name is: %s\n", name);
```
***Output***:
```
> The name is: John Smith
```
> Make sure the size of `name` is large enough to store the result of the concatenation.

There is also the `strncat` function, which adds the first n characters of the second string to the first one. Let's see an example:
```c
char name[50] = "John ";                                                        // name is: "John "
char lastName[] = "Smith";

// Concatenate name and last name.
strncat(name, lastName, 5);                                                     // Now name is: "John Smith"

// Print the name to console.
printf("The name is: %s\n", name);
```
***Output***:
```
> The name is: John Smith
```

## Copy Strings.
To copy the value of one string to another, we can use the `strcpy` function. This function takes the value of the second string and copies it to the first one. Let's see an example:
```c
char aString[20] = "Hello world!";
char anotherString[20] = "Goodbye world!";                                      // anotherString is: "Goodbye world!"

// Copy the value of the second string to the first one.
strcpy(anotherString, aString);                                                 // Now anotherString is: "Hello world!"

// Print the value of the second string.
printf("The value of the second string is: %s\n", anotherString);
```
***Output***:
```
> The value of the second string is: Hello world!
```
> Make sure the size of `anotherString` is large enough to store the result of the copy. This function overwrites the value of the first string.

## References.
- [Learn-C: Strings](https://www.learn-c.org/en/Strings)
- [W3schools: Strings Functions](https://www.w3schools.com/c/c_strings_functions.php)