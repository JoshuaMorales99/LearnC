# Pointers 🔐
## What is a pointer?
Pointers are variables that play a crucial role in the C programming language. They are used for several reasons, such as:
- Strings.
- Dynamic memory allocation.
- Passing function arguments by reference.
- Creating complex data structures.
- Function pointers.
- Constructing special data structures (e.g., Trees, Tries, etc.)
- Among others.

A pointer is a variable that contains a **memory address** that points to a value, instead of containing the actual value itself.<br>
Computer memory is a sequential store of data, where a pointer points to a specific part of the memory. Pointers can be used to point to a large amount of memory, depending on how much we want to read from that point.

## Creating pointers.
Previously, we saw that we can get the **memory address** of a variable using the reference operator `&`.
```c
// Declare the variable age and initialize it.
int age = 40;

// Print the value of the variable.
printf("The value of age is: %d\n", age);
// Print the memory address of the variable.
printf("The memory address of the age variable is: %p\n", &age);
```
***Output***:
```
> The value of age is: 40
> The memory address of the age variable is: 0x7ffe5367e044
```

A pointer variable points to a data type (like `int`) of the same type, and is created with the `*` operator. We will assign the pointer the address of the variable we are working with.
```c
// Declare the variable age and initialize it.
int age = 40;
// Declare the pointer for age and initialize it.
int *ptr = &age;

// Print the value of the variable.
printf("The value of age is: %d\n", age);
// Print the memory address of the variable.
printf("The memory address of the age variable is: %p\n", &age);
// Print the memory address of the variable with the pointer.
printf("The value of the age pointer is: %p\n", ptr);
```
***Output***:
```
> The value of age is: 40
> The memory address of the age variable is: 0x7ffe5367e044
> The value of the age pointer is: 0x7ffe5367e044
```
> Explanation of the example:
> - We created a pointer variable named `ptr`, which **points to** an `int` variable (`age`). It is important that the pointer type matches the type of the variable it points to (in our case `int`).
> - We used the `&` operator to store the memory address of the `age` variable and assigned it to the pointer.
> - Finally, `ptr` contains the memory address value of `age`.

## Strings as arrays.
We have previously talked about strings, but now we can delve a bit deeper and understand what they really are. Consider the following:
```c
char *name = "John";
```
This code snippet does three things:
1. Assigns a local (stack) variable called `name`, which is a pointer to a single character.
2. Causes the string `"John"` to appear somewhere in the program's memory (after it is compiled and executed).
3. Initializes the `name` argument to point to where the character `J` resides at (followed by the rest of the string in memory).

If we try to access the `name` variable as an array, we will get the ordinal value of the character `J`, as the variable actually points exactly to the beginning of the `name` string.<br>
Since we know memory is sequential, we can assume that if we move to the next character, we will receive the next letter of the string, up to the end of the string (marked by the null character `\0`).

## Dereferencing.
Dereferencing is the act of referring to where the pointer points, instead of to the memory address. In previous modules, we already used dereferencing in arrays, where the bracket operator, for example `[0]`, accesses the first element of the array. Since arrays are actually pointers, accessing the first element is the same as dereferencing a pointer using the `*` operator.<br>
For example:
```c
// Declare the variable age and initialize it.
int age = 40;
// Declare the pointer for age and initialize it.
int *ptr = &age;

// Print the value of the variable.
printf("The value of age is: %d\n", age);

// REFERENCE: Print the memory address of the variable with the pointer.
printf("The value of the age pointer is: %p\n", ptr);
// DEREFERENCE: Print the value of the variable with the pointer.
printf("The value of age with the pointer is: %d\n", *ptr);
```
***Output***:
```c
> The value of age is: 40
> The value of the age pointer is: 0x7ffe5367e044
> The value of age with the pointer is: 40
```

> **Notes on the `*` Operator**.<br>
> The `*` operator can be confusing here, as it does two different things in the code:
> - When used in the declaration `int *ptr`, it creates a pointer variable.
> - When not used in the declaration, it acts as a dereference operator.

Next, we will use the dereference operator to change the content of the variable.
```c
// Declare the variable age and initialize it.
int age = 40;
// Declare the pointer for age and initialize it.
int *ptr = &age;

// Increment the value of age by 1.
age = age + 1;
// Increment the value of age with the pointer by 1.
*ptr = *ptr + 1;

// Print the value of the variable.
printf("The value of age is: %d\n", age);
// Print the value of the variable with the pointer.
printf("The value of age with the pointer is: %d\n", *ptr);
```
***Output***:
```
> The value of age is: 42
> The value of age with the pointer is: 42
```

## Specific types of pointers.
### Null pointers.
A null pointer is a pointer that does not point to any valid memory address. A pointer can be assigned to `NULL` to indicate that it points to nothing.
```c
int *ptr = NULL;
```

### Void pointers.
A `void` pointer is a pointer that can point to any data type, but cannot be dereferenced directly. To use a `void` pointer, it must first be cast to another type of pointer.
```c
// Declare the variable age and initialize it.
int age = 40;
// Declare the pointer.
void *ptr;
// Assign the memory address of age to the pointer.
ptr = &age;

// DEREFERENCE: Print the value of the variable with the pointer.
printf("The value of age is: %d\n", *(int*)ptr);
```
***Output***:
```
> The value of age is: 40
```

### Pointers to pointers.
A pointer to a pointer in C is used when we want to store the address of another pointer.
- The first pointer is used to store the address of the variable.
- The second pointer is used to store the address of the first pointer.
For this reason, it is also known as a **double pointer**.
```c
// Declare the variable age and initialize it.
int age = 40;
// Declare the pointer for age and initialize it.
int *ptr = &age;
// Declare the pointer for the age pointer and initialize it.
int **ptr2 = &ptr;

// Print the memory address of the variable with the pointer.
printf("The value of the age pointer is: %p\n", *ptr2);
// Print the value of the variable with the pointer to the age pointer.
printf("The value of age is: %d\n", **ptr2);
```
***Output***:
```
> The value of the age pointer is: 0x7ffe5367e044
> The value of age is: 40
```
We can use them to change the values of normal pointers or create a variable-sized 2D array.
> In C, a double pointer behaves similarly to a normal pointer. Therefore, the size of the double pointer variable is always equal to normal pointers.

**When are they used?**<br>
The main uses of double pointers in C are:
- Dynamic memory allocation of multidimensional arrays.
- Storing multi-level data, such as text document paragraphs, sentences, and word semantics.
- Directly manipulating node addresses in data structures.
- Function arguments to manipulate the address stored in the local pointer.

## Common uninitialized pointer error.
An uninitialized pointer contains a random memory address, which can cause undefined behavior.
```c
// Declare the pointer without initialization.
int *ptr;
// Print the value of the pointer.
printf("The value of the pointer is: %p\n", ptr);       // Undefined value
```

## Notes on pointers.
Pointers are one of the features that make C stand out from other programming languages, such as Python and Java. This is because they allow us to manipulate the computer's memory data, reducing code and improving performance. If we are familiar with data structures such as lists, trees, and graphs, we should know that pointers are especially useful for implementing them. Additionally, pointers are essential when working with files and memory management.<br>

**Caution!**<br>
Pointers must be handled with care, as it is possible to damage data stored in other memory addresses.

## References.
- [Learn-C: Pointers](https://www.learn-c.org/en/Pointers)
- [W3schools: Pointers](https://www.w3schools.com/c/c_pointers.php)
- [GeeksForGeeks: Pointers](https://www.geeksforgeeks.org/c-pointers/?ref=lbp)
- [GeeksForGeeks: Pointer to Pointer](https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/?ref=lbp)