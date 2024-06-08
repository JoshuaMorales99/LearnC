# Punteros 🔐
## ¿Qué es un puntero?
Los punteros son variables que juegan un papel crucial en el lenguaje de programación C. Se utilizan por varias razones, tales como:
- Strings.
- Asignación dinámica de memoria.
- Envío de argumentos de función por referencia.
- Creación de estructuras de datos complejas.
- Punteros a funciones.
- Construcción de estructuras de datos especiales (Por ejemplo: Árboles, Tries, etc.)
- Entre otras.

Un puntero es una variable que contiene una **dirección de memoria** que apunta a un valor, en lugar de contener dicho valor real en sí.<br>
La memoria de la computadora es un almacén secuencial de datos, donde un puntero apunta a una parte específica de la memoria. Se puede utilizar de tal manera que los punteros apunten a una gran cantidad de memoria, dependiendo de cuánto querramos leer a partir de ese momento.

## Creación de punteros.
Anteriormente, vimos que podemos obtener la **dirección de memoria** de una variable con el operador de referencia `&`.
```c
// Declarar la variable edad e inicializarla.
int edad = 40;

// Imprimir el valor de la variable.
printf("El valor de la edad es: %d\n", edad);
// Imprimir la direccion de memoria de la variable.
printf("La direccion de memoria de la variable edad es: %p\n", &edad);
```
***Salida***:
```
> El valor de la edad es: 40
> La direccion de memoria de la variable edad es: 0x7ffe5367e044
```

Una variable puntero apunta a un tipo de datos (como `int`) del mismo tipo, y se crea con el operador `*`. Asignaremos al puntero la dirección de la variable con la que se está trabajando.
```c
// Declarar la variable edad e inicializarla.
int edad = 40;
// Declarar el puntero para edad e inicializarla.
int *ptr = &edad;

// Imprimir el valor de la variable.
printf("El valor de la edad es: %d\n", edad);
// Imprimir la direccion de memoria de la variable.
printf("La direccion de memoria de la variable edad es: %p\n", &edad);
// Imprimir la direccion de memoria de la variable con el puntero.
printf("El valor del puntero de edad es: %p\n", ptr);
```
***Salida***:
```
> El valor de la edad es: 40
> La direccion de memoria de la variable edad es: 0x7ffe5367e044
> El valor del puntero de edad es: 0x7ffe5367e044
```
> Explicación del ejemplo:
> - Creamos una variable puntero con el nombre `ptr`, que **apunta a** una variable `int` (`edad`) Es importante que el tipo de puntero coincida con el tipo de la variable con la que se está trabajando (en nuestro caso `int`)
> - Utilizamos el operador `&` para almacenar la dirección de memoria de la variable `edad` y asignarla al puntero.
> - Finalmente, `ptr` contiene el valor de la dirección de memoria de `edad`.

## Strings como cadenas.
Anteriormente ya hemos hablado sobre las cadenas, pero ahora podemos profundizar un poco más y entender qué son realmente. Veamos lo siguiente:
```c
char *nombre = "John";
```
Esta porción de código hace tres cosas:
1. Asigna una variable local (stack) llamada `nombre`, que es un puntero a un solo carácter.
2. Hace que la cadena `"John"` aparezca en algún lugar de la memoria del programa (luego de que se compile y ejecute).
3. Inicializa el argumento `nombre` para que apunte a dónde reside el carácter `J` (Seguido por el resto de la cadena en la memoria).

Si intentamos acceder a la variable `nombre` como un array, obtendremos el valor ordinal del carácter `J`, ya que la variable en realidad apunta exactamente al principio de la cadena `nombre`.<br>
Como sabemos que la memoria es secuencial, podemos suponer que si avanzamos en esta hasta el siguiente carácter, recibiremos la siguiente letra de la cadena, hasta el final de la cadena (marcada con el operador nulo `\0`)

## Desreferenciación.
La desreferenciación es la acción de hacer referencia a donde apunta el puntero, en lugar de a la dirección de memoria. En anteriores módulos, ya utilizábamos la desreferenciación en los arreglos, donde el operador de corchetes, por ejemplo `[0]`, accede al primer elemento de la matriz. Dado que los arreglos son en realidad punteros, acceder al primer elemento es lo mismo que desreferenciar un puntero mediante el operador `*`.<br>
Por ejemplo:
```c
// Declarar la variable edad e inicializarla.
int edad = 40;
// Declarar el puntero para edad e inicializarla.
int *ptr = &edad;

// Imprimir el valor de la variable.
printf("El valor de la edad es: %d\n", edad);

// REFERENCIA: Imprimir la direccion de memoria de la variable con el puntero.
printf("El valor del puntero de edad es: %p\n", ptr);
// DESREFERENCIA: Imprimir el valor de la variable con el puntero.
printf("El valor de la edad con el puntero es: %d\n", *ptr);
```
***Salida***:
```
> El valor de la edad es: 40
> El valor del puntero de edad es: 0x7ffe5367e044
> El valor de la edad con el puntero es: 40
```

