# Arreglos 📰
## ¿Qué son los arreglos?
Los arreglos son variables especiales que se utilicen para almacenar varios valores en una sola variable, organizado con un índice. Los arreglos son definidos usando la siguiente sintaxis:
```
<TIPO_VARIABLE> <IDENTIFICADOR> [ <TAMAÑO_ARREGLO> ] ;
```

Por ejemplo:
```c
// PALABRA RESERVADA: int.  -   IDENTIFICADOR: numeros  -   TAMAÑO ARREGLO: 10.
int numeros[10];
```
Para crear una matriz, se debe definir el tipo de datos (Ejemplo: `int`) y especificar el nombre del arreglo seguido de **corchetes `[]`**.
> Un dato no menor es que todo arreglo en C comienza en 0. Esto significa que si definimos un arreglo de tamaño 10, entonces se definen las celdas de 0 a 9 (inclusive)

## Inicializar un arreglo.
Para inicializarle valores, se puede realizar de dos formas:
```
<TIPO_VARIABLE> <IDENTIFICADOR> [ <TAMAÑO_ARREGLO> ] = <INICIALIZACION> ;
```
- Dato a dato: Veamos un ejemplo.
    ```c
    int numeros[10];

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;
    numeros[5] = 60;
    numeros[6] = 70;
    numeros[7] = 80;
    numeros[8] = 90;
    numeros[9] = 100;
    ```
- Usar una lista separada por comas y entre **llaves `{}`**: Veamos un ejemplo.
    ```c
    int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    ```

Con esto, hemos creado una variable que contiene una matriz de diez números enteros.
> Los arreglos pueden tener un solo tipo de variable, ya que son implementados como una secuencia de valores en la memoria de la computadora.

## Acceder a los elementos de un arreglo.
Para acceder a un elemento de un arreglo, se debe consultar su índice. Para eso, se debe tener en cuenta que el primer elemento del mismo comienzan en 0 (`[0]`), el segundo elemento es el 1 (`[1]`), el tercer elemento es el 2 (`[2]`), etc.
```c
// Declarar arreglo.
int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

// Imprimir el primer elemento del arreglo.
printf("El valor es: %d", numeros[0]);
```
***Salida***:
```
> El valor es: 10
```

## Cambiar un elemento del arreglo.
Para cambiar el valor de un elemento específico, se debe realizar indicando el número de índice de la siguiente manera:
```c
// Declarar arreglo.
int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};            // numeros[0] es: 10.
// Cambiar el primer elemento del arreglo.
numeros[0] = 15;                                                        // Ahora numeros[0] es: 15.

// Imprimir el primer elemento del arreglo.
printf("El valor es: %d", numeros[0]);
```
***Salida***:
```
> El valor es: 15
```

## Bibliografía.
- Learn-C: https://www.learn-c.org/es/Arrays
- W3schools: https://www.w3schools.com/c/c_arrays.php