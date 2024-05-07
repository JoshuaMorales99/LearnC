# Arrays 📰
## What are Arrays?
Arrays are special variables used to store multiple values in a single variable, organized with an index. Arrays are defined using the following syntax:
```
int numbers[10];
```
To create an array, you must define the data type (For example: `int`) and specify the array name followed by **square brackets `[]`**.

> An important point to note is that all arrays in C start at 0. This means that if we defined an array of size 10, then the cells are defined from 0 to 9 (inclusive)

## Initializing an Array.
To initialize values, you can do it in two ways:
- Element by element: Let's see an example.
    ```
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
    ```
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    ```

With this, we have created a variable that contains an array of ten integers.
> Arrays can only have one type of variable, because they are implemented as a sequence of values in the computer's memory.

## Accessing Array elements.
To access an element of an array, you must refer to its index. For this, it must be noted that the first element of the array starts at 0 (`[0]`), the second element is 1 (`[1]`), the third element is 2 (`[2]`), etc.
```
#include <stdio.h>
int main() {
    // Declare array.
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    // Print the first element of the array.
    printf("The first element of the array is equal to: %d", numbers[0]);   // Prints the value: 10.

    return 0;
}
```

## Changing an Array element.
To change the value of a specific element, it must be done by indicating the index number as follows:
```
#include <stdio.h>

int main() {
    // Declare array.
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};            // numbers[0] is: 10.
    // Change the first element of the array.
    numbers[0] = 15;                                                        // Now numbers[0] is: 15.

    // Print the first element of the array.
    printf("The first element of the array is equal to: %d", numbers[0]);   // Prints the value: 15.

    return 0;
}
```

## References.
- Learn-C: https://www.learn-c.org/en/Arrays
- W3schools: https://www.w3schools.com/c/c_arrays.php