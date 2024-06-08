#include <stdio.h>

int main() {
    // Declarar la variable edad e inicializarla.
    int edad = 40;
    // Declarar el puntero para edad.
    int *ptr = &edad;

    // Incrementar en 1 el valor de la edad.
    edad = edad + 1;
    // Incrementar en 1 el valor de la edad con el puntero.
    *ptr = *ptr + 1;

    // Imprimir el valor de la variable.
    printf("El valor de la edad es: %d\n", edad);
    // Imprimir la direccion de memoria de la variable.
    printf("La direccion de memoria de la variable edad es: %p\n", &edad);

    // DESREFERENCIA: Imprimir el valor de la variable con el puntero.
    printf("El valor de la edad con el puntero es: %d\n", *ptr);
    // REFERENCIA: Imprimir la direccion de memoria de la variable con el puntero.
    printf("El valor del puntero de edad es: %p\n", ptr);

    return 0;
}