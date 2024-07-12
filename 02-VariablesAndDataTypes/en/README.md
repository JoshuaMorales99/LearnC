# 🧩 Variables and Data Types
📖 **TABLE OF CONTENT**
- [🧩 Variables and Data Types](#-variables-and-data-types)
  - [What is a variable?](#what-is-a-variable)
    - [Data types](#data-types)
    - [Declare variables](#declare-variables)
    - [Define variables](#define-variables)
    - [Initialize variables](#initialize-variables)
    - [Difference between declaration and definition](#difference-between-declaration-and-definition)
    - [How to use variables in C?](#how-to-use-variables-in-c)
  - [Format specifiers](#format-specifiers)
  - [Change variable values](#change-variable-values)
  - [Declare multiple variables](#declare-multiple-variables)
  - [Important!](#important)
  - [Rules for naming variables in C](#rules-for-naming-variables-in-c)
  - [References](#references)

<br>

| ◀ | **Previous module**: [Module 01 - Hello World!](https://github.com/JoshuaMorales99/LearnC/tree/main/01-HelloWorld/en)<br>
| ▶ | **Next module**: [Module 03 - Constant Variables](https://github.com/JoshuaMorales99/LearnC/tree/main/03-ConstantVariables/en)

## What is a variable?
A variable is a location in the computer's memory where data from a program will be stored. These data or values can change during the execution. They are formed by a space in memory and a symbolic name associated with that space. In this space, we can find a value that may be known or unknown.

<img src="./assets/Memory.webp" alt="Memory" width=340px/>

### Data types
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

In other languages, you can find more very common data types, an example of this is the **boolean** type. This type represents binary logic values (2 values) commonly known as **True** or **False**.

On the other hand, we can also find those known as **String**. For that, C uses arrays of characters to define them.

> C is a **strongly typed** language so all the variables types must be specified before using them.

### Declare variables
Variable declaration in C tells the compiler about the existence of the variable with the given name and data type.When the variable is declared, an entry in symbol table is created and memory will be allocated at the time of initialization of the variable.<br>
To declare a variable in C, you must precede the reserved word of the variable type to the identifier (The identifier is a representative and characteristic name of what you want to store in it)
Syntax:
```
<VARIABLE_TYPE> <IDENTIFIER> ;
```

An example is the following:
```c
// VARIABLE TYPE: int.  -   IDENTIFIER: foo.
int foo;
```

### Define variables
In the definition of a C variable, the compiler allocates some memory and some value to it. A defined variable will contain some random garbage value till it is not initialized.

> Most of the modern C compilers declare and define the variable in single step. Although we can declare a variable in C by using `extern` keyword, it is not required in most of the cases.

### Initialize variables
Initialization of a variable is the process where the user assigns some meaningful value to the variable.
Syntax:
```
<VARIABLE_TYPE> <IDENTIFIER> = <INITIALIZATION> ;
```

An example is the following:
```c
// VARIABLE TYPE: int.  -   IDENTIFIER: bar  -   INITIALIZATION: 1.
int bar = 1;
```
In previous examples, the variable `foo` can be used, but since we did not initialize it, we do not know what is in it. However, the variable `bar` contains the number 1.

### Difference between declaration and definition
In variable declaration, only the name and type of the variable are specified, but no memory is allocated to it. Whereas, in variable definition, the memory is also allocated to the declared variable.

### How to use variables in C?
Now that we know about variables, we can do some math. Assuming that `aNumber` and `anotherNumber` are variables, we can operate with them:
```c
// Declare signed integer variables.
int aNumber = 4;
int anotherNumber = 2;

// Print the values to console.
printf("The sum is equal to: %d\n", aNumber + anotherNumber);
printf("The subtraction is equal to: %d\n", aNumber - anotherNumber);
printf("The multiplication is equal to: %d\n", aNumber * anotherNumber);
printf("The division is equal to: %d\n", aNumber / anotherNumber);
```
***Output***:
```
> The sum is equal to: 6
> The subtraction is equal to: 2
> The multiplication is equal to: 8
> The division is equal to: 2
```

## Format specifiers
Format specifiers are used together with the `printf` function to tell the compiler what type of data the variable is storing. To do this, a format specifier starts with a percentage sign `%`, followed by a character.<br>
For example, to output the value of an `int` variable, use the format specifier `%d` surrounded by double quotes (`""`), inside the `printf` function:
```c
int aNumber = 4;
printf("%d", aNumber);
```
***Output***:
```
> 4
```

Some commonly used specifiers are:
- `%d`: For printing integers.
- `%f`: For printing floating-point numbers.
- `%c`: For printing characters.
- `%s`: For printing strings.
- `%p`: For printing memory addresses.
- `%x`: For printing hexadecimal values.

## Change variable values
To change the value of an existing variable, proceed as follows:
```c
int aNumber = 4;                                                          // aNumber is: 4.
aNumber = 10;                                                             // Now aNumber is: 10.
```
If you assign a new value to an existing variable already initialized, it will **overwrite** the previous value:

> You can also assign the value of one variable to another:
> ```c
> // Declare signed integer variables.
> int aNumber = 4;                                                        // aNumber is: 4.
> int anotherNumber = 2;                                                  // anotherNumber is: 2.
> 
> // Assign the value of anotherNumber to aNumber.
> aNumber = anotherNumber;                                                // Now aNumber is: 2.
> 
> // Print the values to console.
> printf("The value of aNumber is: %d\n", aNumber);
> ```
> ***Output***:
> ```
> > The value of aNumber is: 2
> ```

## Declare multiple variables
In C, it is possible to declare more than one variable of the same type by using a **comma-separated** list:
```
<VARIABLE_TYPE> <IDENTIFIER_1>, <IDENTIFIER_2>, ..., <IDENTIFIER_N>;
```

For example:
```c
int foo, bar;
```
<br>

It is also possible to assign an initial value to each of the variables (if desired):
```
<VARIABLE_TYPE> <IDENTIFIER_1> = <INITIALIZATION_1>, ..., <IDENTIFIER_N> = <INITIALIZATION_N>;
```

For example:
```c
int x = 5, y = 6, z = 50;
// Print the sum of the given variables.
printf("The sum is: %d\n", x + y + z);
```
***Output***:
```
> The sum is: 61
```
> If we want to assign the same value to multiple variables of the same type, we should do it as follows:
> ```
> int x, y, z;
> // Assign the same value to the variables.
> x = y = z = 50;
> // Print the sum of the given variables.
> printf("The sum is: %d", x + y + z);
> ```
> ***Output***:
> ```
> The sum is: 150
> ```

## Important!
Things to consider when using variables:
- Flexibility: Variables allow us to adapt our code to different situations, storing and manipulating various types of data.
- Readability: The use of declarative variable names improves the readability of the code. Instead of dealing with raw values, it's better to understand the purpose of each variable at a glance.
- Accuracy: Choosing the correct data type ensures that our variables consume appropriate amounts of memory, optimizing the performance of our programs.

## Rules for naming variables in C
Additionally, the following general rules for naming variables should be considered:
- Names can contain letters, digits and underscores.
- Names must begin with a letter or an underscore (`_`)
- Names are case-sensitive (`myVar` and `myvar` are different variables)
- Names cannot contain whitespaces or special characters like `!`, `#`, `%`, etc.
- Reserved words (such as `int`) cannot be used as names

## References
- [Learn-C: Variables and Types](https://www.learn-c.org/en/Variables_and_Types)
- [LinkedIn: Fundamentos de la Programación - Variables y Tipos de Datos](https://www.linkedin.com/pulse/fundamentos-de-la-programaci%C3%B3n-variables-y-tipos-migueles-abraira-ai9hf/)
- [W3schools: Format Specifiers](https://www.w3schools.com/c/c_variables_format.php)
- [W3schools: Change Values](https://www.w3schools.com/c/c_variables_change.php)
- [W3schools: Multiple Variables](https://www.w3schools.com/c/c_variables_multiple.php)
- [W3schools: Variables Names](https://www.w3schools.com/c/c_variables_names.php)
- [GeeksForGeeks: Variables in C](https://www.geeksforgeeks.org/variables-in-c/?ref=lbp)
- [GeeksForGeeks: Printf in C](https://www.geeksforgeeks.org/printf-in-c/?ref=lbp)