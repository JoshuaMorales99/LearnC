# For loop 💫
## Introduction to the `for` loop.
Loops are repetitive structures that allow a block of code to execute as long as a specific condition is met. They are very useful because they save time, reduce errors, and make the code more readable.<br>
The for loop is one of the most well-known repetitive structures, allowing a block of code to be executed a finite number of times.

## `for` loop.
The `for` loop in C has the following syntax:
```c
for (<EXPRESSION_1>; <EXPRESSION_2>; <EXPRESSION_3>) {
    // Our code here.
}
```

Where:
- `<EXPRESSION_1>`: Executes once before the execution of the code. Here, the iterator variable is initialized with an initial value.
- `<EXPRESSION_2>`: Defines the condition for executing the block of code. It checks if the iterator has reached its final value.
- `<EXPRESSION_3>`: Executes every time after the block of code has been executed. Here, the iterator is incremented or decremented.

## When do we use it?
We use this statement when we know exactly how many times we want to execute a block of code. For this, `for` loops require an iterator variable, usually called `i`.

Let's see a basic example:
```c
int i;

// Print the numbers from 0 to 4.
for (i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```
***Output***:
```
> 0
> 1
> 2
> 3
> 4
```
> Example explained:
> - `<EXPRESSION_1>`: The expression `i = 0` sets a variable before the loop starts.
> - `<EXPRESSION_2>`: The expression `i < 5` defines the condition for the loop to execute.
>   - If the condition is **True**, then the loop will start again.
>   - If the condition is **False**, then the loop will end.
> - `<EXPRESSION_3>`: The expression `i++` increases the value of `i` by 1 each time the loop's block of code has been executed.

Another example:
```c
// Print the even numbers from 0 to 10.
for (int i = 0; i <= 10; i = i + 2) {
    printf("%d\n", i);
}
```
***Output***:
```
> 0
> 2
> 4
> 6
> 8
> 10
```

## `for` loop for arrays.
Loops are also very useful for iterating over the elements of an array. For example:
```c
int numbers[] = {25, 50, 75, 100};
int i;

// Print all the elements of the array.
for (i = 0; i < 4; i++) {
    printf("%d\n", numbers[i]);
}
```
***Output***:
```
> 25
> 50
> 75
> 100
```

Another example:
```c
int anArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int sum = 0;                                                    // sum is: 0.
int i;

// Sum all the values of the array.
for (i = 0; i < 10; i++) {
    sum += anArray[i];                                          // a[0] + a[1] + ... + a[9]
}                                                               // Now sum is: 55.

// Print the result of the array.
printf("The sum of the array is: %d\n", sum);
```
***Output***:
```
> The sum of the array is: 55
```
> In both examples, the iterator `i` was used as the array index to access each element.

## Nested loops.
It is possible to place one loop inside another loop. This is called a **nested loop**.
```c
int i, j;

// Outer loop.
for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);                                   // Executes 2 times.

    // Inner loop.
    for (j = 1; j <= 3; ++j) {
        printf("Inner: %d\n", j);                               // Executes 6 times (2 * 3)
    }

    printf("\n");
}
```
***Output***:
```
> Outer: 1
> Inner: 1
> Inner: 2
> Inner: 3
> 
> Outer: 2
> Inner: 1
> Inner: 2
> Inner: 3
```
> The "inner loop" will be executed one time for each iteration of the "outer loop".

This type of loop is usually used to iterate over multidimensional arrays. For example:
```c
int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

// Outer loop that iterates over the rows of the matrix.
for (int i = 0; i < 2; i++) {
    // Inner loop that iterates over the columns of the matrix.
    for (int j = 0; j < 3; j++) {
        // Print the current element of the matrix.
    	printf("%d ", matrix[i][j]);
    }
    // Print a newline after printing all the elements of a row.
    printf("\n");
}
```
***Output***:
```
> 1 4 2
> 3 6 8
```

## References.
- Learn-C: https://www.learn-c.org/en/For_loops
- W3schools:
  - https://www.w3schools.com/c/c_for_loop.php
  - https://www.w3schools.com/c/c_for_loop_nested.php
  - https://www.w3schools.com/c/c_arrays.php