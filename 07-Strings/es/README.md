# Strings 🔤
## Definir Strings.
Los **Strings** son arreglos de caracteres que se utilizan para almacenar texto o un conjunto de caracteres. Un ejemplo simple es `"Hola Mundo!"`, el cual es una cadena de caracteres.<br>
A diferencia de muchos otros lenguajes, C no tiene un **tipo String** para crear fácilmente variables de cadena. En su lugar, se usa el tipo `char` y se crea una **matriz** de caracteres para hacer una cadena en dicho lenguaje.
```c
char nombre[] = "John Smith";
```
> Hay que tener en cuenta que se deben utilizar las comillas dobles (`""`)

La notación de corchetes vacíos (`[]`) le dice al compilador que calcule el tamaño del arreglo automáticamente. De hecho, esto es lo mismo que declararlo explícitamente, añadiendo una longitud al string:
```c
char nombre[11] = "John Smith";
```
> La razón por la cual debemos añadir un carácter extra a la longitud del string, aunque ``"John Smith"`` tenga exactamente 10 caracteres de largo, se debe a que la terminación de los strings se indica con un carácter especial `\0` al final del mismo.<br>
> El `\0` es conocido como el **carácter de terminación nula**, e indica el final de la cadena de caracteres. Esto es necesario ya que el programa no sabe la longitud del string, solo el compilador lo sabe según el código.

**Otra forma de crear Strings**.<br>
En los ejemplos anteriores, se usaron **literales de cadena** para crear una cadena variable. Esta es la forma más fácil de crear una cadena en C. La otra forma es utilizando un conjunto de caracteres.<br>
Por ejemplo:
```c
char nombre[] = {'J', 'o', 'h', 'n', ' ', 'S', 'm', 'i', 't', 'h', '\0'};
```

## `printf` y los Strings.
Para imprimir una cadena de caracteres por consola, se puede usar la función `printf` junto con el especificador de formato `%s`, de la siguiente manera:
```c
char nombre[11] = "John Smith";
int edad = 27;

// Imprimir un mensaje por consola.
printf("El Sr. %s tiene %d anios", nombre, edad);
```
***Salida***:
```
> El Sr. John Smith tiene 27 anios
```

## Acceso a los Strings.
Dado que los Strings son **matrices** en C, se puede acceder a una cadena de caracteres haciendo referencia a su número de índice entre corchetes `[]`.<br>
En este ejemplo, se imprime el primer carácter (`[0]`) de la variable `saludo`:
```c
char saludo[] = "Hola Mundo!";

// Imprimir el primer caracter de la cadena de caracteres.
printf("El primer caracter es: %c", saludo[0]);
```
***Salida***:
```
> El primer caracter es: H
```
> Hay que tener en cuenta que se debe utilizar el especificador de formato `%c` para imprimir un **solo carácter**.

## Modificar Strings.
Para cambiar el valor de un elemento específico en un string, se debe realizar indicando el número de índice y usando comillas simples (`''`)<br>
Por ejemplo:
```c
char saludo[] = "Jola Mundo!";                                              // saludo[0] es: 'J'.
// Cambiar el primer elemento del arreglo.
saludo[0] = 'H';                                                            // Ahora saludo[0] es: 'H'.

// Imprimir el primer elemento del arreglo.
printf("El primer caracter es: %c", saludo[0]);
```
***Salida***:
```
> El primer caracter es: H
```

## Caracteres especiales.
Debido a que los strings deben escribirse entre comillas dobles (`""`), C malinterpretará ciertas secuencias y generará un error. La solución a esto es utilizar el cáracter de **escape de barra invertida** (`\`) que convierte los caracteres especiales en caracteres de cadena.
```
- Carácter de escape: \'        ->      Resulta: '
- Carácter de escape: \"        ->      Resulta: "
- Carácter de escape: \\        ->      Resulta: \
```

Otros caracteres de escape populares en C son:
```
- Carácter de escape: \n        ->      Resulta: Nueva línea
- Carácter de escape: \t        ->      Resulta: Tabulación
- Carácter de escape: \0        ->      Resulta: Nulo
```

## Bibliografía.
- [Learn-C: Strings](https://www.learn-c.org/es/Strings)
- [W3schools: Strings](https://www.w3schools.com/c/c_strings.php)
- [W3schools: Special Characters](https://www.w3schools.com/c/c_strings_esc.php)