# Condicionales 🤔
## Condicionales logicos.
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
- `else`: Se utiliza para especificar un bloque de código que se va a ejecutar si la condicion especificada es **Falsa**.
- `else if`: Se utiliza para especificar una nueva condición, si la primera fue **Falsa**.
- `switch`: Se utiliza para especificar muchos bloques de código alternativos que se van a ejecutar.

## La sentencia `if`.
La sentencia `if` nos permite chequear si una expresión es **Verdadera** o **Falsa**, y ejecutar códigos si el resultado de dicha condición es **Verdadera**. Su sintaxis es la siguiente:
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
> 2. Verificamos que la edad sea menor a 18.
> 3. Como `edad` es 4, y sabemos que 4 es menor que 18, entonces la condición resulta **Verdadera**.
> 4. Como la condición es Verdadera, se entra en el `if` y se ejecuta el código que contiene.

<br>

Otro ejemplo:
```c
int edad = 18;

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
> 2. Verificamos que la edad sea menor a 18.
> 3. Como `edad` es 18, y sabemos que 18 no es menor que 18, entonces la condición resulta **Falsa**.
> 4. Como la condición es Falsa, no entra en el `if` y no ejecuta el código que contiene.

## La sentencia `else`.
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
***Salida***:
```
> Es mayor de edad
```
> Analizamos el ejemplo anterior.
> 1. Usamos la variable `edad` que contendrá una edad dada.
> 2. Verificamos que la edad sea menor a 18.
> 3. Como `edad` es 18, y sabemos que 18 no es menor que 18, entonces la condición resulta **Falsa**.
> 4. Como la condición es Falsa, no entra en el `if` y no ejecuta el código que contiene.
> 5. Como la condición es Falsa, entra en el `else` y ejecuta el código que contiene.

## La sentencia `else if`.
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
> 2. Verificamos que la edad sea menor a 18 (Condición 1)
> 3. Como `edad` es 18, y sabemos que 18 no es menor que 18, entonces la condición 1 resulta **Falsa**.
> 4. Como la condición 1 es Falsa, no entra en el `if` y no efecuta el código que contiene.
> 5. Como la condición 1 es Falsa, se evalúa una nueva condición que es establecida en la sentencia `else if`.
> 6. Verificamos que la edad es igual a 18 (Condición 2)
> 7. Como `edad` es 18, y sabemos que 18 es igual que 18, entonces la condición 2 resulta **Verdadera**.
> 8. Como la condición 1 es Falsa y la condición 2 es Verdadera, entra en el `else if` y ejecuta el código que contiene.

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
> 2. Verificamos que la edad sea menor a 18 (Condición 1)
> 3. Como `edad` es 19, y sabemos que 19 no es menor que 18, entonces la condición 1 resulta **Falsa**.
> 4. Como la condición 1 es Falsa, no entra en el `if` y no ejecuta el código que contiene.
> 5. Como la condición 1 es Falsa, se evalúa una nueva condición que es establecida en la sentencia `else if`.
> 6. Verificamos que la edad es igual a 18 (Condición 2)
> 7. Como `edad` es 19, y sabemos que 19 no es igual que 18, entonces la condición 2 resulta **Falsa**.
> 8. Como la condición 1 y 2 son Falsas, no entra en el `else if` y no ejecuta el código que contiene.
> 9. Como la condición 1 y 2 son Falsas, entra en el `else` y ejecuta el código que contiene.

## Operador ternario.
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

## Más de una expresión como condición.
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

> Otro operador muy útil es el operador **NOT** (`!`). Se utiliza en proposiciones lógicas con el fin de negar una variable lógica o constante. En otras palabras, invierte el resultado **Verdadero** y **Falso**.<br>
```
- ! Verdadero       ->      Falso.
- ! Falso           ->      Verdadero.
```


## Bibliografía.
- [Learn-C: Condiciones](https://www.learn-c.org/es/Conditions)
- [W3schools: If](https://www.w3schools.com/c/c_conditions.php)
- [W3schools: Else](https://www.w3schools.com/c/c_conditions_else.php)
- [W3schools: Else If](https://www.w3schools.com/c/c_conditions_elseif.php)
- [W3schools: Short Hand If](https://www.w3schools.com/c/c_conditions_short_hand.php)