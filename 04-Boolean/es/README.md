# 0️⃣1️⃣ Booleanos
📖 **TABLA DE CONTENIDOS**
- [0️⃣1️⃣ Booleanos](#0️⃣1️⃣-booleanos)
  - [Introducción a los booleano](#introducción-a-los-booleano)
  - [Booleanos en C](#booleanos-en-c)
  - [Uso de la librería `stdbool.h`](#uso-de-la-librería-stdboolh)
    - [¿Qué es la librería `stdbool.h`?](#qué-es-la-librería-stdboolh)
    - [¿Cómo usarla?](#cómo-usarla)
    - [¿Por qué 0 y 1?](#por-qué-0-y-1)
  - [Uso de `#define` para declarar valores booleanas.](#uso-de-define-para-declarar-valores-booleanas)
  - [Bibliografía](#bibliografía)

<br>

| ◀ | **Módulo anterior**: [Módulo 03 - Variables Constantes](https://github.com/JoshuaMorales99/LearnC/tree/main/03-ConstantVariables/es)<br>
| ▶ | **Módulo siguiente**: [Módulo 05 - Condicionales](https://github.com/JoshuaMorales99/LearnC/tree/main/05-Conditions/es)

## Introducción a los booleano
En programación, usualmente se necesita un tipo de dato que solo puede tomar dos valores posibles:
- Si / No.
- Encendido / Apagado.
- Verdadero / Falso.
- 0 / 1.

Habitualmente, se utiliza para representar valores lógicos y para controlar el flujo de ejecución en sentencias de toma de decisiones.

<img src="./assets/Booleano.webp" alt="Verdadero y Falso" width=250px/>

## Booleanos en C
En C, el tipo de dato `bool` no es un tipo de datos integrado, como por ejemplo `int` o `char`. Sin embargo, se puede implementar en C utilizando diferentes métodos, como:
- Método 1: Uso de la librería `stdbool.h`.
- Método 2: Uso de `#define` para declarar valores booleanas.

## Uso de la librería `stdbool.h`
### ¿Qué es la librería `stdbool.h`?
La librería `stdbool.h` es una biblioteca estándar del lenguaje de programación C que contiene todas las definiciones y declaraciones para poder incluir en nuestro programa el tipo de dato booleano.

### ¿Cómo usarla?
Para usar booleanos en C, debemos incluir la librería `stdbool.h`. Luego, podremos hacer uso del tipo de dato en cuestión.
```c
#include <stdbool.h>
```
Veamos un ejemplo:
```c
// Define constantes, macros, tipos y declara funciones de entrada y salida.
#include <stdio.h>
// Define booleanos.
#include <stdbool.h>

int main() {
    // Declarar variables booleanas.
    bool esVerdadero = true;
    bool esFalso = false;

    // Imprimir los valores en consola.
    printf("El valor de esVerdadero es: %d\n", esVerdadero);
    printf("El valor de esFalso es: %d\n", esFalso);

    return 0;
}
```
***Salida***:
```
> El valor de esVerdadero es: 1.
> El valor de esFalso es: 0.
```

### ¿Por qué 0 y 1?
Los valores de las variables booleanas en C toman el valor de:
- `0`: Para representar el valor de **Falso**.
- `1`: (o cualquier otro número distinto de 0): Para representar el valor de **Verdadero**.

<img src="./assets/0y1.webp" alt="Los números 0 y 1 enfrentados" width=250px/>

## Uso de `#define` para declarar valores booleanas.
En este caso, se definen los valores enteros que representarán a nuestros booleanos. Por lo general: 
- El valor **Falso** se le asigna el valor entero `0`
- El valor **Verdadero** se le asigna el valor entero de `1`.

Esto lo definimos usando la siguiente notación:
```c
#define BOOL char
#define FALSE 0
#define TRUE 1
```
Veamos un ejemplo:
```c
#include <stdio.h>

// Definir el tipo booleano.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declarar variables booleanas.
    BOOL esVerdadero = TRUE;
    BOOL esFalso = FALSE;

    // Imprimir los valores en consola.
    printf("El valor de esVerdadero es: %d\n", esVerdadero);
    printf("El valor de esFalso es: %d\n", esFalso);

    return 0;
}
```
***Salida***:
```
> El valor de esVerdadero es: 1
> El valor de esFalso es: 0
```

## Bibliografía
- [Learn-C: Variables y Tipos](https://www.learn-c.org/es/Variables_and_Types)
- [GeeksForGeeks: Bool in C](https://www.geeksforgeeks.org/bool-in-c/?ref=lbp)
- [W3schools: Booleans](https://www.w3schools.com/c/c_booleans.php)
- [WikiBooks: <stdbool.h>](https://en.wikibooks.org/wiki/C_Programming/stdbool.h)