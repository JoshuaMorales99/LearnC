# Variables and Types 🧩
## What is a variable?
A variable is a location in the computer's memory where data from a program will be stored. This data or values can change during the execution of the program.<br>
Variables are formed by a space in memory and a symbolic name associated with that space. In this space, we can find a value that may be known or unknown.

## Data types.
C has several variable types, but there are a few basic types:
- **Signed integers**: Integers that can be positive or negative.
  - `char`: For a single character or symbol. Memory required: 1 byte.
  - `int`: For signed integers. Memory required: 2 bytes.
  - `short`: For signed integers. Memory required: 2 bytes.
  - `long`: For signed integers. Memory required: 4 bytes.
- **Unsigned integers**: Integers that can only be positive.
  - `unsigned char`: For a single character or symbol.
  - `unsigned int`: For unsigned integers.
  - `unsigned short`: For unsigned integers.
  - `unsigned long`: For unsigned integers.
- **Floating point numbers**: Real numbers.
  - `float`: For floating-point numbers. Memory required: 4 bytes.
  - `double`: For floating-point numbers. Memory required: 8 bytes.
- **Structures**.
  - `enum`: Enumerable data structure.
  - `struct`: Grouped data structure.

> Keep in mind that different types of variables define their bounds.

In other languages, you can find more very common data types, an example of this is the **boolean** type. This type represents binary logic values (2 values) commonly known as **True** or **False**. In C does not have a boolean type, but usually, it is defined using the following notation:
```
#define BOOL char
#define FALSE 0
#define TRUE 1
```

On the other hand, we can also find those known as **String**. For that, C uses arrays of characters to define them.

## Define variables.
To define a variable in C, you must precede the reserved word of the variable type to the identifier of said variable (The identifier is a representative and characteristic name of what you want to store in it). This can be accompanied, or not, by an initialization (Initial value)<br>
An example is the following:
```
// RESERVED WORD: int.  -   IDENTIFIER: foo.
int foo;

// RESERVED WORD: int.  -   IDENTIFIER: bar  -   INITIALIZATION: 1.
int bar = 1;
```
In the previous example, the variable `foo` can be used, but since we did not initialize it, we do not know what is in it. However, the variable `bar` contains the number 1.<br>

Now that we know about variables, we can do some math. Assuming that `aNumber` and `anotherNumber` are variables, we can operate with them:
```
#include <stdio.h>

int main() {
    // Declare integer variables.
    int aNumber = 4;
    int anotherNumber = 2;

    // Print the values to console.
    printf("The sum is equal to: %d", aNumber + anotherNumber);             // Make and print: 4 + 2 = 6.
    printf("The subtraction is equal to: %d", aNumber - anotherNumber);     // Make and print: 4 - 2 = 2.
    printf("The multiplication is equal to: %d", aNumber * anotherNumber);  // Make and print: 4 * 2 = 8.
    printf("The division is equal to: %d", aNumber / anotherNumber);        // Make and print: 4 / 2 = 2.

    return 0;
}
```

Now, let's see an example with boolean variables:
```
#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declare boolean variables.
    BOOL isTrue = TRUE;
    BOOL isFalse = FALSE;

    // Print the values to console.
    printf("The value of isTrue is: %d\n", isTrue);                         // Print: 1.
    printf("The value of isFalse is: %d\n", isFalse);                       // Print: 0.

    return 0;
}
```

## Important!.
Things to consider when using variables:
- Flexibility: Variables allow us to adapt our code to different situations, storing and manipulating various types of data.
- Readability: The use of declarative variable names improves the readability of the code. Instead of dealing with raw values, it's better to understand the purpose of each variable at a glance.
- Accuracy: Choosing the correct data type ensures that our variables consume appropriate amounts of memory, optimizing the performance of our programs.

## Bibliography.
- Learn-C: https://www.learn-c.org/en/Variables_and_Types

⠀<br>
___
# Variables y tipos 🧩
## ¿Qué es una variable?
Una variable es un lugar en la computadora donde se va a almacenar datos de un programa. Estos datos o valores pueden ir cambiando durante la ejecución de un programa.<br>
Las variables están formadas por un espacio en memoria y un nombre simbólico que está asociado a dicho espacio. En dicho espacio podremos encontrar un valor que puede ser conocido o desconocido.

