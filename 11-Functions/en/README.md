# Functions 💡
## Introduction to Functions.
A function is a block of code that will only execute when it is called. Functions are used to perform specific tasks and are important for code reuse (Define the code once and use it many times)

## Predefined Functions.
In C, there are many predefined functions. Some of the ones we have already seen are:
- `main()`: Function used to execute code.
- `printf()`: Function used to print text to the console/screen.
```c
int main() {
    printf("Hello World!");

    return 0;
}
```

## Declaring a Function.
To declare a function, we must specify the function's name, followed by parentheses `()` and curly braces `{}`.<br>
Syntax:
```c
<RETURN_TYPE> <FUNCTION_NAME>() {
    <FUNCTION_BODY>

    return <EXPRESSION>;
}
```
> Explanation of each part:
> - `<RETURN_TYPE>`: The type of value returned by the function.
> - `<FUNCTION_NAME>`: The meaningful name assigned to the function.
> - `<FUNCTION_BODY>`: The block of code that will be executed when the function is called.
> - `return <EXPRESSION>`: The value returned by the function.

Let's see a simple example:
```c
void myFunction() {
    // Our code here.
}
```
> Explanation of the example:
> - `void` is the return type of the function. In this case, it indicates that no value will be returned.
> - `myFunction` is the meaningful name assigned to the function.
> - Inside the function is the block of code that will be executed when it is called.

## Call a function.
Declared functions will not execute when the program runs; they will only do so when called. To call a function, we must write its name `<FUNCTION_NAME>`, followed by parentheses `()` and a semicolon (`;`)<br>
For example:
```c
#include <stdio.h>

// Declare the function 'myFunction'.
void myFunction() {
    // Print a message to the console.
    printf("I just got executed!\n");
}

int main() {
    // Call the function 'myFunction'.
    myFunction();

    return 0;
}
```
***Output***:
```
> I just got executed!
```

Now, let's see an example where a function is called multiple times:
```c
#include <stdio.h>

// Declare the function 'myFunction'.
void myFunction() {
    // Print a message to the console.
    printf("I just got executed!\n");
}

int main() {
    // Call the function 'myFunction' multiple times.
    myFunction();
    myFunction();
    myFunction();

    return 0;
}
```
***Output***:
```
> I just got executed!
> I just got executed!
> I just got executed!
```

In C, functions must be declared **before they are used in the code**. They can be declared first and then implemented in a header file or at the beginning of the program in order of use.<br>
The best way to use functions is as follows:
```c
#include <stdio.h>

// Declare the function 'myFunction'.
void myFunction();

int main() {
    // Call the function 'myFunction'.
    myFunction();

    return 0;
}

// Define the function 'myFunction'.
void myFunction() {
    // Print a message to the console.
    printf("I just been executed!\n");
}
```
***Output***:
```
> I just been executed!
```

## References.
- Learn-C: https://www.learn-c.org/en/Functions
- W3schools: https://www.w3schools.com/c/c_functions.php