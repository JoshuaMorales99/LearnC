# Conditionals 🤔
## The `switch` statement.
Sometimes, we encounter multiple `if ... else` statements. In these situations, it may be possible to use the `switch` statement to have cleaner and more readable code.

**What is the switch statement?**<br>
The `switch` statement is used to specify many alternative blocks of code to be executed based on a given expression.<br>
Its syntax is as follows:
```c
switch (<EXPRESSION>) {
    case <CASE_1>:
        // Your code here. It will be executed if <EXPRESSION> matches <CASE_1>.
        break;

    case <CASE_2>:
        // Your code here. It will be executed if <EXPRESSION> matches <CASE_2>.
        break;

    // More cases...
}
```

**How does it work?**<br>
The `switch` statement works as follows:
- The `switch` expression is evaluated once.
- The value of the expression is compared with the values of each `case`.
- If there is a match, the associated block of code is executed.
- The `break` statement stops the execution of the `switch` block.

Let's see an example of this:
```c
int day = 4;

// Evaluate the day.
switch(day) {
    // Code block for the situation where day is 1.
    case 1:
        printf("Monday");
        break;

    // Code block for the situation where day is 2.
    case 2:
        printf("Tuesday");
        break;
    
    // Code block for the situation where day is 3.
    case 3:
        printf("Wednesday");
        break;

    // Code block for the situation where day is 4.
    case 4:
        printf("Thursday");
        break;

    // Code block for the situation where day is 5.
    case 5:
        printf("Friday");
        break;

    // Code block for the situation where day is 6.
    case 6:
        printf("Saturday");
        break;

    // Code block for the situation where day is 7.
    case 7:
        printf("Sunday");
        break;
}
```
***Output***:
```
> Thursday
```

## The `break` statement.
The `break` keyword is used to terminate the execution of different statements. In the case of the `switch`, the `break` keyword stops the execution of the associated case block and ends the execution of the `switch`.

> Using `break` can save execution time as it ignores the rest of the code in the `switch` block.

## The `default` statement.
The `default` statement specifies some code to be executed if there is no case match.<br>
Its syntax is as follows:
```c
switch (<EXPRESSION>) {
    case <CASE_1>:
        // Your code here. It will be executed if <EXPRESSION> matches <CASE_1>.
        break;

    case <CASE_2>:
        // Your code here. It will be executed if <EXPRESSION> matches <CASE_2>.
        break;

    // More cases...

    default:
        // Your code here. It will be executed if there is no match for <EXPRESSION>.
}
```

Let's see an example of this:
```c
int day = 7;

// Evaluate the day.
switch (day) {
    // Code block for the situation where day is 1.
    case 1:
        printf("Monday");
        break;

    // Code block for the situation where day is 2.
    case 2:
        printf("Tuesday");
        break;
    
    // Code block for the situation where day is 3.
    case 3:
        printf("Wednesday");
        break;

    // Code block for the situation where day is 4.
    case 4:
        printf("Thursday");
        break;

    // Code block for the situation where day is 5.
    case 5:
        printf("Friday");
        break;

    // Code block for the situation where there is no match with the other cases.
    default:
        printf("It's the weekend!");
}
```
***Output***:
```
> It's the weekend!
```
> The `default` keyword should be the last statement in the `switch`, and it does not need a `break`.

## References.
- [W3schools: Switch](https://www.w3schools.com/c/c_switch.php)
- [Microsoft: Break Statement](https://learn.microsoft.com/en-us/cpp/c-language/break-statement-c?view=msvc-170)