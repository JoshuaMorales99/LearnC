# Arrays 📰
## What are Arrays?
Arrays are special variables used to store multiple values in a single variable, organized with an index. Arrays are defined using the following syntax:
```
<VARIABLE_TYPE> <IDENTIFIER> [ <ARRAY_SIZE> ] ;
```

For example:
```c
// RESERVED WORD: int.  -   IDENTIFIER: numbers.    -   ARRAY SIZE: 10.
int numbers[10];
```
To create an array, you must define the data type (For example: `int`) and specify the array name followed by **square brackets `[]`**.
> An important point to note is that all arrays in C start at 0. This means that if we defined an array of size 10, then the cells are defined from 0 to 9 (inclusive)

## Initializing an Array.
To initialize values, you can do it in two ways:
```
<VARIABLE_TYPE> <IDENTIFIER> [ <ARRAY_SIZE> ] = <INITIALIZATION>;
```

- Element by element: Let's see an example.
    ```c
    int numbers[10];

    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    numbers[8] = 90;
    numbers[9] = 100;
    ```
- Using a comman-separated list within braces `{}`: Let's see an example.
    ```c
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    ```

With this, we have created a variable that contains an array of ten integers.
> Arrays can only have one type of variable, because they are implemented as a sequence of values in the computer's memory.

## Accessing Array elements.
To access an element of an array, you must refer to its index. For this, it must be noted that the first element of the array starts at 0 (`[0]`), the second element is 1 (`[1]`), the third element is 2 (`[2]`), etc.
```c
// Declare array.
int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

// Print the first element of the array.
printf("The value is: %d\n", numbers[0]);
```
***Output***:
```
> The value is: 10
```

## Changing an Array element.
To change the value of a specific element, it must be done by indicating the index number as follows:
```c
// Declare array.
int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};            // numbers[0] is: 10.
// Change the first element of the array.
numbers[0] = 15;                                                        // Now numbers[0] is: 15.

// Print the first element of the array.
printf("The value is: %d\n", numbers[0]);
```
***Output***:
```
> The value is: 15
```

## Get the size and length of an array.
To get the size of an array, we can use the `sizeof` operator. This operator will return the size in Bytes of the data type. Let's look at the following example:
```c
int numbers[] = {10, 25, 50, 75, 100};

// Print the size in Bytes of the given array.
printf("The array numbers has a size of: %lu Bytes\n", sizeof(numbers));
```
***Output***:
```
> The array numbers has a size of: 20 Bytes
```
This happens because the `int` data type usually has 4 Bytes, so in the previous example, the following is true: `4 Bytes * 5 elements = 20 Bytes`.

> Knowing the memory size of an array is essential when working with larger programs that require good memory management.

**How to get the number of elements in the array?**<br>
To get the number of elements in the array using the `sizeof` operator, we can use the following formula:
```
sizeof(<ARRAY_IDENTIFIER>) / sizeof(ELEMENT_OF_ARRAY)
```

For example:
```c
int numbers[] = {10, 25, 50, 75, 100};
// Store the length of the array.
int length = sizeof(numbers) / sizeof(numbers[0]);

// Print the length of the given array.
printf("The array numbers has a length of: %d\n", length);
```
***Output***:
```
> The array numbers has a length of: 5
```
> The total size of the array is divided by the size of one element of the array.

## References.
- [Learn-C: Arrays](https://www.learn-c.org/en/Arrays)
- [W3schools: Arrays](https://www.w3schools.com/c/c_arrays.php)
- [W3schools: Array size](https://www.w3schools.com/c/c_arrays_size.php)