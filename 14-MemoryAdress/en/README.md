# Memory address 🔐
## What is a Memory Address?
A memory address is a location in memory where a computer program or hardware device accesses and/or stores data for later use. When a variable is created in C, it is assigned a memory address, which is where the variable's value will be stored on the computer.<br>
To access this address, the reference operator `&` is used, which returns the location where the variable is stored.<br>
Let's see an example:
```c
// Declare the variable age and initialize it.
int age = 43;
// Print the memory address of age to the console.
printf("The memory address of age is: %p\n", &age);
```
***Output***:
```
> The memory address of age is: 0x7ffe5367e044
```
> The memory address is presented in **hexadecimal** form (0x...) and can vary each time the program is run, as it depends on where the variable is stored on the computer.
> The term pointer is often used to refer to a variable that stores the memory address of another variable. To print these pointer values, we use the `%p` format specifier.

## Why is it useful to know the memory address?
Pointers are important in C because they allow us to directly manipulate data in the computer's memory. This can reduce the amount of code needed and improve the performance of the program. With pointers, we can create complex data structures like linked lists, trees, and graphs, and also efficiently handle arrays and buffers.

## References:
- [W3schools: Memory Address](https://www.w3schools.com/c/c_memory_address.php)