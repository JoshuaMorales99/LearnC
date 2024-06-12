# 🌎Hello World!
📖 **TABLE OF CONTENT**
- [🌎Hello World!](#hello-world)
	- [Introduction](#introduction)
	- [Our first program (Hello World!)](#our-first-program-hello-world)
	- [Libraries](#libraries)
		- [What are libraries?](#what-are-libraries)
		- [What can we find in `stdio.h`?](#what-can-we-find-in-stdioh)
	- [The main function](#the-main-function)
		- [The `main`](#the-main)
	- [The `return`](#the-return)
	- [References.](#references)

<br>

▶ **Next module**: [Modulo 02 - Variables and Types](https://github.com/JoshuaMorales99/LearnC/tree/main/01-HelloWorld/en)

## Introduction
This tutorial is designed to help you understand the basics of writing and running a simple C program. We'll start with the "Hello World!" program, which is a traditional first step in learning any programming language.

## Our first program (Hello World!)
To begin with, the “Hello World” program is the first step towards learning any programming language and also one of the simplest programs we will learn. All one needs to do is display the message “Hello World” on the screen/console.

<img src="./assets/HelloWorld.webp" alt="Planet earth with little sign" width=300px/>

But first, let's look at some simple concepts.

## Libraries
In C, all lines that start with the pound (`#`) sign are called **directives**. These statements are processed by preprocessor program invoked by the compiler.
```
# <DIRECTIVE> <LIBRARIE>
```

### What are libraries?
Every C program uses **libraries**, which give the ability to excecute necessary functions. An example is the case of the `printf` function, which prints a message or string with formating on the screen. This function is defined in the `stdio.h` file.

### What can we find in `stdio.h`?
The `<stdio.h>` include file define constant, macros, types, and declares stream input and output functions. Some of them are:
- `printf`
- `scanf`
- `fopen`
- `fclose`
- `fprintf`
- etc.

To add the ability to run the `printf` command to our program, we must add the following include directive to our first line of the code:
```c
#include <stdio.h>
```
In other words, the `#include` directive tells the compiler to include a file and `#include<stdio.h>` tells the compiler to include the header file for the Standard Input Output file which contains declarations of all the standard input/output library functions.

## The main function
### The `main`
The first code that will **always** run will be inside the `main` function.
```c
int main() {
    // Our code here.

	return 0;
}
```
This is because the execution of every C program starts with the `main()` function, no matter where the function is located in the program. So, every C program must have it.<br>
Our code will be enclosed in curly braces (`{}`) where:
- The opening braces `{` indicates the beginning of the main function.
- The closing braces `}` indicates the ending of the main function.

Everything between these two comprises the body of the main function and are called the blocks.

## The `return`
The return statement is an instruction used to return a value from a function and indicate its termination. It is usually used to return the results of operations performed by a function. In this case, the `main` function is accompanied by the `int` keyword indicating that the function will return an integer.<br>
According to coding standards, a good return program should exit the main function with 0. This number returned by the function indicates whether the program we wrote works correctly. If we want to say that our code ran successfully, we return the number 0 (A number greater than 0 will mean that the program failed).<br>
For this program, we will return 0 to indicate that our program was successful.
```c
return 0;
```

> Keep in mind that each C declaration **must end with a semicolon**, so that the compiler knows that a new declaration has begun.

Finally, we call the `printf` function to print our message on the console.
```c
// Defines constants, macros, types, and declares stream input and output functions.
#include <stdio.h>

int main() {
    // Print "Hello World!" in console.
    printf("Hello World!\n");

    // Return 0 if the code was run successfully.
    return 0;
}
```
***Output***:
```
> Hello World!
```

## References.
The following sources were used:
- [Lear-C: Hello, World!](https://www.learn-c.org/en/Hello%2C_World%21)
- [IBM: <stdio.h>](https://www.ibm.com/docs/en/i/7.5?topic=files-stdioh)
- [GeeksForGeeks: Hello World Program](https://www.geeksforgeeks.org/c-hello-world-program/?ref=lbp)