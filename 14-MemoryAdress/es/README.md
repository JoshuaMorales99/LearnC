# Dirección de Memoria 🔐
## ¿Qué es la dirección de memoria?
Una dirección de memoria es una ubicación en la memoria donde un programa informático o dispositivo de hardware accede y/o almacena datos para su posterior uso. Cuando se crea una variable en C, se le asigna una dirección de memoria, que es el lugar donde se almacenará el valor de la variable en el equipo.<br>
Para acceder a esta dirección, se utiliza el operador de referencia `&`, que devuelve la ubicación donde se almacena la variable.<br>
Veamos un ejemplo.
```c
// Declarar la variable edad e inicializarla.
int edad = 43;
// Imprimir por consola la direccion en memoria de edad.
printf("La direccion de memoria de edad es: %p\n", &edad);
```
***Salida***:
```
> La dirección de memoria de edad es: 0x7ffe5367e044
```
> La dirección de memoria se presenta en **hexadecimal** (0x...) y puede variar cada vez que se ejecuta el programa, ya que depende de dónde se almacena la variable en la computadora.<br>
> A menudo, se utiliza el término puntero para referirse a una variable que almacena la dirección de memoria de otra variable. Para imprimir estos valores de puntero, se usa el especificador de formato `%p`.

## ¿Por qué es útil conocer la dirección de la memoria?
Los punteros son importantes en C porque nos permiten manipular directamente los datos en la memoria de la computadora. Esto puede reducir la cantidad de código necesario y mejorar el rendimiento del programa. Con los punteros, podemos crear estructuras de datos complejas como listas enlazadas, árboles y gráficos, y también manejar eficientemente arrays y buffers.

## Bibliografía.
- W3schools: https://www.w3schools.com/c/c_memory_address.php