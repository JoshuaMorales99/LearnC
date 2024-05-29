# Bucle For 💫
## Introducción al bucle `for`.
Los bucles son estructuras repetitivas que permiten ejecutar un bloque de código siempre que se alcance una condición específica. Son realmente útiles ya que ahorran tiempo, reducen errores y hacen que el código sea más legible.<br>
El bucle `for` es una de las estructuras repetitivas más conocidas, permitiendo recorrer un bloque de código una cantidad finita de veces.

## Bucle `for`.
El bucle `for` en C tiene la siguiente sintaxis:
```c
for (<EXPRESION_1; <EXPRESION_2>; <EXPRESION_3>>) {
    // Nuestro código aquí.
}
```

Donde:
- `<EXPRESION_1>`: Se ejecuta una vez antes de la ejecución de código. Aquí se inicializa la variable iteradora usando un valor inicial.
- `<EXPRESION_2>`: Define la condición para ejecutar el bloque de código. Se revisa si el iterador ha llegado a su valor final.
- `<EXPRESION_3>`: Se ejecuta cada vez después de que se haya ejecutado el bloque de código. Aquí se incrementa o decrementa el iterador.

## **¿Cuándo lo usamos?**
Utilizamos esta sentencia cuando sabemos exactamente cuántas veces queremos recorrer un bloque de código. Para esto, los bucles `for` requieren una variable iteradora, usualmente denominada `i`.

Veamos un ejemplo básico:
```c
int i;

// Imprimir los numeros del 0 al 4.
for (i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```
***Salida***:
```
> 0
> 1
> 2
> 3
> 4
```
> Ejemplo explicado.
> - `<EXPRESION_1>`: La expresión `i = 0` establece una variable antes de que inicie el bucle.
> - `<EXPRESION_2>`: La expresión `i < 5` define la condición para que se ejecute el bucle.
>   - Si la condición es **Verdadera**, entonces el bucle comenzará de nuevo.
>   - Si la condición es **Falsa**, entonces el bucle terminará.
> - `<EXPRESION_3>`: La expresión `i++` aumenta el valor de `i` en 1 cada vez que el bloque de código asociado al bucle haya sido ejecutado.

Otro ejemplo:
```c
// Imprimir los numeros pares del 0 al 10.
for (int i = 0; i <= 10; i = i + 2) {
    printf("%d\n", i);
}
```
***Salida***:
```
> 0
> 2
> 4
> 6
> 8
> 10
```

## Bucle `for` para arreglos.
Los bucles también son muy útiles para recorrer los elementos de un array. Por ejemplo:
```c
int numeros[] = {25, 50, 75, 100};
int i;

// Imprimir por consola todos los elementos del arreglo.
for (i = 0; i < 4; i++) {
    printf("%d\n", numeros[i]);
}
```
***Salida***:
```
> 25
> 50
> 75
> 100
```

Otro ejemplo:
```c
int unArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int suma = 0;                                                   // suma es: 0.
int i;

// Sumar todos los valores del arreglo.
for (i = 0; i < 10; i++) {
    suma += unArray[i];                                         // a[0] + a[1] + ... + a[9]
}                                                               // Ahora suma es: 55.

// Imprimir por consola el resultado del arreglo. 
printf("La suma del arreglo es: %d\n", suma);
```
***Salida***:
```
> La suma del arreglo es: 55
```
> En ambos ejemplos se utilizó el iterador `i` como índice del array para acceder a cada elemento.

## Bucles anidados.
Es posible colocar un bucle dentro de otro bucle. A esto se lo denomina **bucle anidado**.
```c
int i, j;

// Bucle externo.
for (i = 1; i <= 2; ++i) {
    printf("Externo: %d\n", i);                                 // Se ejecuta 2 veces.

    // Bucle interno.
    for (j = 1; j <= 3; ++j) {
        printf("Interno: %d\n", j);                             // Se ejecuta 6 veces (2 * 3)
    }

    printf("\n");
}
```
***Salida***:
```
> Externo: 1
> Interno: 1
> Interno: 2
> Interno: 3
> 
> Externo: 2
> Interno: 1
> Interno: 2
> Interno: 3
```
> El **"bucle interno"** se ejecutará una vez para cada iteración del **"bucle externo"**.

Este tipo de bucle se utiliza usualmente para recorrer arreglos multidimensionales. Por ejemplo:
```c
int matriz[2][3] = {{1, 4, 2}, {3, 6, 8}};

// Bucle externo que recorre las filas de la matriz.
for (int i = 0; i < 2; i++) {
    // Bucle interno que recorre las columnas de la matriz.
    for (int j = 0; j < 3; j++) {
        // Imprimir el elemento actual de la matriz.
    	printf("%d ", matriz[i][j]);
    }
    // Imprimir un salto de línea después de imprimir todos los elementos de una fila.
    printf("\n");
}
```
***Salida***:
```
> 1 4 2
> 3 6 8
```

## Bibliografía:
- Learn-C: https://www.learn-c.org/es/For_loops
- W3schools:
  - https://www.w3schools.com/c/c_for_loop.php
  - https://www.w3schools.com/c/c_for_loop_nested.php
  - https://www.w3schools.com/c/c_arrays.php