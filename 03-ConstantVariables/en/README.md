# 🧊 Constant Variables
📖 **TABLE OF CONTENT**
- [🧊 Constant Variables](#-constant-variables)
  - [What is a constant?](#what-is-a-constant)
  - [How to define a constant in C](#how-to-define-a-constant-in-c)
  - [Properties of constants](#properties-of-constants)
    - [Initialization with declaration](#initialization-with-declaration)
    - [Immutability](#immutability)
  - [Definition of constants using the preprocessor `#define`](#definition-of-constants-using-the-preprocessor-define)
    - [What is the `#define` preprocessor?](#what-is-the-define-preprocessor)
    - [How do we use it to declare constants?](#how-do-we-use-it-to-declare-constants)
    - [Difference between constants defined using the `const` qualifier and `#define`](#difference-between-constants-defined-using-the-const-qualifier-and-define)
    - [Important Points](#important-points)
  - [Best practices](#best-practices)
  - [Common mistakes](#common-mistakes)
  - [References](#references)

<br>

| ◀ | **Previous module**: [Module 02 - Variables and Data types](https://github.com/JoshuaMorales99/LearnC/tree/main/02-VariablesAndDataTypes/en)<br>
| ▶ | **Next module**: [Module 04 - SOON]()

## What is a constant?
In the previous module, we learned about variables, whose values can be modified an infinite number of times. On the other hand, the C language also provides a way to make the value of a variable immutable. These are known as **constants**.<br>
A constant variable in C is a read-only variable whose value cannot be modified once declared in the program. These can be:
- An integer constant.
- A floating-point constant.
- A character constant.
- A string constant.
- An array constant.
- A structure constant.

<img src="./assets/Constant.webp" alt="Ice block with the word 'int' inside" width=250px/>

## How to define a constant in C
To declare a constant variable, we must use the `const` keyword. Its syntax is as follows:
```
const <VARIABLE_TYPE> <IDENTIFIER> = <INITIALIZATION>;
```
> It is important to **initialize constant variables** at the declaration because we cannot modify their value after defining them. Otherwise, the variable will store a garbage value, and we will not have the opportunity to change it.

Let's see an example:
```c
// Declare an integer constant.
const int CONSTANT_INT = 10;
// Declare a floating-point constant.
const float CONSTANT_FLOAT = 15.66;
// Declare a character constant.
const char CONSTANT_CHAR = 'a';

// Print the values to the console.
printf("The value of CONSTANT_INT is: %d\n", CONSTANT_INT);
printf("The value of CONSTANT_FLOAT is: %f\n", CONSTANT_FLOAT);
printf("The value of CONSTANT_CHAR is: %c\n", CONSTANT_CHAR);
```
***Output***:
```
> The value of CONSTANT_INT is: 10
> The value of CONSTANT_FLOAT is: 15.66
> The value of CONSTANT_CHAR is: a
```

## Properties of constants
The important properties of constant variables in C defined using the `const` keyword are as follows:

### Initialization with declaration
We can only initialize the constant variable at the time of its declaration. Otherwise, it will store a garbage value.

### Immutability
Constant variables are immutable after their definition, i.e., they can only be initialized once in the whole program. After that, we cannot modify the value stored in that variable.
```c
#include <stdio.h>
 
int main() {
    // Declare an integer constant without initialization.
    const int A_CONSTANT;
    // Initialize the constant after declaring it.
    A_CONSTANT = 20;

    // Print the value of the integer constant.
    printf("Value of A_CONSTANT: %d\n", A_CONSTANT);

    return 0;
}
```
***Output***:
```
In function 'main':
7:18: error: assignment of read-only variable 'A_CONSTANT'
7 |     A_CONSTANT = 20;
  |                  ^
```

## Definition of constants using the preprocessor `#define`
Another way to define a constant is using `#define`.

### What is the `#define` preprocessor?
The `#define` preprocessor is a preprocessing directive that is used to define macros. Macros are identifiers defined by `#define` which are replaced by their value before compilation.

### How do we use it to declare constants?
To declare constants, we will use the following syntax:
- For defining constants.
```
#define <IDENTIFIER> <VALUE>
```

- For defining expressions.
```
#define <IDENTIFIER> ( <EXPRESSION> )
```

For example:
```c
// Definition of EULER using a value.
#define EULER 2.7182818284

// Definition of PI using an expression.
#define PI (22 / 7)
```

### Difference between constants defined using the `const` qualifier and `#define`
**Constants that use `const`**:
- They are variables that are immutable.
- They are handled by the compiler.

**Constants that use `#define`**:
- They are macros that are replaced by their value.
- They are handled by the preprocessor.

### Important Points
- Macros declared using `#define` are used to store constants and cannot be changed. We cannot assign variables to the macros.
- We cannot use the `=` operator to assign value to macros.
- We do not use the semicolon (`;`) at the end of the statement in `#define`.

> This method for defining constants is not preferred, as it can introduce bugs and make code maintenance difficult.

## Best practices
- Use `const` instead of `#define` to declare constants whenever possible, to take advantage of compiler checks.
- Give meaningful and uppercase names to constants to differentiate them from regular variables.
- Group related constants together to improve code readability.

## Common mistakes
- Not initializing a constant at the time of its declaration.
- Trying to change the value of a constant after its initialization.
- Confusing `const` and `#define` in their use and purpose.
- Forgetting that macros defined with `#define` do not have a type and can cause unexpected type errors.

## References
- [W3schools: Constants](https://www.w3schools.com/c/c_constants.php)
- [GeeksForGeeks: Variables in C](https://www.geeksforgeeks.org/variables-in-c/?ref=lbp)
- [GeeksForGeeks: Constants in C](https://www.geeksforgeeks.org/constants-in-c/?ref=lbp)
- [GeeksForGeeks: Define preprocessor](https://www.geeksforgeeks.org/c-define-preprocessor/)