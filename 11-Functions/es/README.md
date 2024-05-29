# Funciones 💡
## Introducción a las funciones.
Una función es un bloque de código que solo se ejecutará cuando se la llame. Estas se utilizan para realizar tareas específicas y son importantes para la reutilización de código (Define el código una vez y utilízalo muchas veces)

## Funciones predefinidas.
En C existen muchas funciones predefinidas. Algunas de ellas que ya hemos visto son:
- `main()`: Función que se utiliza para ejecutar código.
- `printf()`: Función que se utiliza para imprimir texto por consola/pantalla.
```c
int main() {
    printf("Hola Mundo!");

    return 0;
}
```

## Declarar una función.
Para declarar una función, debemos especificar el nombre de la función, seguido de paréntesis `()` y llaves `{}`.<br>
Sintaxis:
```c
<TIPO_RETORNO> <NOMBRE_FUNCION> () {
    <CUERPO_FUNCION>

    return <EXPRESION>
}
```
> Explicación de cada parte:
> - `<TIPO_RETORNO>`: Es el tipo de valor devuelto por la función.
> - `<NOMBRE_FUNCION>`: Es el nombre significativo asignado a la función.
> - `<CUERPO_FUNCION>`: Es el bloque de código que será ejecutado cuando se la llame.
> - `return <EXPRESION>`: Es el valor devuelto de la función. 

Veamos un ejemplo simple.
```c
void miFuncion() {
    // Nuestro código aquí.
}
```
> Explicación del ejemplo:
> - `void` es el tipo de valor devuelto por la función. En este caso, indica que no devolverá ningún valor.
> - `miFuncion` es el nombre significativo asignado a la función.
> - Dentro de la función se encuentra el bloque de código que será ejecutado cuando se la llame.

## Llamar a una función.
Las funciones declaradas no se ejecutarán al ejecutar el programa; lo harán solamente cuando se las llame. Para llamar a una función, debemos escribir su nombre `<NOMBRE_FUNCION>`, seguido de dos parentesis `()` y un punto y coma (`;`)<br>
Por ejemplo:
```c
#include <stdio.h>

// Declarar la funcion 'miFuncion'.
void miFuncion() {
    // Imprimir un mensaje por consola.
    printf("Me acaban de ejecutar!\n");
}

int main() {
    // Llamar a la funcion 'miFuncion'.
    miFuncion();

    return 0;
}
```
***Salida***:
```
> Me acaban de ejecutar!
```

Veamos ahora un ejemplo donde se llama a una función varias veces.
```c
#include <stdio.h>

// Declarar la funcion 'miFuncion'.
void miFuncion() {
    // Imprimir un mensaje por consola.
    printf("Me acaban de ejecutar!\n");
}

int main() {
    // Llamar a la funcion 'miFuncion' varias veces.
    miFuncion();
    miFuncion();
    miFuncion();

    return 0;
}
```
***Salida***:
```
> Me acaban de ejecutar!
> Me acaban de ejecutar!
> Me acaban de ejecutar!
```

En C, las funciones deben ser declaradas **antes de ser usadas en el código**. Estas pueden ser declaradas primero y luego implementadas en un archivo cabecera o al principio del programa en orden de uso.<br>
La mejor manera de usar funciones es de la siguiente:
```c
#include <stdio.h>

// Declarar la funcion 'miFuncion'.
void miFuncion();

int main() {
    // Llamar a la funcion 'miFuncion'.
    miFuncion();

    return 0;
}

// Definir la funcion 'miFuncion'.
void miFuncion() {
    // Imprimir un mensaje por consola.
    printf("Me acaban de ejecutar!\n");
}
```
***Salida***:
```
> Me acaban de ejecutar!
```

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Functions
- W3schools: https://www.w3schools.com/c/c_functions.php