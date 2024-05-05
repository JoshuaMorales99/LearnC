# Variables and Types 🧩
## What is a variable?
A variable is a location in the computer's memory where data from a program will be stored. This data or values can change during the execution of the program.<br>
Variables are formed by a space in memory and a symbolic name associated with that space. In this space, we can find a value that may be known or unknown.

## Data types.
C has several variable types, but there are a few basic types:
- **Signed integers**: Integers that can be positive or negative.
  - `char`: For a single character or symbol. Memory required: 1 byte.
  - `int`: For signed integers. Memory required: 2 bytes.
  - `short`: For signed integers. Memory required: 2 bytes.
  - `long`: For signed integers. Memory required: 4 bytes.
- **Unsigned integers**: Integers that can only be positive.
  - `unsigned char`: For a single character or symbol.
  - `unsigned int`: For unsigned integers.
  - `unsigned short`: For unsigned integers.
  - `unsigned long`: For unsigned integers.
- **Floating point numbers**: Real numbers.
  - `float`: For floating-point numbers. Memory required: 4 bytes.
  - `double`: For floating-point numbers. Memory required: 8 bytes.
- **Structures**.
  - `enum`: Enumerable data structure.
  - `struct`: Grouped data structure.

> Keep in mind that different types of variables define their bounds.

In other languages, you can find more very common data types, an example of this is the **boolean** type. This type represents binary logic values (2 values) commonly known as **True** or **False**. In C does not have a boolean type, but usually, it is defined using the following notation:
```
#define BOOL char
#define FALSE 0
#define TRUE 1
```

On the other hand, we can also find those known as **String**. For that, C uses arrays of characters to define them.

## Define variables.
To define a variable in C, you must precede the reserved word of the variable type to the identifier of said variable (The identifier is a representative and characteristic name of what you want to store in it). This can be accompanied, or not, by an initialization (Initial value)<br>
An example is the following:
```
// RESERVED WORD: int.  -   IDENTIFIER: foo.
int foo;

// RESERVED WORD: int.  -   IDENTIFIER: bar  -   INITIALIZATION: 1.
int bar = 1;
```
In the previous example, the variable `foo` can be used, but since we did not initialize it, we do not know what is in it. However, the variable `bar` contains the number 1.<br>

Now that we know about variables, we can do some math. Assuming that `aNumber` and `anotherNumber` are variables, we can operate with them:
```
#include <stdio.h>

int main() {
    // Declare signed integer variables.
    int aNumber = 4;
    int anotherNumber = 2;

    // Print the values to console.
    printf("The sum is equal to: %d\n", aNumber + anotherNumber);             // Make and print: 4 + 2 = 6.
    printf("The subtraction is equal to: %d\n", aNumber - anotherNumber);     // Make and print: 4 - 2 = 2.
    printf("The multiplication is equal to: %d\n", aNumber * anotherNumber);  // Make and print: 4 * 2 = 8.
    printf("The division is equal to: %d\n", aNumber / anotherNumber);        // Make and print: 4 / 2 = 2.

    return 0;
}
```

Now, let's see an example with boolean variables:
```
#include <stdio.h>

// Define the boolean type.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declare boolean variables.
    BOOL isTrue = TRUE;
    BOOL isFalse = FALSE;

    // Print the values to console.
    printf("The value of isTrue is: %d\n", isTrue);                           // Print: 1.
    printf("The value of isFalse is: %d\n", isFalse);                         // Print: 0.

    return 0;
}
```

## Format specifiers.
Format specifiers are used together with the `printf` function to tell the compiler what type of data the variable is storing.<br>
A format specifier starts with a percentage sign `%`, followed by a character.<br>
For example, to output the value of an `int` variable, use the format specifier `%d` surrounded by double quotes (`""`), inside the `printf` function:
```
int aNumber = 4;
printf("The value of aNumber is: %d", aNumber);                               // Print: 4
```
> To print other types, use `%c` for **char** and `%f` for **float**.

## Change Variable Values.
To change the value of an existing variable, proceed as follows:
```
int aNumber = 4;                                                              // aNumber is 4.
aNumber = 10;                                                                 // Now aNumber is 10.
```
If you assign a new value to an existing variable already initialized, it will **overwrite** the previous value:

> You can also assign the value of one variable to another:
> ```
> #include <stdio.h>
> 
> int main() {
>   // Declare signed integer variables.
>   int aNumber = 4;                                                          // aNumber is 4.
>   int anotherNumber = 2;                                                    // anotherNumber is 2.
> 
>   // Assign the value of anotherNumber to aNumber.
>   aNumber = anotherNumber;                                                  // Now aNumber is 2.
> 
>   // Print the values to console.
>   printf("The value of aNumber is: %d", aNumber);                           // Print: 2.
> 
>   return 0;
> }
> ```

## Important!.
Things to consider when using variables:
- Flexibility: Variables allow us to adapt our code to different situations, storing and manipulating various types of data.
- Readability: The use of declarative variable names improves the readability of the code. Instead of dealing with raw values, it's better to understand the purpose of each variable at a glance.
- Accuracy: Choosing the correct data type ensures that our variables consume appropriate amounts of memory, optimizing the performance of our programs.

## References.
- Learn-C: https://www.learn-c.org/en/Variables_and_Types
- LinkedIn: https://www.linkedin.com/pulse/fundamentos-de-la-programaci%C3%B3n-variables-y-tipos-migueles-abraira-ai9hf/
- W3schools: https://www.w3schools.com/c/c_variables_format.php