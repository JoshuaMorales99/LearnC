# 🤔 Conditionals
📖 **TABLE OF CONTENT**
- [🤔 Conditionals](#-conditionals)
  - [Introduction](#introduction)
  - [Logical conditionals](#logical-conditionals)
  - [The decision control statement](#the-decision-control-statement)
    - [The `if` statement](#the-if-statement)
    - [The `else` statement](#the-else-statement)
    - [The `else if` statement](#the-else-if-statement)
  - [Ternary operator](#ternary-operator)
  - [More than one expression as condition](#more-than-one-expression-as-condition)
  - [Negation of a logical expression](#negation-of-a-logical-expression)
  - [References](#references)

<br>

| ◀ | **Previous module**: [Module 04 - Booleans](https://github.com/JoshuaMorales99/LearnC/tree/main/04-Boolean/en)<br>
| ▶ | **Next module**: [Module 06 - SOON]()

## Introduction
There are situations in our daily lives where we have to make decisions, and depending on these decisions, we determine what action to take next. For example, if it is raining, we decide to take an umbrella; if it is not raining, we do not take one.

<img src="./assets/Umbrella.webp" alt="Adorable creature in the rain with an umbrella" width=250px/>

Similarly, in programming, situations arise where we need to make decisions. Based on these, the program will execute one action, another, or none. This allows the program to behave differently according to specific conditions, just as we adapt our actions based on circumstances.

## Logical conditionals
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

## The decision control statement
<img src="./assets/Conditions.webp" alt="Two possible paths, leading to different places" width=250px/>

### The `if` statement
The `if` statementis the simplest decision control statement. It allows us to check if an expression is **True** or **False**, and execute code if the result of that condition is True. Its syntax is as follows:
```c
if( <CONDITION> ) {
    // Our code here. It will be executed if the condition is True.
}
```
<br>

For example:
```c
int age = 4;

// Check if it's underage.
if(age < 18) {
    // If true, print a message to the console.
    printf("It's underage\n");
}
```
***Output***:
```
> It's underage
```
> We analyze the previous example:
> 1. We use the varible `age` that will contain a given age.
> 2. We verify that the age is less than 18 `(age < 18)`.
> 3. Since `age` is 4, and we know that 4 is less than 18, then the contition results in **True**.
> 4. Since the condition is **True**, enter the `if` and execute the code it contains.

<br>

Another example:
```c
int age = 19;

// Check if it's underage.
if(age < 18) {
    // If true, print a message to the console.
    printf("It's underage\n");
}
```
***Output***:
```
> 
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18 `(age < 18)`.
> 3. Since `age` is 19, and we know that 19 is not less than 18, then the condition results in **False**.
> 4. Since the condition is **False**, it does not enter the `if` and does not execute the code it contains.

<br>

**Advantages of the `if` Statement**
The main advantages of the `if` statement are:
- It is the simplest decision-making statement.
- It is easy to use and understand.
- It can evaluate expressions of various data types such as `int`, `char`, etc.

**Disadvantages of the `if` Statement**
The main disadvantages of the `if` statement are:
- It allows only a single block of code per condition.
- When there are a large number of expressions, the code within the `if` block becomes complex and unreadable.
- It can be less efficient in terms of performance when there are many conditions, compared to other control structures.

### The `else` statement
The `else` statement allows us to execute code if the result of the `if` condition is **False**. Its syntax is as follows:
```c
if( <CONDITION> ) {
    // Our code here. It will be executed if the condition is True.
} else {
    // Our code here. It will be executed if the condition is False.
}
```
<br>

For example:
```c
int age = 19;

// Check if it's underage.
if(age < 18) {
    // If true, print "It's underage" to the console.
    printf("It's underage\n");
} else {
    // If false, print "It's of legal age" to the console.
    printf("It's of legal age\n");
}
```
***Output***:
```
> It's of legal age
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18 `(age < 18)`.
> 3. Since `age` is 19, and we know that 19 is not less than 18, then the condition results in **False**.
> 4. Since the condition is **False**, it does not enter the `if` and does not execute the code it contains.
> 5. However, since the condition is **False**, enter the `else` and execute the code it contains.

### The `else if` statement
Sometimes, we'll have more than two possible outcomes. In these cases, we chain multiple `if else` statements.<br>
The `else if` statement allows us to check if a new expression is **True** or **False**, and execute code if the result of that condition is **True**. Its syntax is as follows:
```c
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
```c
int age = 18;

// Check if it's underage.
if(age < 18) {
    // If condition 1 is true, print "It's underage" to the console.
    printf("It's underage\n");
// Check if the age is equal to 18.
} else if(age == 18) {
    // If condition 1 is false and condition 2 is true, print "The age is equal to 18" to the console.
    printf("The age is equal to 18\n");
} else {
    // If condition 1 is false and condition 2 is false, print "It's of legal age" to the console.
    printf("It's of legal age\n");
}
```
***Output***:
```
> The age is equal to 18
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18 `(age < 18)` (Condition 1)
> 3. Since `age` is 18, and we know that 18 is not less than 18, then the condition results in **False**.
> 4. Since condition 1 is **False**, it does not enter the `if` and does not execute the code it contains.
> 5. However, since condition 1 is **False**, a new condition that is set in the `else if` statement is evaluated.
> 6. We verify that the age is equal to 18 `(age == 18)` (Condition 2)
> 7. Since `age` is 18, and we know that 18 is equal to 18, then condition 2 becomes **True**.
> 8. Since condition 1 is **False** and condition 2 is **True**, enter the `else if` and execute the code it contains.

<br>

**¿What would happen if `age` is greater than 18?**
```c
int age = 19;
```
***Output***:
```
> It's of legal age
```
> We analyze the previous example:
> 1. We use the variable `age` that will contain given age.
> 2. We verify that the age is less than 18 `(age < 18)` (Condition 1)
> 3. Since `age` is 19, and we know that 19 is not less than 18, then the condition results in **False**.
> 4. Since condition 1 is **False**, it does not enter the `if` and does not execute the code it contains.
> 5. However, since condition 1 is **False**, a new condition that is set in the `else if` statement is evaluated.
> 6. We verify that the age is equal to 18 `(age == 18)` (Condition 2)
> 7. Since `age` is 19, and we know that 19 is not equal to 18, then condition 2 becomes **False**.
> 8. Since condition 1 and 2 are **False**, it does not enter the `else if` and does not execute the code it contains.
> 9. However, since condition 1 and 2 are **False**, enter the `else` and execute the code it contains.

<br>

**Advantages of the `else if` Statement**
The main advantages of the `else if` statement are:
- The `else if` statement allows executing different instructions based on different conditions.
- It helps modify the program's flow.
- It is simple, efficient, and easy to understand when there are few conditions.
- It can evaluate expressions of various data types such as `int`, `char`, etc.

**Disadvantages of the `else if` Statement**
The main disadvantages of the `else if` statement are:
- If there are many `else if` statements, the code becomes unreadable and complex.
- It can be less efficient in terms of performance when there are many conditions, compared to other control structures.

## Ternary operator
In C, there's a shorthand for `if else`. This is known as the **Ternary Operator** as it consists of three operands. It's commonly used to replace multiple lines of code with a single line. Its syntax is as follows:
```c
( <CONDITION> ) ? <TRUE_EXPRESSION> : <FALSE_EXPRESSION> ;
```
<br>

For example, the following lines of code:
```c
int age = 18;

// Check if it's underage.
if(age < 18) {
    // If true, print "It's underage" to the console.
    printf("It's underage\n");
} else {
    // If false, print "It's of legal age" to the console.
    printf("It's of legal age\n");
}
```

Can be written as follows:
```c
int age = 18;

// Check if it's underage.
(age < 18) ? printf("It's underage\n") : printf("It's of legal age\n");
```
***Output***:
```
> It's of legal age
```

## More than one expression as condition
It's possible to evaluate two or more expressions together using logical operators. To do this, we'll use the following connectors:
- **AND** (`&&`): Used to check if two expressions result in **True**.
- **OR** (`||`): Used to check if either of the two expressions results in **True**.

<br>

For example:
```c
int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
    printf("foo is less than bar AND moo is greater than bar\n");
}

if (foo < bar || moo > bar) {
    printf("foo is less than bar OR moo is greater than bar\n");
}
```
***Output***:
```
> foo is less than bar AND moo is greater than bar
> foo is less than bar OR moo is greater than bar
```

## Negation of a logical expression
Another very useful operator is the **NOT** (`!`) operator. It's used in logical propositions to negate a logical variable or constant. In other words, it flips the result **True** and **False**.<br>
```
- ! True        ->      False.
- ! False       ->      True.
```

## References
- [Learn-C: Conditions](https://www.learn-c.org/en/Conditions)
- [W3schools: If](https://www.w3schools.com/c/c_conditions.php)
- [W3schools: Else](https://www.w3schools.com/c/c_conditions_else.php)
- [W3schools: Else If](https://www.w3schools.com/c/c_conditions_elseif.php)
- [W3schools: Short Hand If](https://www.w3schools.com/c/c_conditions_short_hand.php)
- [GeeksForGeeks: Decision Making in C](https://www.geeksforgeeks.org/decision-making-c-cpp/)
- [GeeksForGeeks: if statement](https://www.geeksforgeeks.org/c-if-statement/?ref=lbp)
- [GeeksForGeeks: if else statement](https://www.geeksforgeeks.org/c-if-else-statement/?ref=lbp)