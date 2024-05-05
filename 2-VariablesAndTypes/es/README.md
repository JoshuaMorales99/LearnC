# Variables y Tipos 🧩
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
    // Declarar variables enteras con signo.
    int unNumero = 4;
    int otroNumero = 2;

    // Imprimir los valores en consola.
    printf("La suma es igual a: %d\n", unNumero + otroNumero);              // Realiza e imprime: 4 + 2 = 6.
    printf("La resta es igual a: %d\n", unNumero - otroNumero);             // Realiza e imprime: 4 - 2 = 2.
    printf("La multiplicacion es igual a: %d\n", unNumero * otroNumero);    // Realiza e imprime: 4 * 2 = 8.
    printf("La division es igual a: %d\n", unNumero / otroNumero);          // Realiza e imprime: 4 / 2 = 2.

    return 0;
}
```

Veamos ahora un ejemplo con los booleanos:
```
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
    printf("El valor de esVerdadero es: %d\n", esVerdadero);                // Imprime: 1.
    printf("El valor de esFalso es: %d\n", esFalso);                        // Imprime: 0.

    return 0;
}
```

## Especificadores de formato.
Los especificadores de formato se utilizan junto con la función `printf` para indicar al compilador qué tipo de datos está almacenando la variable. Para esto, un especificador de formato se inicia con un signo de porcentaje `%`, seguido de un carácter.
Por ejemplo, para generar el valor de una variable `int`, utilice el formato especificador `%d` entre comillas dobles (`""`), Dentro de la función `printf`:
```
int unNumero = 4;
printf("%d", unNumero);                                                     // Imprime: 4.
```
> Para imprimir otros tipos, usa `%c` para **char** y `%f` para **float**.

## Cambiar valores de las variables.
Para cambiar el valor de una variable existente, se procederá de la siguiente manera:
```
int unNumero = 4;                                                           // unNumero es 4.
unNumero = 10;                                                              // Ahora unNumero es 10.
```
Si asignas un nuevo valor a una variable existente ya inicializada, se sobrescribirá el valor anterior.

> También puedes asignar el valor de una variable a otra:
> ```
> #include <stdio.h>
> 
> int main() {
>   int unNumero = 4;                                                       // unNumero es 4.
>   int otroNumero = 2;                                                     // otroNumero es 2.
> 
>   // Asignar el valor de otroNumero a unNumero.
>   unNumero = otroNumero;                                                  // Ahora unNumero es 2.
> 
>   // Imprimir los valores en consola.
>   printf("El valor de unNumero es: %d", unNumero);                        // Imprime: 2.
>
>   return 0;
> }
> ```

## ¡Importante!.
Cosas a tener en cuenta a la hora de usar variables:
- **Flexibilidad**: Las variables nos permiten adaptar nuestro código a diferentes situaciones, almacenando y manupulando varios tipos de datos.
- **Legibilidad**: El uso de nombres de variables declarativos mejora la legibilidad del código. En lugar de lidiar con valores crudos, es mejor entender el propósito de cada variable de un vistazo.
- **Precisión**: Elegir el tipo de dato correcto asegura que nuestras variables consuman cantidades apropiadas de memoria, optimizando el rendimiento de nuestros programas.

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Variables_and_Types
- LinkedIn: https://www.linkedin.com/pulse/fundamentos-de-la-programaci%C3%B3n-variables-y-tipos-migueles-abraira-ai9hf/