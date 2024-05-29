# Static 🧊
## Introducción.
El modificador `static` es una palabra reservada en el lenguaje de programación C, la cual puede ser usada con variables y funciones.

## Variables estáticas.
Por defecto, las variables son locales al scope (alcance) en el cual son definidas. Esto significa que son visibles y accesibles solo dentro de las funciones en las que están definidas. Sin embargo, pueden ser declaradas como estáticas para incrementar su alcance dentro del archivo que las contiene. Como resultado, estas variables pueden ser accedidas en cualquier lugar dentro del archivo.<br>
Veamos el siguiente ejemplo, donde queremos contar a los corredores participando en una carrera:
```c
#include <stdio.h>

int corredor();

int main() {
    printf("%d\n", corredor());
    printf("%d\n", corredor());

    return 0;
}

int corredor() {
    // Declarar variable local contador e inicializar en 0.
    int contador = 0;
    // Incrementar variable contador.
    contador++;
    // Retornar el valor de contador.
    return contador;
}
```
***Salida***:
```
> 1
> 1
```
Podemos observar que `contador` no se actualiza porque es removida de la memoria tan pronto como la función termina. Sin embargo, si usamos el modificador `static`:
```c
#include <stdio.h>

int corredor();

int main() {
    printf("%d\n", corredor());
    printf("%d\n", corredor());

    return 0;
}

int corredor() {
    // Declarar variable estatica contador e inicializar en 0.
    static int contador = 0;
    // Incrementar variable contador.
    contador++;
    // Retornar el valor de contador.
    return contador;
}
```
***Salida***:
```
> 1
> 2
```

## Variables estáticas vs. Variables globales.
Mientras que las variables estáticas tienen un alcance limitado al archivo que las contiene, haciéndose accesibles solo dentro de ese archivo, las variables globales pueden ser accedidas fuera del archivo.<br>
Ejemplo:
```c
#include <stdio.h>

// Declarar variable global contador e inicializar en 0.
static int contador = 0;

int corredor();

int main() {
    printf("%d\n", corredor());
    printf("%d\n", corredor());

    return 0;
}

int corredor() {
    // Incrementar variable contador.
    contador++;
    // Retornar el valor de contador.
    return contador;
}
```
***Salida***:
```
> 1
> 2
```

## Funciones estáticas.
Por defecto, las funciones son globales en C. Si declaramos una función con `static`, el alcance de esa función se reduce al archivo que la contiene.<br>
Sintaxis:
```c
static <TIPO_FUNCION> <NOMBRE_FUNCION> ( <PARAMETRO_1>, <PARAMETRO_2>, .., <PARAMETRO_N> ) {
    // Nuestro código aquí.
}
```

Por ejemplo:
```c
static void unaFuncion() {
   printf("Soy una funcion estatica.");
}
```
***Salida***:
```
> Soy una funcion estatica.
```

## Consejos y buenas prácticas.
- **Uso de variables estáticas**: Utiliza variables estáticas cuando necesites que una variable mantenga su valor entre llamadas a la función, pero no deba ser accesible fuera del archivo. Esto es útil para mantener el estado interno de una función sin exponerlo a otras partes del programa.
- **Encapsulamiento**: Las funciones estáticas son útiles para encapsular funciones que no deberían ser accesibles fuera de un archivo, mejorando la modularidad y reduciendo las dependencias entre archivos. Esto ayuda a mantener el código más limpio y organizado.
- **Cuidado con el uso excesivo**: Evita abusar de las variables y funciones estáticas, ya que pueden dificultar la depuración y el mantenimiento del código. Un uso excesivo puede llevar a un diseño acoplado y a problemas de gestión del estado.

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Static