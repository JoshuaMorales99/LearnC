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
```
if( <CONDICION> ) {
    // Nuestro código aquí. Será ejecutado si la condición es Verdadera.
}
```
<br>

Por ejemplo:
```
int edad = 4;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime un mensaje por consola.
    printf("Es menor de edad");
}
```
> En el ejemplo anterior, usamos la variable `edad` para comprobar si la edad es menor que 18. Como `edad` es 4, y sabemos que 4 es menor que 18, entonces la condición resulta **Verdadera**. Como es Verdadera, entra en el `if` y ejecuta el código que contiene.

<br>

Otro ejemplo:
```
int edad = 18;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime un mensaje por consola.
    printf("Es menor de edad");
}
```
> En el ejemplo anterior, usamos las variables `edad` para comprobar si la edad es menor que 18. Como `edad` es 18, y sabemos que 18 no es menor que 18, entonces la condición resulta **Falsa**. Como es Falsa, no entra en el `if` y no ejecuta el código que contiene.

## La sentencia `else`.
La sentencia `else` nos permite ejecutar código si el resultado de la condición del `if` es **Falso**. Su sintaxis es la siguiente:
```
if( <CONDICION> ) {
    // Nuestro código aquí. Será ejecutado si la condición es Verdadera.
} else {
    // Nuestro código aquí. Será ejecutado si la condición es Falsa.
}
```
<br>

Por ejemplo:
```
int edad = 18;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime "Es menor de edad" por consola.
    printf("Es menor de edad");
} else {
    // Si no es verdad, imprime "Es mayor de edad" por consola.
    printf("Es mayor de edad");
}
```
> En el ejemplo anterior, usamos las variables `edad` para comprobar si la edad es menor que 18. Como `edad` es 18, y sabemos que 18 no es menor que 18, entonces la condición resulta **Falsa**. Como es Falsa, no entra en el `if` y no ejecuta el código que contiene. Sin embargo, como es Falsa, entra en el `else` y ejecuta el código que contiene.

## La sentencia `else if`.
En ocaciones, tendremos más de dos salidas de las cuales elegir. En estos casos, encadenamos múltiples sentencias `if else`.<br>
La sentencia `else if` nos permite chequear si una nueva expresión es **Verdadera** o **Falsa**, y ejecutar códigos si el resultado de dicha condición es **Verdadera**. Su sintaxis es la siguiente:
```
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
```
int edad = 19;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si la condicion 1 es verdad, imprime "Es menor de edad" por consola.
    printf("Es menor de edad");
// Evaluar si la edad es igual a 18.
} else if(edad == 18) {
    // Si la condicion 1 es falsa y la condicion 2 es verdadera, imprime "La edad es igual a 18" por consola.
    printf("La edad es igual a 18");
} else {
    // Si la condicion 1 es falsa y la condicion 2 es falsa, imprime "Es mayor de edad" por consola.
    printf("Es mayor de edad");
}
```
> En el ejemplo anterior, usamos la variable `edad` para comprobar si la edad es menor que 18 (Condición 1). Como `edad` es 19, y sabemos que 19 es mayor a 18, entonces la condición 1 resulta **Falsa**. Como es Falsa, no entra en el `if` y no ejecuta el código que contiene. Sin embargo, como la condición 1 es Falsa, se evalúa una nueva condición establecida en la sentencia `else if` para comprobar si la edad es igual a 18 (Condición 2). Como `edad` es 19, y sabemos que 19 es distinto que 18, entonces la condición 2 resulta **Falsa**. Como es Falsa, no entra en el `else if` y no ejecuta el código que contiene. No obstante, como la condición 2 también es Falsa, entra en el `else` final y ejecuta el código que contiene.

## Operador ternario.
En C, existe una abreviatura para `if else`. Esta se conoce como **Operador Ternario** ya que consta de tres operandos. Usualmente, se puede utilizar para reempleazar varias líneas de código en una sola. Su sintaxis es la siguiente:
```
( <CONDICION> ) ? <EXPRESION_VERDADERA> : <EXPRESION_FALSA> ;
```
<br>

Por ejemplo, siguiente lineas de código:
```
int edad = 18;

// Evaluar si es menor de edad.
if(edad < 18) {
    // Si es verdad, imprime "Es menor de edad" por consola.
    printf("Es menor de edad");
} else {
    // Si no es verdad, imprime "Es mayor de edad" por consola.
    printf("Es mayor de edad");
}
```

Pueden ser escritas de la siguiente manera:
```
int edad = 18

// Evaluar si es menor de edad.
(edad < 18) ? printf("Es menor de edad") : printf("Es mayor de edad");
```

## Más de una expresión como condición.
Es posible evaluar dos o más expresiones juntas usando operadores lógicos. Para realizar esto, haremos uso de los siguientes conectores:
- **AND** (`&&`): Se utiliza para chequear si dos expresiones resultan **Verdadera**.
- **OR** (`||`): Se utiliza para chequear si alguna de las dos expresiones resulta **Verdadera**

<br>

Por ejemplo:
```
int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
    printf("foo es menor que bar Y moo es mayor que bar.");
}

if (foo < bar || moo > bar) {
    printf("foo es menor que bar O moo es mayor que bar.");
}
```

> Otro operador muy útil es el operador **NOT** (`!`). Se utiliza en proposiciones lógicas con el fin de negar una variable lógica o constante. En otras palabras, invierte el resultado **Verdadero** y **Falso**.
> - ! Verdadero => Falso.
> - ! Falso => Verdadero.

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Conditions
- W3schools: https://www.w3schools.com/c/c_conditions.php