## Tipos de datos.
C tiene varios tipos de variables, pero hay unos tipos básicos:
- **Enteros con signo**: Números enteros que pueden ser positivos o negativos.
  - `char`: Para un solo carácter o símbolo. Memoria requerida: 1 byte.
  - `int`: Para números enteros con signo. Memoria requerida: 2 bytes.
  - `short`: Para números enteros con signo.  Memoria requerida: 2 bytes.
  - `long`: Para números enteros con signo. Memoria requerida: 4 bytes.
- **Enteros sin signo**: Números enteros que solo pueden ser positivos.
  - `unsigned char`: Para un solo carácter o símbolo.
  - `unsigned int`: Para números enteros sin signo.
  - `unsigned short`: Para números enteros sin signo.
  - `unsigned long`: Para números enteros sin signo.
- **Número de punto flotante**: Números reales.
  - `float`: Para números de punto flotante. Memoria requerida: 4 bytes.
  - `double`: Para números de punto flotante. Memoria requerida: 8 bytes.
- **Estructuras de datos**.
  - `enum`: Estructura de datos enumerables.
  - `struct`: Estructura de datos agrupados.

> Tener en cuenta que los distintos tipos de varibles definen sus límites.

En otros lenguajes se pueden encontrar más tipos muy comunes de dato, un ejemplo de este es el tipo **booleano**. Dicho tipo representa valores de lógica binaria (2 valores) que normalmente son conocidos como **Verdadero** o **Falso**. En C no existe dicho tipo de variable, pero usualmente es definido usando la siguiente notación:
```
#define BOOL char
#define FALSE 0
#define TRUE 1
```

Por otro lado, también podemos hallar los denominados como **String**. Para eso, C utilizará arreglos de caracteres para definirlos.

## Definir variables.
Para definir una variables en C se deberá anteponer la palabra reservada del tipo de variable al identificador de dicha variable (El identificador es un nombre representativo y caracteristico de lo que se desea almacenar en ella). Este puede ir acompañado, o no, de una inicialización (Valor inicial)<br>
Un ejemplo es el siguiente:
```
// PALABRA RESERVADA: int.  -   IDENTIFICADOR: foo.
int foo;

// PALABRA RESERVADA: int.  -   IDENTIFICADOR: bar  -   INICIALIZACION: 1.
int bar = 1;
```
En el ejemplo anterior, la variable `foo` puede ser usada, pero como no la inicializamos, no sabemos qué hay en ella. Sin embargo, la variable `bar` contiene el número 1.<br>

Ahora que conocemos a las variables, podemos hacer un poco de matemáticas. Asumiendo que `unNumero` y `otroNumero` son variables, podemos operar con ellos:
```
#include <stdio.h>

int main() {
    int unNumero = 4;
    int otroNumero = 2;

    printf("La suma es igual a: %d", unNumero + otroNumero);                // Realiza e imprime: 4 + 2 = 6.
    printf("La resta es igual a: %d", unNumero - otroNumero);               // Realiza e imprime: 4 - 2 = 2.
    printf("La multiplicacion es igual a: %d", unNumero * otroNumero);      // Realiza e imprime: 4 * 2 = 8.
    printf("La division es igual a: %d", unNumero / otroNumero);            // Realiza e imprime: 4 / 2 = 2.

    return 0;
}
```

Veamos ahora un ejemplo con los booleanos:
```
#include <stdio.h>

#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declarar variables booleanas.
    BOOL esVerdadero = TRUE;
    BOOL esFalso = FALSE;

    // Imprimir los valores en consola.
    printf("El valor de esVerdadero es: %d\n", esVerdadero);                // Imprime: 1.
    printf("El valor de esFalso es: %d\n", esFalso);                        // Imprime: 0.

    return 0;
}
```

## ¡Importante!.
Cosas a tener en cuenta a la hora de usar variables:
- **Flexibilidad**: Las variables nos permiten adaptar nuestro código a diferentes situaciones, almacenando y manupulando varios tipos de datos.
- **Legibilidad**: El uso de nombres de variables declarativos mejora la legibilidad del código. En lugar de lidiar con valores crudos, es mejor entender el propósito de cada variable de un vistazo.
- **Precisión**: Elegir el tipo de dato correcto asegura que nuestras variables consuman cantidades apropiadas de memoria, optimizando el rendimiento de nuestros programas.

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Variables_and_Types
- LinkedIn: https://www.linkedin.com/pulse/fundamentos-de-la-programaci%C3%B3n-variables-y-tipos-migueles-abraira-ai9hf/