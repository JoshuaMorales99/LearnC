# Funciones de string 🔤
## Funciones de String.
C también tiene muchas funciones de string útiles que se pueden usar para realizar ciertas operaciones en los strings. Para usarlos, se debe incluir el archivo `<string.h>` en el programa.
```c
#include <string.h>
```

## Longitud de Strings.
Para obtener la longitud de un string, podemos usar la función `strlen` que se encuentra definida en `<string.h>`. Veamos un ejemplo:
```c
char abecedario[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Imprimir la longitud del arreglo.
printf("El tamanio del abecedario es: %d", strlen(abecedario));
```
***Salida***:
```
> El tamanio del abecedario es: 26
```

Otra forma es utilizando el operador `sizeof`, aunque es importante entender la diferencia:
```c
char abecedario[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

// Imprimir la longitud del arreglo.
printf("El tamanio del abecedario es: %d", sizeof(abecedario));
```
***Salida***:
```
> El tamanio del abecedario es: 27
```

> Tener en cuenta que la función `strlen` devuelve la longitud del string sin incluir el carácter nulo `\0`, mientras que `sizeof` devuelve el tamaño total del arreglo incluyendo el carácter nulo. Además, `sizeof` devuelve el tamaño en bytes del arreglo, no la longitud del string.
>
> Ejemplo con un arreglo de tamaño fijo:
> ```c
> char abecedario[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
> 
> // Imprimir la longitud del arreglo.
> printf("El tamanio del abecedario es: %d", sizeof(abecedario));
> ```
> ***Salida***:
> ```
> > El tamanio del abecedario es: 50
> ```

## Comparar Strings.
La función `strcmp` compara dos strings, devolviendo 0 si son iguales, o un número distinto de 0 si son diferentes. Veamos un ejemplo:
```c
char nombre[] = "Joe";
char otroNombre[] = "Leo";

// Comparar los nombres e imprimir el resultado.
printf("El resultado de la comparacion es: %d", strcmp(nombre, "Joe"));

// Comparar los nombres e imprimir el resultado.
printf("El resultado de la comparacion es: %d", strcmp(otroNombre, "Joe"));
```
***Salida***:
```
> El resultado de la comparacion es: 0
> El resultado de la comparacion es: 1
```
> `strcmp` compara los strings carácter por carácter hasta encontrar una diferencia o llegar al final.

También existe otra función `strncmp`, que compara los primeros n caracteres de dos strings: Veamos un ejemplo:
```c
char nombre[] = "Joe";
char otroNombre[] = "Leo";

// Comparar los 3 primeros caracteres de los nombres e imprimir el resultado.
printf("El resultado de la comparacion es: %d", strncmp(nombre, "Joe", 3));

// Comparar los 3 primeros caracteres de los nombres e imprimir el resultado.
printf("El resultado de la comparacion es: %d", strncmp(otroNombre, "Joe", 3));
```
***Salida***:
```
> El resultado de la comparacion es: 0
> El resultado de la comparacion es: 2
```
> `strncmp` compara los primeros n caracteres de los strings especificados.

### Concatenar Strings.
Para concatenar el valor de un string con otro, podemos utilizar la funcion `strcat`. Esta función toma el valor del segundo string y lo añade al final del primer string. Veamos un ejemplo:
```c
char nombre[50] = "John ";                                                      // nombre es: "John ".
char apellido[] = "Smith";

// Concatenar nombre y apellido.
strcat(nombre, apellido);                                                       // Ahora nombre es: "John Smith".

// Imprimir el nombre por consola.
printf("El nombre es: %s", nombre);
```
***Salida***:
```
> El nombre es: John Smith
```
> Asegúrate de que el tamaño de `nombre` sea lo suficientemente grande como para almacenar el resultado de la concatenación.

También existe la función `strncat`, que añade los primeros n caracteres del segundo string al primero. Veamos un ejemplo:
```c
char nombre[50] = "John ";                                                      // nombre es: "John ".
char apellido[] = "Smith";

// Concatenar nombre y apellido.
strncat(nombre, apellido, 5);                                                   // Ahora nombre es: "John Smith".

// Imprimir el nombre por consola.
printf("El nombre es: %s", nombre);
```
***Salida***:
```
> El nombre es: John Smith
```

### Copiar Strings.
Para copiar el valor de una cadena de caracteres a otra, podemos utilizar la función: `strcpy`. Esta función toma el valor del segundo string y lo copia en el primero. Veamos un ejemplo.
```c
char unString[20] = "Hola mundo!";
char otroString[20] = "Chau mundo!";                                            // otroString es: "Chau mundo!".

// Copiar el valor del segundo string al primero.
strcpy(otroString, unString);                                                   // Ahora otroString es: "Hola mundo!".

// Imprimir el valor del segundo string.
printf("El valor del segundo string es: %s", otroString);
```
***Salida***:
```
> El valor del segundo string es: Hola mundo!
```
> Asegúrate de que el tamaño de `otroString` sea lo suficientemente grande como para almacenar el resultado de la copia. Esta función sobrescribe el valor del primer string.

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Strings
- W3schools: https://www.w3schools.com/c/c_strings_functions.php