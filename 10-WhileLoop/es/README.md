# Bucle While 💫
## El bucle `while`.
Los bucles `while` son similares a los bucles `for`, pero con una funcionalidad distinta. Un bucle `while` continúa ejecutando el bloque de código asociado, siempre y cuando la condición en el `while` sea **Verdadera**.<br>
Su sintaxis es la siguiente:
```c
while ( <CONDICION> ) {
    // Nuestro código aquí.
}
```

Veamos un ejemplo:
```c
int i = 0;

// Imprimir los numeros del 0 al 4.
while(i < 5){
    printf("%d\n", i);

    // Incrementar en 1 el valor de i.
    i++;
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
> No hay que olvidar incrementar la variable utilizada en la condición (`i++`), de lo contrario el bucle nunca terminará.

## Bucles infinitos.
Los bucles `while` pueden ejecutarse infinitamente si una condición dada es siempre **Verdadera** (Es distinta de 0):
```c
while(1) {
    // Nuestro código aquí.
}
```

## El bucle `do .. while`.
El bucle `do .. while` es una variante del bucle `while`. Este bucle ejecuta el bloque de código una vez, antes de verificar si la condición es **Verdadera**. Luego de eso, repetirá dicho bloque siempre que la condición sea **Verdadera**.<br>
Su sintaxis es la siguiente:
```c
do {
    // Nuestro código aquí.
} while ( <CONDICION> );
```
> El bucle siempre será ejecutado al menos una vez, incluso si la condición es **Falsa**, ya que el bloque de código se ejecuta antes de probar la condición.

Veamos un ejemplo:
```c
int i = 0;

// Imprimir los numeros del 0 al 4.
do {
    printf("%d\n", i);

    // Incrementar en 1 el valor de i.
    i++;
} while (i < 5);
```
***Salida***:
```
> 0
> 1
> 2
> 3
> 4
```
> No hay que olvidar incrementar la variable utilizada en la condición (`i++`), de lo contrario el bucle nunca terminará.

## Directivas de bucle.
Existen dos directivas importantes de bucles que son usadas con todos los tipos de bucles en C. Estas son `break` y `continue`.

### La directiva `break`.
La instrucción `break` detiene un bucle por completo y salta fuera del mismo. Por ejemplo:
```c
int i = 0;

// Imprimir por consola los numeros del 0 al 3.
while(i < 10) {
    // Verificar si el valor es igual a 4.
    if(i == 4) {
        // Detener y salir del bucle.
        break;
    }
    // Imprimir por consola el valor numerico.
    printf("%d\n", i);
    // Incrementar en 1 el valor de i.
    i++;
}
```
***Salida***:
```
> 0
> 1
> 2
> 3
```
> También se pueden utilizar las directivas `break` en los demás tipos de bucles.

### La directiva `continue`.
La instrucción `continue` interrumpe una iteración (en el bucle) y continúa con la siguiente iteración en el bucle. Por ejemplo:
```c
int i = 0;

// Imprimir por consola los numeros del 0 al 9, excepto el 4.
while(i < 10) {
    // Verificar si el valor es igual a 4.
    if(i == 4) {
        // Incrementar en 1 el valor de i.
        i++;
        // Interrumpir la iteracion.
        continue;
    }
    // Imprimir por consola el valor numerico.
    printf("%d\n", i);
    // Incrementar en 1 el valor de i.
    i++;
}
```
***Salida***:
```
> 0
> 1
> 2
> 3
> 5
> 6
> 7
> 8
> 9
```
> También se pueden utilizar las directivas `continue` en los demás tipos de bucles.

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/While_loops
- W3schools:
  - https://www.w3schools.com/c/c_while_loop.php
  - https://www.w3schools.com/c/c_do_while_loop.php
  - https://www.w3schools.com/c/c_break_continue.php