> **Notas sobre el operador `*`**.<br>
> El operador `*` puede ser confuso aquí, ya que hace dos cosas diferentes en el código:
> - Cuando se usa en la declaración `int *ptr`, se crea una variable de puntero.
> - Cuando no se usa en la declaración, actúa como un operador de desreferenciación.

A continuación, utilizaremos el operador de desreferenciación para cambiar el contenido de la variable.
```c
// Declarar la variable edad e inicializarla.
int edad = 40;
// Declarar el puntero para edad e inicializarla.
int *ptr = &edad;

// Incrementar en 1 el valor de la edad.
edad = edad + 1;
// Incrementar en 1 el valor de la edad con el puntero.
*ptr = *ptr + 1;

// Imprimir el valor de la variable.
printf("El valor de la edad es: %d\n", edad);
// Imprimir el valor de la variable con el puntero.
printf("El valor de la edad con el puntero es: %d\n", *ptr);
```
***Salida***:
```
> El valor de la edad es: 42
> El valor de la edad con el puntero es: 42
```

## Tipos de punteros específicos.
### Punteros nulos.
Un puntero nulo es un puntero que no apunta a ninguna dirección de memoria válida. Se puede asignar un puntero a `NULL` para indicar que no apunta a nada.
```c
int *ptr = NULL;
```

### Punteros void.
Un puntero `void` es un puntero que puede apuntar a cualquier tipo de datos, pero no puede ser desreferenciado directamente. Para usar un puntero `void`, primero debe ser convertido a otro tipo de puntero.
```c
// Declarar la variable edad e inicializarla.
int edad = 40;
// Declarar el puntero.
void *ptr;
// Asignar la direccion de memoria de edad al puntero.
ptr = &edad;

// DESREFERENCIA: Imprimir el valor de la variable con el puntero.
printf("El valor de la edad es: %d\n", *(int*)ptr);
```
***Salida***:
```
> El valor de la edad es: 40
```

### Punteros a punteros.
Un puntero a puntero en C se utiliza cuando queremos almacenar la dirección de otro puntero.
- El primer puntero se utiliza para almacenar la dirección de la variable.
- El segundo puntero se utiliza para almacenar la dirección del primer puntero.
Por tal motivo, también se lo conoce como **punteros dobles**.
```c
// Declarar la variable edad e inicializarla.
int edad = 40;
// Declarar el puntero para edad e inicializarla.
int *ptr = &edad;
// Declarar el puntero para el puntero de edad e inicializarla.
int **ptr2 = &ptr;

// Imprimir la direccion de memoria de la variable con el puntero.
printf("El valor del puntero de edad es: %p\n", *ptr2);
// Imprimir el valor de la variable con el puntero del puntero de edad.
printf("El valor de la edad es: %d\n", **ptr2);
```
***Salida***:
```
> El valor del puntero de edad es: 0x7ffe5367e044
> El valor de la edad es: 40
```
Podemos utilizarlos para cambiar los valores de los punteros normales o crear un arreglo 2D de tamaño variable.
> En C, un puntero doble se comporta de manera similar a un puntero normal de C. Por lo tanto, el tamaño de la variable de doble puntero siempre es igual a los punteros normales.

**¿Cuándo se utilizan?**<br>
Los principales usos de punteros dobles en C son:
- Asignación de memoria dinámica de arreglos multidimensionales.
- Almacenamiento de datos de varios niveles, como párrafos de un documento de texto, oraciones y semántica de palabras.
- Manipulación directa de la dirección de los nodos en estructuras de datos.
- Argumentos de función para manipular la dirección almacenada en el puntero local.

## Error común de puntero no inicializado.
Un puntero no inicializado contiene una dirección de memoria aleatoria, lo que puede causar comportamientos indefinidos.
```c
// Declarar el puntero sin inicializacion.
int *ptr;
// Imprimir el valor del puntero.
printf("El valor del puntero es: %p\n", ptr);           // Valor indefinido
```

## Notas sobre los punteros.
Los punteros son una de las características que hacen que C se destaque de otros lenguajes de programación, como Python y Java. Esto se debe a que nos permiten manipular los datos de la memoria de la computadora, reduciendo el código y mejorando el rendimiento. Si estamos familiarizados con estructuras de datos como listas, árboles y gráficos, debemos saber que los punteros son especialmente útiles para implementarlos. Además, los punteros son esenciales cuando se trabaja con archivos y administración de memoria.<br>

**¡Cuidado!**<br>
Los punteros deben manejarse con cuidado, ya que es posible dañar los datos almacenados en otras direcciones de memoria.

## Bibliografía.
- [Learn-C: Pointers](https://www.learn-c.org/en/Pointers)
- [W3schools: Pointers](https://www.w3schools.com/c/c_pointers.php)
- [GeeksForGeeks: Pointers](https://www.geeksforgeeks.org/c-pointers/?ref=lbp)
- [GeeksForGeeks: Pointer to Pointer](https://www.geeksforgeeks.org/c-pointer-to-pointer-double-pointer/?ref=lbp)