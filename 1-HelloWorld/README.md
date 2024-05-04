# Hello World!
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
#include <stdio.h>

int main() {
    printf("¡Hola Mundo!");

    return 0;
}
```

## Bibliography.
The following sources were used:
- Lear-C: https://www.learn-c.org/en/Hello%2C_World%21
- IBM: https://www.ibm.com/docs/en/i/7.5?topic=files-stdioh


⠀<br>
___
# ¡Hola Mundo!
## Nuestro primer programa.
Todo programa en C utiliza librerías, las cuales dan la habilidad de ejecutar funciones necesarias. Un ejemplo es el caso de la funcion `printf`, la cual imprime un mensaje o cadena con formato en pantalla. Dicha función está definida en el archivo `stdio.h`.

**¿Qué podemos encontrar en `stdio.h`?**<br>
El archivo de inclusión `<stdio.h>` define constantes, macros, tipos y declara funciones de entrada y salida de secuencias. Algunas de ellas son:
- `printf`
- `scanf`
- `fopen`
- `fclose`
- `fprintf`
- etc.

Para añadir la habilidad de correr el comando `printf` a nuestro programa, debemos añadir la siguiente directiva a nuestra primera línea de código.
```
#include <stdio.h>
```

Luego, el primer código que correrá **siempre** estará dentro de la función `main`.
```
int main() {
    // Nuestro código aquí.
}
```
La palabra clave `int` indica que la función `main` devolverá un entero. El número devuelto por la función indica si el programa que escribimos funciona correctamente. Si queremos decir que nuestro código corrió exitosamente, devolvemos el número 0 (Un número mayor que 0 significará que el programa falló)<br>
Para este programa, devolveremos 0 para indicar que nuestro programa fue exitosa.
```
return 0;
```

> Tener en cuenta que cada declaración C **debe terminar con un punto y coma**, para que el compilador sepa que ha comenzado una nueva declaración.

Finalmente, llamamos a la función `printf` para imprimir nuestro mensaje en consola.
```
#include <stdio.h>

int main() {
    printf("¡Hola Mundo!");

    return 0;
}
```

## Bibliografía.
Se utilizó las siguientes fuente:
- Learn-C: https://www.learn-c.org/es/Hello%2C_World%21
- IBM: https://www.ibm.com/docs/es/i/7.5?topic=files-stdioh