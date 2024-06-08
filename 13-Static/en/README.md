# Static 🧊
## Introduction.
The `static` modifier is a reserved word in the C programming language, which can be used with variables and functions.

## Static variables.
By default, variables are local to the scope in which they are defined. This means they are visible and accessible only within the functions in which they are defined. However, they can be declared as static to increase their scope within the containing file. As a result, these variables can be accessed anywhere within the file.<br>
Let's look at the following example, where we want to count the runners participating in a race:
```c
#include <stdio.h>

int runner();

int main() {
    printf("%d\n", runner());
    printf("%d\n", runner());

    return 0;
}

int runner() {
    // Declare local variable counter and initialize to 0.
    int counter = 0;
    // Increment counter variable.
    counter++;
    // Return the value of counter.
    return counter;
}
```
***Output***:
```
> 1
> 1
```
We can observe that `counter` is not updated because it is removed from memory as soon as the function ends. However, if we use the `static` modifier:
```c
#include <stdio.h>

int runner();

int main() {
    printf("%d\n", runner());
    printf("%d\n", runner());

    return 0;
}

int runner() {
    // Declare static variable counter and initialize to 0.
    static int counter = 0;
    // Increment counter variable.
    counter++;
    // Return the value of counter.
    return counter;
}
```
***Output***:
```
> 1
> 2
```

## Static variables vs. Global variables.
While static variables have a scope limited to the file that contains them, making them accessible only within that file, global variables can be accessed outside the file.<br>
Example:
```c
#include <stdio.h>

// Declare global variable counter and initialize to 0.
static int counter = 0;

int runner();

int main() {
    printf("%d\n", runner());
    printf("%d\n", runner());

    return 0;
}

int runner() {
    // Increment counter variable.
    counter++;
    // Return the value of counter.
    return counter;
}
```
***Output***:
```
> 1
> 2
```

## Static functions.
By default, functions are global in C. If we declare a function with static, its scope is reduced to the file that contains it.<br>
Syntax:
```c
static <RETURN_TYPE> <FUNCTION_NAME> ( <PARAMETER_1>, <PARAMETER_2>, ..., <PARAMETER_N> ) {
    // Our code here.
}
```
For example:
```c
static void aFunction() {
   printf("I am a static function\n");
}
```
***Output***:
```
> I am a static function.
```

## Tips and best practices.
- **Use of static variables**: Use static variables when you need a variable to retain its value between function calls but it should not be accessible outside the file. This is useful for maintaining the internal state of a function without exposing it to other parts of the program.
- **Encapsulation**: Static functions are useful for encapsulating functions that should not be accessible outside a file, improving modularity and reducing dependencies between files. This helps keep the code cleaner and more organized.
- **Beware of excessive use**: Avoid overusing static variables and functions, as they can make debugging and maintaining the code difficult. Excessive use can lead to tightly coupled designs and state management issues.

## References.
- [Learn-C: Static](https://www.learn-c.org/en/Static)