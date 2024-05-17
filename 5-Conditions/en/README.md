# Conditions 🤔
## Logical conditionals.
C language supports logical conditionals which connect two propositions. They are used to evaluate binary truth value, where 0 is False and any other number is True.<br>
These can be:
- **Less than**: `a < b`
- **Less than or equal to**: `a <= b`
- **Greater than**: `a > b`
- **Greater than or equal to**: `a >= b`
- **Equal to**: `a == b`
- **Not equal to**: `a != b`

These logical conditionals are generally used to perform different actions in decision making. C has the following conditional statements.
- `if`: Used to specify a block of code to be executed, if the specified condition is **True**.
- `else`: Used to specify a block of code to be executed, if the specified condition is **False**.
- `else if`: Used to specify a new condition to test, if the first one was **False**.
- `switch`: Used to specify many alternative blocks of code to be executed.

## The `if` statement.
The if statement allows us to check if an expression is **True** or **False**, and execute code if the result of that condition is True. Its syntax is as follows:
```
if( <CONDITION> ) {
    // Our code here. It will be executed if the condition is True.
}
```
<br>

For example:
```
int age = 4;

// Check if it's underage.
if(age < 18) {
    // If true, print a message to the console.
    printf("It's underage");
}
```
> We analyze the previous example:
> 1. We use the varible `age` that will contain a given age.
> 2. We verify that the age is less than 18.
> 3. Since `age` is 4, and we know that 4 is less than 18, then the contition results in **True**.
> 4. Since the condition is True, enter the `if` and execute the code it contains.

<br>

Another example:
```
int age = 18;

// Check if it's underage.
if(age < 18) {
    // If true, print a message to the console.
    printf("It's underage");
}
```
> In the above example, we use the variable `age` to check if the age is less than 18. Since `age` is 18, and we know that 18 is not less than 18, then the condition results in **False**. Since it's False, it doesn't enter the `if` and doesn't execute the contained code.
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18.
> 3. Since `age` is 18, and we know that 18 is not less than 18, then the condition results in **False**.
> 4. Since the condition is False, it does not enter the `if` and does not execute the code it contains.

## The `else` statement.
The `else` statement allows us to execute code if the result of the `if` condition is **False**. Its syntax is as follows:
```
if( <CONDITION> ) {
    // Our code here. It will be executed if the condition is True.
} else {
    // Our code here. It will be executed if the condition is False.
}
```
<br>

For example:
```
int age = 18;

// Check if it's underage.
if(age < 18) {
    // If true, print "It's underage" to the console.
    printf("It's underage");
} else {
    // If false, print "It's of legal age" to the console.
    printf("It's of legal age");
}
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18.
> 3. Since `age` is 18, and we know that 18 is not less than 18, then the condition results in **False**.
> 4. Since the condition is False, it does not enter the `if` and does not execute the code it contains.
> 5. Since the condition is False, enter the `else` and execute the code it contains.

## The `else if` statement.
Sometimes, we'll have more than two possible outcomes. In these cases, we chain multiple `if else` statements.<br>
The `else if` statement allows us to check if a new expression is **True** or **False**, and execute code if the result of that condition is **True**. Its syntax is as follows:
```
if( <CONDITION_1> ) {
    // Our code here. It will be executed if condition 1 is True.
} else if ( <CONDITION_2> ) {
    // Our code here. It will be executed if condition 1 is False and condition 2 is True.
} else {
    // Our code here. It will be executed if condition 1 is False and condition 2 is False.
}
```
<br>

For example:
```
int age = 18;

// Check if it's underage.
if(age < 18) {
    // If condition 1 is true, print "It's underage" to the console.
    printf("It's underage");
} else if(age == 18) {
    // If condition 1 is false and condition 2 is true, print "The age is equal to 18" to the console.
    printf("The age is equal to 18");
} else {
    // If condition 1 is false and condition 2 is false, print "It's of legal age" to the console.
    printf("It's of legal age");
}
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18 (Condition 1)
> 3. Since `age` is 18, and we know that 18 is not less than 18, then the condition results in **False**.
> 4. Since condition 1 is False, it does not enter the `if` and does not execute the code it contains.
> 5. Since condition 1 is False, a new condition that is set in the `else if` statement is evaluated.
> 6. We verify that the age is equal to 18 (Condition 2)
> 7. Since `age` is 18, and we know that 18 is equal to 18, then condition 2 becomes **True**.
> 8. Since condition 1 is False and condition 2 is True, enter the `else if` and execute the code it contains.

¿What would happen if `age` is greater than 18?
```
int age = 19;
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18 (Condition 1)
> 3. Since `age` is 19, and we know that 19 is not less than 18, then the condition results in **False**.
> 4. Since condition 1 is False, it does not enter the `if` and does not execute the code it contains.
> 5. Since condition 1 is False, a new condition that is set in the `else if` statement is evaluated.
> 6. We verify that the age is equal to 18 (Condition 2)
> 7. Since `age` is 19, and we know that 19 is not equal to 18, then condition 2 becomes **False**.
> 8. Since condition 1 and 2 are False, it does not enter the `else if` and does not execute the code it contains.
> 9. Since condition 1 and 2 are False, enter the `else` and execute the code it contains.

## Ternary operator.
In C, there's a shorthand for `if else`. This is known as the **Ternary Operator** as it consists of three operands. It's commonly used to replace multiple lines of code with a single line. Its syntax is as follows:
```
( <CONDITION> ) ? <TRUE_EXPRESSION> : <FALSE_EXPRESSION> ;
```

For example, the following lines of code:
```
int age = 18;

// Check if it's underage.
if(age < 18) {
    // If true, print "It's underage" to the console.
    printf("It's underage");
} else {
    // If false, print "It's of legal age" to the console.
    printf("It's of legal age");
}
```

Can be written as follows:
```
int age = 18;

// Check if it's underage.
(age < 18) ? printf("It's underage") : printf("It's of legal age");
```

## More than one expression as condition.
It's possible to evaluate two or more expressions together using logical operators. To do this, we'll use the following connectors:
- **AND** (`&&`): Used to check if two expressions result in **True**.
- **OR** (`||`): Used to check if either of the two expressions results in **True**.

<br>

For example:
```
int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
    printf("foo is less than bar AND moo is greater than bar.");
}

if (foo < bar || moo > bar) {
    printf("foo is less than bar OR moo is greater than bar.");
}
```

> Another very useful operator is the **NOT** (`!`) operator. It's used in logical propositions to negate a logical variable or constant. In other words, it flips the result **True** and **False**.<br>
> ! True => False.<br>
> ! False => True.

## References.
- Learn-C: https://www.learn-c.org/en/Conditions
- W3schools: https://www.w3schools.com/c/c_conditions_short_hand.php