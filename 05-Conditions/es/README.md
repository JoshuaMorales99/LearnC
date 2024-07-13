# 🤔 Condicionales
📖 **TABLA DE CONTENIDOS**
- [🤔 Condicionales](#-condicionales)
  - [Introducción](#introducción)
  - [Condicionales lógicos](#condicionales-lógicos)
  - [La sentencia de control de decisión](#la-sentencia-de-control-de-decisión)
    - [La sentencia `if`](#la-sentencia-if)
    - [La sentencia `else`](#la-sentencia-else)
    - [La sentencia `else if`](#la-sentencia-else-if)
  - [Operador ternario](#operador-ternario)
  - [Más de una expresión como condición](#más-de-una-expresión-como-condición)
  - [Negación de una expresión lógica](#negación-de-una-expresión-lógica)
  - [Bibliografía](#bibliografía)

<br>

| ◀ | **Módulo anterior**: [Módulo 04 - Booleanos](https://github.com/JoshuaMorales99/LearnC/tree/main/04-Boolean/es)<br>
| ▶ | **Módulo siguiente**: [Módulo 06 - PRÓXIMAMENTE]()

## Introducción
Hay situaciones en el día a día en las que debemos tomar algunas decisiones y, dependiendo de estas decisiones, determinaremos qué acción tomar a continuación. Por ejemplo, si está lloviendo, decidimos llevar un paraguas; si no está lloviendo, no lo llevamos.

<img src="./assets/Paraguas.webp" alt="Criatura adorable en la lluvia con un paraguas" width=250px/>

De forma similar, en programación surgen situaciones donde necesitamos tomar decisiones. En base a estas, el programa ejecutará una acción, otra o ninguna. Esto permite que el programa se comporte de manera diferente según las condiciones específicas que se presenten, al igual que nosotros adaptamos nuestras acciones en función de las circunstancias.

## Condicionales lógicos
El lenguaje C soporta **condicionales lógicos** los cuales conectan dos proposiciones. Se utilizan para evaluar el valor de verdad binaria, siendo 0 **Falso** y cualquier otro número **Verdadero**.<br>
Estos pueden ser:
- **Menor que**: `a < b`
- **Menor o igual que**: `a <= b`
- **Mayor que**: `a > b`
- **Mayor o igual que**: `a >= b`
- **Igual que**: `a == b`
- **Distinto que**: `a != b`

Estos condicionales lógicos se utilizan generalmente para realizar diferentes acciones en la toma de desiciones. En C se tiene las siguientes instrucciones condicionales:
- `if`: Se utiliza para especificar un bloque de código que se va a ejecutar si la condición especificada es **Verdadera**.
- `else`: Se utiliza para especificar un bloque de código que se va a ejecutar si la condición especificada es **Falsa**.
- `else if`: Se utiliza para especificar una nueva condición, si la primera fue **Falsa**.
- `switch`: Se utiliza para especificar muchos bloques de código alternativos que se van a ejecutar.

## La sentencia de control de decisión
<img src="./assets/Condiciones.webp" alt="Dos caminos posibles, que llevan a lugares diferentes" width=250px/>

### La sentencia `if`
La instrucción `if` es la sentencia de control de decisión más simple. Nos permite chequear si una expresión es **Verdadera** o **Falsa**, y ejecutar código si el resultado de dicha condición es **Verdadera**. Su sintaxis es la siguiente:
```c
if( <CONDICION> ) {
    // Nuestro código aquí. Será ejecutado si la condición es Verdadera.
}
```
<br>

Por ejemplo:
```c
int edad = 4;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime un mensaje por consola.
    printf("Es menor de edad\n");
}
```
***Salida***:
```
> Es menor de edad
```
> Analizamos el ejemplo anterior.
> 1. Usamos una variable `edad` que contendrá una edad dada.
> 2. Verificamos que la edad sea menor a 18 `(edad < 18)`.
> 3. Como `edad` es 4, y sabemos que 4 es menor que 18, entonces la condición resulta **Verdadera**.
> 4. Dado que la condición es **Verdadera**, se entra en el `if` y se ejecuta el código que contiene.

<br>

Otro ejemplo:
```c
int edad = 19;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime un mensaje por consola.
    printf("Es menor de edad\n");
}
```
***Salida***:
```
> 
```
> Analizamos el ejemplo anterior.
> 1. Usamos la variable `edad` que contendrá una edad dada.
> 2. Verificamos que la edad sea menor a 18 `(edad < 18)`.
> 3. Como `edad` es 19, y sabemos que 19 no es menor que 18, entonces la condición resulta **Falsa**.
> 4. Dado que la condición es **Falsa**, no entra en el `if` y no ejecuta el código que contiene.

<br>

**Ventajas de la instrucción `if`**
Las principales ventajas de la sentencia `if` son:
- Es la declaración más simple para la toma de decisiones.
- Es fácil de usar y entender.
- Puede evaluar expresiones de todo tipo como `int`, `char`, etc.

**Desventajas de la instrucción `if`**
Las principales desventajas de la sentencia `if` son:
- Solo permite un único bloque de código por cada condición.
- Cuando hay un gran número de expresiones, el código del bloque `if` se vuelve complejo e ilegible.
- Puede ser menos eficiente en términos de rendimiento cuando se tienen muchas condiciones, comparado con otras estructuras de control.

### La sentencia `else`
La sentencia `else` nos permite ejecutar código si el resultado de la condición del `if` es **Falso**. Su sintaxis es la siguiente:
```c
if( <CONDICION> ) {
    // Nuestro código aquí. Será ejecutado si la condición es Verdadera.
} else {
    // Nuestro código aquí. Será ejecutado si la condición es Falsa.
}
```
<br>

Por ejemplo:
```c
int edad = 19;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime "Es menor de edad" por consola.
    printf("Es menor de edad\n");
} else {
    // Si no es verdad, imprime "Es mayor de edad" por consola.
    printf("Es mayor de edad\n");
}
```
***Salida***:
```
> Es mayor de edad
```
> Analizamos el ejemplo anterior.
> 1. Usamos la variable `edad` que contendrá una edad dada.
> 2. Verificamos que la edad sea menor a 18 `(edad < 18)`.
> 3. Como `edad` es 19, y sabemos que 19 no es menor que 18, entonces la condición resulta **Falsa**.
> 4. Dado que la condición es **Falsa**, no entra en el `if` y no ejecuta el código que contiene.
> 5. Sin embargo, como la condición es **Falsa**, entra en el `else` y ejecuta el código que contiene.

### La sentencia `else if`
En ocaciones, tendremos más de dos salidas de las cuales elegir. En estos casos, encadenamos múltiples sentencias `if else`.<br>
La sentencia `else if` nos permite chequear si una nueva expresión es **Verdadera** o **Falsa**, y ejecutar códigos si el resultado de dicha condición es **Verdadera**. Su sintaxis es la siguiente:
```c
if( <CONDICION_1> ) {
    // Nuestro código aquí. Será ejecutado si la condición 1 es Verdadera.
} else if ( <CONDICION_2> ) {
    // Nuestro código aquí. Será ejecutado si la condición 1 es Falsa y la condición 2 es Verdadera.
} else {
    // Nuestro código aquí. Será ejecutado si la condición 1 es Falsa y la condición 2 es Falsa.
}
```
<br>

Por ejemplo:
```c
int edad = 18;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si la condicion 1 es verdad, imprime "Es menor de edad" por consola.
    printf("Es menor de edad\n");
// Evaluar si la edad es igual a 18.
} else if(edad == 18) {
    // Si la condicion 1 es falsa y la condicion 2 es verdadera, imprime "La edad es igual a 18" por consola.
    printf("La edad es igual a 18\n");
} else {
    // Si la condicion 1 es falsa y la condicion 2 es falsa, imprime "Es mayor de edad" por consola.
    printf("Es mayor de edad\n");
}
```
***Salida***:
```
> La edad es igual a 18
```
> Analizamos el ejemplo anterior.
> 1. Usamos la variable `edad` que contendrá una edad dada.
> 2. Verificamos que la edad sea menor a 18 `(edad < 18)` (Condición 1)
> 3. Como `edad` es 18, y sabemos que 18 no es menor que 18, entonces la condición 1 resulta **Falsa**.
> 4. Dado que la condición 1 es **Falsa**, no entra en el `if` y no efecuta el código que contiene.
> 5. Sin embargo, como la condición 1 es **Falsa**, se evalúa una nueva condición que es establecida en la sentencia `else if`.
> 6. Verificamos que la edad sea igual a 18 `(edad == 18)` (Condición 2)
> 7. Como `edad` es 18, y sabemos que 18 es igual que 18, entonces la condición 2 resulta **Verdadera**.
> 8. Dado que la condición 1 es **Falsa** y la condición 2 es **Verdadera**, entra en el `else if` y ejecuta el código que contiene.

<br>

**¿Qué pasaría si `edad` es mayor a 18?**
```c
int edad = 19;
```
***Salida***:
```
> Es mayor de edad
```
> Analizamos el ejemplo anterior.
> 1. Usamos la variable `edad` que contendrá una edad dada.
> 2. Verificamos que la edad sea menor a 18 `(edad < 18)` (Condición 1)
> 3. Como `edad` es 19, y sabemos que 19 no es menor que 18, entonces la condición 1 resulta **Falsa**.
> 4. Dado que la condición 1 es **Falsa**, no entra en el `if` y no ejecuta el código que contiene.
> 5. Sin embargo, como la condición 1 es **Falsa**, se evalúa una nueva condición que es establecida en la sentencia `else if`.
> 6. Verificamos que la edad es igual a 18 `(edad == 18)` (Condición 2)
> 7. Como `edad` es 19, y sabemos que 19 no es igual que 18, entonces la condición 2 resulta **Falsa**.
> 8. Dado que la condición 1 y 2 son **Falsas**, no entra en el `else if` y no ejecuta el código que contiene.
> 9. Sin embargo, como la condición 1 y 2 son **Falsas**, entra en el `else` y ejecuta el código que contiene.

<br>

**Ventajas de la instrucción `else if`**
Las principales ventajas de la sentencia `else if` son:
- La sentencias `else if` permite ejecutar diferentes instrucciones en función de diferentes condiciones.
- Ayuda a modificar el flujo del programa.
- Es simple, eficiente y fácil de entender cuando hay menos condiciones.
- Puede evaluar expresiones de todo tipo como `int`, `char`, etc.

**Desventajas de la instrucción `else if`**
Las principales desventajas de la sentencia `else if` son:
- Si hay muchas instrucciones `else if` presentes, el código se vuelve ilegible y complejo.
- Puede ser menos eficiente en términos de rendimiento cuando se tienen muchas condiciones, comparado con otras estructuras de control.

## Operador ternario
En C, existe una abreviatura para `if else`. Esta se conoce como **Operador Ternario** ya que consta de tres operandos. Usualmente, se puede utilizar para reempleazar varias líneas de código en una sola. Su sintaxis es la siguiente:
```c
( <CONDICION> ) ? <EXPRESION_VERDADERA> : <EXPRESION_FALSA> ;
```
<br>

Por ejemplo, siguiente lineas de código:
```c
int edad = 18;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime "Es menor de edad" por consola.
    printf("Es menor de edad\n");
} else {
    // Si no es verdad, imprime "Es mayor de edad" por consola.
    printf("Es mayor de edad\n");
}
```

Pueden ser escritas de la siguiente manera:
```c
int edad = 18

// Evaluar si es menor de edad.
(edad < 18) ? printf("Es menor de edad\n") : printf("Es mayor de edad\n");
```
***Salida***:
```
> Es mayor de edad
```

## Más de una expresión como condición
Es posible evaluar dos o más expresiones juntas usando operadores lógicos. Para realizar esto, haremos uso de los siguientes conectores:
- **AND** (`&&`): Se utiliza para chequear si dos expresiones resultan **Verdadera**.
- **OR** (`||`): Se utiliza para chequear si alguna de las dos expresiones resulta **Verdadera**

<br>

Por ejemplo:
```c
int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
    printf("foo es menor que bar Y moo es mayor que bar\n");
}

if (foo < bar || moo > bar) {
    printf("foo es menor que bar O moo es mayor que bar\n");
}
```
***Salida***:
```
> foo es menor que bar Y moo es mayor que bar
> foo es menor que bar O moo es mayor que bar
```

## Negación de una expresión lógica
Otro operador muy útil es el operador **NOT** (`!`). Se utiliza en proposiciones lógicas con el fin de negar una variable lógica o constante. En otras palabras, invierte el resultado **Verdadero** y **Falso**.<br>
```
- ! Verdadero       ->      Falso.
- ! Falso           ->      Verdadero.
```

## Bibliografía
- [Learn-C: Condiciones](https://www.learn-c.org/es/Conditions)
- [W3schools: If](https://www.w3schools.com/c/c_conditions.php)
- [W3schools: Else](https://www.w3schools.com/c/c_conditions_else.php)
- [W3schools: Else If](https://www.w3schools.com/c/c_conditions_elseif.php)
- [W3schools: Short Hand If](https://www.w3schools.com/c/c_conditions_short_hand.php)
- [GeeksForGeeks: Decision Making in C](https://www.geeksforgeeks.org/decision-making-c-cpp/)
- [GeeksForGeeks: if statement](https://www.geeksforgeeks.org/c-if-statement/?ref=lbp)
- [GeeksForGeeks: if else statement](https://www.geeksforgeeks.org/c-if-else-statement/?ref=lbp)