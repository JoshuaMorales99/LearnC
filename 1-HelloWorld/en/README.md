# Hello World! 🌎
## Our first program.
Every C program uses libraries, which give the ability to excecute necessary functions. An example is the case of the `printf` function, which prints a message or string with formating on the screen. This function is defined in the `stdio.h` file.

**What can we find in `stdio.h`?**<br>
The `<stdio.h>` include file define constant, macros, types, and declares stream input and output functions. Some of them are:
- `printf`
- `scanf`
- `fopen`
- `fclose`
- `fprintf`
- etc.

To add the ability to run the `printf` command to our program, we must add the following include directive to our first line of the code:
```
#include <stdio.h>
```

Then, the first code that will **always** run will be inside the `main` function.
```
int main() {
    // Our code here.
}
```
The `int` keyword indicates that the `main` function will return an integer. The number returned by the function indicates whether the program we wrote works correctly. If we want to say that our code run successfully, we will return the number 0 (A number greater than 0 will mean that the program failed)<br>
For this program, we will return 0 to indicate that our program was successful.
```
return 0;
```

> Keep in mind that each C declaration **must end with a semicolon**, so that the compiler knows that a new declaration has begun.

Finally, we call the `printf` function to print our message on the console.
```
// Defines constants, macros, types, and declares stream input and output functions.
#include <stdio.h>

int main() {
    // Print "Hello World!" in console.
    printf("Hello World!");

    // Return 0 if the code was run successfully.
    return 0;
}
```

## References.
The following sources were used:
- Lear-C: https://www.learn-c.org/en/Hello%2C_World%21
- IBM: https://www.ibm.com/docs/en/i/7.5?topic=files-stdioh