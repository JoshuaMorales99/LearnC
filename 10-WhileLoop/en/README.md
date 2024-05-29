# While loop 💫
## The `while` loop.
`while` loops are similar to `for` loops but with different functionality. A `while` loop continues executing the associated block of code as long as the condition in the `while` is **True**.<br>
Its syntax is as follows:
```c
while ( <CONDITION> ) {
    // Our code here.
}
```

Let's see an example:
```c
int i = 0;

// Print numbers from 0 to 4.
while(i < 5){
    printf("%d\n", i);

    // Increment the value of i by 1.
    i++;
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
> Do not forget to increment the variable used in the condition (`i++`), otherwise, the loop will never end.

## Infinite loops.
`while` loops can run infinitely if a given condition is always **True** (non-zero):
```c
while(1) {
    // Our code here.
}
```

## The `do .. while` loop.
The `do..while` loop is a variant of the `while` loop. This loop will execute the block of code once, before checking if the condition is **True**. After that, it will repeat the block as long as the condition is **True**.<br>
Its syntax is as follows:
```c
do {
    // Our code here.
} while ( <CONDITION> );
```
> The loop will always be executed at least once, even if the condition is **False**, since the block of code runs before the condition is tested.

Let's see an example:
```c
int i = 0;

// Print numbers from 0 to 4.
do {
    printf("%d\n", i);

    // Increment the value of i by 1.
    i++;
} while (i < 5);
```
***Output***:
```
> 0
> 1
> 2
> 3
> 4
```
> Do not forget to increment the variable used in the condition (`i++`), otherwise, the loop will never end.

## Loop directives.
There are two important loop directives that are used with all types of loops in C. These are `break` and `continue`.

### The `break` directive.
The `break` statement completely stops a loop and jumps out of it. For example:
```c
int i = 0;

// Print numbers from 0 to 3.
while(i < 10) {
    // Check if the value is equal to 4.
    if(i == 4) {
        // Stop and exit the loop.
        break;
    }
    // Print the numeric value.
    printf("%d\n", i);
    // Increment the value of i by 1.
    i++;
}
```
***Output***:
```
> 0
> 1
> 2
> 3
```
> The `break` directive can also be used in other types of loops.

### The `continue` directive.
The `continue` statement interrupts one iteration (in the loop) and continues with the next iteration in the loop. For example:
```c
int i = 0;

// Print numbers from 0 to 9, except 4.
while(i < 10) {
    // Check if the value is equal to 4.
    if(i == 4) {
        // Increment the value of i by 1.
        i++;
        // Interrupt the iteration.
        continue;
    }
    // Print the numeric value.
    printf("%d\n", i);
    // Increment the value of i by 1.
    i++;
}
```
***Output***:
```
> 0
> 1
> 2
> 3
> 5
> 6
> 7
> 8
> 9
```
> The `continue` directive can also be used in other types of loops.

## References.
- Learn-C: https://www.learn-c.org/en/While_loops
- W3schools:
  - https://www.w3schools.com/c/c_while_loop.php
  - https://www.w3schools.com/c/c_do_while_loop.php
  - https://www.w3schools.com/c/c_break_continue.php