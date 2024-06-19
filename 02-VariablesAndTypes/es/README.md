# 🧩 Variables y Tipos
📖 **TABLA DE CONTENIDOS**
- [🧩 Variables y Tipos](#-variables-y-tipos)
  - [¿Qué es una variable?](#qué-es-una-variable)
    - [Tipos de datos](#tipos-de-datos)
    - [Declarar variables](#declarar-variables)
    - [Definir variables](#definir-variables)
    - [Inicializar variables](#inicializar-variables)
    - [¿Cómo usar las variables en C?](#cómo-usar-las-variables-en-c)
  - [Especificadores de formato](#especificadores-de-formato)
  - [Cambiar valores de las variables](#cambiar-valores-de-las-variables)
  - [Declarar múltiples variables](#declarar-múltiples-variables)
  - [¡Importante!](#importante)
  - [Reglas para nombrar variables en C](#reglas-para-nombrar-variables-en-c)
  - [Bibliografía](#bibliografía)

<br>

| ◀ | **Módulo anterior**: [Módulo 01 - ¡Hola Mundo!](https://github.com/JoshuaMorales99/LearnC/tree/main/01-HelloWorld/es)<br>
| ▶ | **Módulo siguiente**: [Módulo 03 - PRÓXIMAMENTE]()

## ¿Qué es una variable?
Una variable es un lugar en la computadora donde se va a almacenar datos de un programa. Estos datos o valores pueden ir cambiando durante su ejecución. Están formadas por un espacio en memoria y un nombre simbólico que está asociado a dicho espacio. En este espacio podremos encontrar un valor que puede ser conocido o desconocido.

<img src="./assets/Memoria.webp" alt="Memoria" width=340px/>

### Tipos de datos
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
```c
#define BOOL char
#define FALSE 0
#define TRUE 1
```

Por otro lado, también podemos hallar los denominados como **String**. Para eso, C utilizará arreglos de caracteres para definirlos.

> C es un lenguaje **fuertemente tipado**, por lo que todos los tipos de variables deben especificarse antes de usarse.

### Declarar variables
La declaración de variables en C informa al compilador sobre la existencia de la variable con el nombre y el tipo de dato especificados. Cuando se declara la variable, se crea una entrada en la tabla de símbolos y se asignará memoria en el momento de la inicialización de la variable.<br>
Para declarar una variables en C se deberá anteponer la palabra reservada del tipo de variable al identificador (El identificador es un nombre representativo y característico de lo que se desea almacenar en ella)
Sintáxis:
```
<TIPO_VARIABLE> <IDENTIFICADOR> ;
```

Un ejemplo es el siguiente:
```c
// TIPO VARIABLE: int.  -   IDENTIFICADOR: foo.
int foo;
```

### Definir variables
En la definición de una variable C, el compilador le asigna algo de memoria y algún valor. Una variable definida contendrá algún valor basura aleatorio hasta que no se inicialice.

> La mayoría de los compiladores de C modernos declaran y definen la variable en un solo paso. Aunque podemos declarar una variable en C usando la palabra clave `extern`, no es necesaria en la mayoría de los casos.

### Inicializar variables
La inicialización de una variable es el proceso en el que el usuario asigna un valor significativo a la variable.
Sintáxis:
```
<TIPO_VARIABLE> <IDENTIFICADOR> = <INICIALIZACION> ;
```

Un ejemplo es el siguiente:
```c
// TIPO VARIABLE: int.  -   IDENTIFICADOR: bar  -   INICIALIZACION: 1.
int bar = 1;
```
En los ejemplos anteriores, la variable `foo` puede ser usada, pero como no la inicializamos, no sabemos qué hay en ella. Sin embargo, la variable `bar` contiene el número 1.

### ¿Cómo usar las variables en C?
Ahora que conocemos a las variables, podemos hacer un poco de matemáticas. Asumiendo que `unNumero` y `otroNumero` son variables, podemos operar con ellos:
```c
// Declarar variables enteras con signo.
int unNumero = 4;
int otroNumero = 2;

// Imprimir los valores en consola.
printf("La suma es igual a: %d\n", unNumero + otroNumero);
printf("La resta es igual a: %d\n", unNumero - otroNumero);
printf("La multiplicacion es igual a: %d\n", unNumero * otroNumero);
printf("La division es igual a: %d\n", unNumero / otroNumero);
```
***Salida***:
```
> La suma es igual a: 6
> La resta es igual a: 2
> La multiplicacion es igual a: 8
> La division es igual a: 2
```

<br>

Veamos ahora un ejemplo con los booleanos:
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

## Especificadores de formato
Los especificadores de formato se utilizan junto con la función `printf` para indicar al compilador qué tipo de datos está almacenando la variable. Para esto, un especificador de formato se inicia con un signo de porcentaje `%`, seguido de un carácter.<br>
Por ejemplo, para generar el valor de una variable `int`, utilice el formato especificador `%d` entre comillas dobles (`""`), Dentro de la función `printf`:
```c
int unNumero = 4;
printf("%d", unNumero);
```
***Salida***:
```
> 4
```
> Para imprimir otros tipos, usa `%c` para **char** y `%f` para **float**.

## Cambiar valores de las variables
Para cambiar el valor de una variable existente, se procederá de la siguiente manera:
```c
int unNumero = 4;                                                       // unNumero es: 4.
unNumero = 10;                                                          // Ahora unNumero es: 10.
```
Si asignas un nuevo valor a una variable existente ya inicializada, se sobrescribirá el valor anterior.

> También puedes asignar el valor de una variable a otra:
> ```c
> // Declarar variables enteras con signo.
> int unNumero = 4;                                                     // unNumero es: 4.
> int otroNumero = 2;                                                   // otroNumero es: 2.
> 
> // Asignar el valor de otroNumero a unNumero.
> unNumero = otroNumero;                                                // Ahora unNumero es: 2.
> 
> // Imprimir los valores en consola.
> printf("El valor de unNumero es: %d\n", unNumero);
> ```
> ***Salida***:
> ```
> > El valor de unNumero es: 2
> ```

## Declarar múltiples variables
En C es posible declarar más de una variable del mismo tipo, para eso debemos usar una lista **separada por comas**:
```
<TIPO_VARIABLE> <IDENTIFICADOR_1> , <IDENTIFICADOR_2> , ... , <IDENTIFICADOR_N>;
```

Por ejemplo:
```c
int foo, bar;
```
<br>

También es posible asignarles a cada una de las variables un valor inicial (Si se desea):
```
<TIPO_VARIABLE> <IDENTIFICADOR_1> = <INICIALIZACION_1>, ... , <IDENTIFICADOR_N> = <INICIALIZACION_N> ;
```

Por ejemplo:
```c
int x = 5, y = 6, z = 50;
// Imprimir la suma de las variables dadas.
printf("La suma es: %d\n", x + y + z);
```
***Salida***:
```
> La suma es: 61
```
> Si lo que queremos es asignar el **mismo valor** a varias variables del mismo tipo, debemos hacerlo de la siguiente manera:
> ```c
> int x, y, z;
> // Asignar un mismo valor a las variables.
> x = y = z = 50;
> // Imprimir la suma de las variables dadas.
> printf("La suma es: %d\n", x + y + z);
> ```
> ***Salida***:
> ```
> > La suma es: 150
> ```

## ¡Importante!
Cosas a tener en cuenta a la hora de usar variables:
- **Flexibilidad**: Las variables nos permiten adaptar nuestro código a diferentes situaciones, almacenando y manupulando varios tipos de datos.
- **Legibilidad**: El uso de nombres de variables declarativos mejora la legibilidad del código. En lugar de lidiar con valores crudos, es mejor entender el propósito de cada variable de un vistazo.
- **Precisión**: Elegir el tipo de dato correcto asegura que nuestras variables consuman cantidades apropiadas de memoria, optimizando el rendimiento de nuestros programas.

## Reglas para nombrar variables en C
Además, se deben tener en cuenta las siguientes reglas generales para nombrar variables:
- Los nombres pueden contener letras, dígitos y guiones bajos.
- Los nombres deben comenzar con una letra o un guión bajo (`_`)
- Los nombres distinguen entre mayúsculas y minúsculas (`miVar` y `mivar` son variables diferentes)
- Los nombres no pueden contener espacios en blanco ni caracteres especiales como `!`, `#`, `%`, etc.
- Las palabras reservadas (como `int`) no se pueden usar como nombres.

## Bibliografía
- [Learn-C: Variables y Tipos](https://www.learn-c.org/es/Variables_and_Types)
- [LinkedIn: Fundamentos de la Programación - Variables y Tipos de Datos](https://www.linkedin.com/pulse/fundamentos-de-la-programaci%C3%B3n-variables-y-tipos-migueles-abraira-ai9hf/)
- [W3schools: Format Specifiers](https://www.w3schools.com/c/c_variables_format.php)
- [W3schools: Change Values](https://www.w3schools.com/c/c_variables_change.php)
- [W3schools: Multiple Variables](https://www.w3schools.com/c/c_variables_multiple.php)
- [W3schools: Variables Names](https://www.w3schools.com/c/c_variables_names.php)
- [GeeksForGeeks: Variables in C](https://www.geeksforgeeks.org/variables-in-c/?ref=lbp)