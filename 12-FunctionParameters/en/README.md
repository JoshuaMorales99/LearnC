# Function parameters 💡
## Parameters and arguments.
Information can be passed to our functions as parameters, which will act as variables inside the function. These parameters are specified after the function name (inside parentheses `()`) and separated by commas (`,`)<br>
Syntax:
```c
<RETURN_TYPE> <FUNCTION_NAME> (<PARAMETER_1>, <PARAMETER_2>, .. , <PARAMETER_N>) {
    <FUNCTION_BODY>

    return <EXPRESSION>;
}
```

**How do we call them?**<br>
Declared functions will not execute when the program starts; they will only execute when called. To call a function with parameters, we need to write its name `<FUNCTION_NAME>`, followed by two parentheses `()` and a semicolon (`;`). Inside the parentheses, we pass the required arguments as follows:
```c
<FUNCTION_NAME>(<ARGUMENT_1, <ARGUMENT_2>>, ..., <ARGUMENT_N>);
```

Let's see an example:
```c
void myFunction(char name[]);

int main() {
    // Greet people.
    myFunction("Liam");
    myFunction("Jenny");
    myFunction("Anja");

    return 0;
}

void myFunction(char name[]) {
    // Print a greeting to the person.
    printf("Hello %s!\n", name);
}
```
***Output***:
```
> Hello Liam!
> Hello Jenny!
> Hello Anja!
```
> When a parameter is passed to the function, it is called an argument. So:
> - `name` is a parameter.
> - `Liam`, `Jenny`, and `Anja` are arguments.

Now, let's see an example with many parameters.
```c
void myFunction(char name[], int age);

int main() {
    // Print the person's age.
    myFunction("Liam", 3);
    myFunction("Jenny", 14);
    myFunction("Anja", 30);

    return 0;
}

void myFunction(char name[], int age) {
    // Print the person's age.
    printf("Hello %s! You are %d years old\n", name, age);
}
```
***Output***:
```
> Hello Liam! You are 3 years old
> Hello Jenny! You are 14 years old
> Hello Anja! You are 30 years old
```
> Note that when working with multiple parameters, the function call must have the same number of arguments as parameters. Additionally, the arguments must be passed in the same order.

## Pass variables as function parameters.
We can also pass different types of variables to a function. For example:
```c
void myFunction(int numbers[]);

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    // Print the array numbers.
    myFunction(myNumbers);

    return 0;
}

void myFunction(int numbers[]) {
    // Print the array elements.
    for(int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }
}
```
***Output***:
```
> 10
> 20
> 30
> 40
> 50
```
> Note that when calling the function, we only need to use the variable name when passing it as an argument (`myFunction(myNumbers)`). However, the full array declaration is needed in the function parameter (`int numbers[5]`).

## Return values.
In the previous examples, the `void` keyword was used to indicate that the function should not return a value. If you want the function to return a value, you can use a data type (`int`, `float`, etc.) instead of `void`, and return it using the `return` statement.<br>
For example:
```c
int myFunction(int number);

int main() {
    // Print the sum of 5 and 3.
    printf("The result is: %d", myFunction(3));

    return 0;
}

int myFunction(int number) {
    // Return the sum of 5 and the given number.
    return 5 + number;
}
```
***Output***:
```
> The result is: 8
```

Now, let's see an example with many parameters.
```c
int myFunction(int x, int y);

int main() {
    // Store the result of the sum of two numbers.
    int result = myFunction(5, 3);
    // Print the sum result.
    printf("The result is: %d", result);

    return 0;
}

int myFunction(int x, int y) {
    // Return the sum of the numbers.
    return x + y;
}
```
***Output***:
```
> The result is: 8
```

References:
- Learn-C: https://www.learn-c.org/en/Functions
- W3schools: https://www.w3schools.com/c/c_functions_parameters.php