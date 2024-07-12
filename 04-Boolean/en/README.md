# 0️⃣1️⃣ Booleans
📖 **TABLE OF CONTENT**
- [0️⃣1️⃣ Booleans](#0️⃣1️⃣-booleans)
  - [Introduction to Booleans](#introduction-to-booleans)
  - [Booleans in C](#booleans-in-c)
  - [Using the `stdbool.h` library](#using-the-stdboolh-library)
    - [What is the `stdbool.h` library?](#what-is-the-stdboolh-library)
    - [How to use it?](#how-to-use-it)
    - [¿Por qué 0 y 1?](#por-qué-0-y-1)
  - [Using `#define` to declare boolean values](#using-define-to-declare-boolean-values)
  - [References](#references)

<br>

| ◀ | **Previous module**: [Module 03 - Constant Variables](https://github.com/JoshuaMorales99/LearnC/tree/main/03-ConstantVariables/en)<br>
| ▶ | **Next module**: [Module 05 - SOON]()

## Introduction to Booleans
In programming, we often need a data type that can only take two possible values:
- Yes / No.
- On / Off.
- True / False.
- 0 / 1.

Usually, it is used to represent logical values and to control the execution flow in decision-making statements.

<img src="./assets/Boolean.webp" alt="True and False" width=250px/>

## Booleans in C
In C, the `bool` data type is not a built-in data type like `int` or `char`. However, it can be implemented in C using different methods, such as:
- Method 1: Using the `stdbool.h` library.
- Method 2: Using `#define` to declare boolean values.

## Using the `stdbool.h` library
### What is the `stdbool.h` library?
The `stdbool.h` library is a standard C library that contains all the definitions and declarations needed to include the boolean data type in our program.

### How to use it?
To use booleans in C, we need to include the `stdbool.h` library. Then, we can use the boolean data type.
```c
#include <stdbool.h>
```
Let's see an example:
```c
// Define constants, macros, types, and declare input and output functions.
#include <stdio.h>
// Define booleans.
#include <stdbool.h>

int main() {
    // Declare boolean variables.
    bool isTrue = true;
    bool isFalse = false;

    // Print the values to the console.
    printf("The value of isTrue is: %d\n", isTrue);
    printf("The value of isFalse is: %d\n", isFalse);

    return 0;
}
```
***Output***:
```
> The value of isTrue is: 1.
> The value of isFalse is: 0.
```

### ¿Por qué 0 y 1?
The values of boolean variables in C take the value of:
- `0`: To represent the value **False**.
- `1`: (or any other non-zero number): To represent the value **True**.

<img src="./assets/0y1.webp" alt="The numbers 0 and 1 facing each other" width=250px/>

## Using `#define` to declare boolean values
In this case, integer values are defined to represent our booleans. In general:
- The value **False** is assigned the integer value `0`
- The value **True** is assigned the integer value `1`.

We define this using the following notation:
```c
#define BOOL char
#define FALSE 0
#define TRUE 1
```
Let's look at an example:
```c
#include <stdio.h>

// Define the boolean type.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declare boolean variables.
    BOOL isTrue = TRUE;
    BOOL isFalse = FALSE;

    // Print the values to the console.
    printf("The value of isTrue is: %d\n", isTrue);
    printf("The value of isFalse is: %d\n", isFalse);

    return 0;
}
```
***Output***:
```
> The value of isTrue is: 1
> The value of isFalse is: 0
```

## References
- [Learn-C: Variables y Tipos](https://www.learn-c.org/en/Variables_and_Types)
- [GeeksForGeeks: Bool in C](https://www.geeksforgeeks.org/bool-in-c/?ref=lbp)
- [W3schools: Booleans](https://www.w3schools.com/c/c_booleans.php)
- [WikiBooks: <stdbool.h>](https://en.wikibooks.org/wiki/C_Programming/stdbool.h)