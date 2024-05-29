# Strings 🔤
## Defining Strings.
**Strings** are arrays of characters used to store text or a set of characters. A simple example is `"Hello World!"`, which is a string of characters.<br>
Unlike many other languages, C does not have a **String type** to easily create string variables. Instead, you must use the `char` type, and create an **array of characters** to make a string in this language.
```c
char greetings[] = "Hello World!";
```
> Note that you have to use double quotes (`""`)

The empty brackets notation (`[]`) tells the compiler to calculate the size of the array automatically. In fact, this is the same as explicitly declaring it, adding a length to the string:
```c
char name[11] = "John Smith";
```
> The reason that we need to add an extra character to the string length, even though `"John Smith"` is exactly 10 characters long, is that strings are terminated with a special character `\0` at the end.<br>
> The `\0` is known as the **null terminating character**, and it indicates the end of the string. This is necessary because the program does not know the length of the string; only the compiler knows it according to the code.

**Another way to create Strings**.<br>
In the previous examples, string literals were used to create a variable string. This is the easiest way to create a string in C. The other way is using a set of characters.<br>
For example:
```c
char name[] = {'J', 'o', 'h', 'n', ' ', 'S', 'm', 'i', 't', 'h', '\0'};
```

## `printf` and Strings.
To print a string to the console, the `printf` function can be used along with the `%s` format specifier, as follows:
```c
char name[11] = "John Smith";
int age = 27;

// Print a message to the console.
printf("Mr. %s is %d years old", name, age);
```
***Output***:
```
> Mr. John Smith is 27 years old
```

## Access String.
Since strings are arrays in C, you can access a string by referencing its index number inside square brackets `[]`.<br>
In this example, the first character (`[0]`) of the variable `greeting` is printed:
```c
char greeting[] = "Hello World!";

// Print the first character of the string.
printf("The first character is: %c", greeting[0]);
```
***Output***:
```
> The first character is: H
```
> Note that we have to use the `%c` format specifier to print a **single character**.

## Modify String.
To change the value of a specific element in a string, you need to indicate the index number and use single quotes (`''`).<br>
For example:
```c
char greeting[] = "Jello World!";                                           // greeting[0] is: 'J'.
// Change the first element of the array.
greeting[0] = 'H';                                                          // Now greeting[0] is: 'H'.

// Print the first element of the array.
printf("The first character is: %c", greeting[0]);
```
***Output***:
```
> The first character is: H
```

## Special characters.
Because strings must be written in double quotes (`""`), C will misinterpret certain sequences and generate an error. The solution is to use the **escape backslash** (`\`), which converts special characters into string characters.
```
- Escape character: \'      ->      Results in: '
- Escape character: \"      ->      Results in: "
- Escape character: \\      ->      Results in: \
```

Other popular escape characters in C are:
```
- Escape character: \n      ->      Results in: New line.
- Escape character: \t      ->      Results in: Tab.
- Escape character: \0      ->      Results in: Null.
```

## References.
- Learn-C: https://www.w3schools.com/c/c_strings.php
- W3schools: https://www.learn-c.org/en/Strings