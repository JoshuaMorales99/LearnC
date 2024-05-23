#include <stdio.h>

int main() {
    int i = 0;

    printf("Los numeros del 0 al 3 son:\n");
    // Imprimir por consola los numeros del 0 al 3.
    while(i < 10) {
        // Verificar si el valor es igual a 4.
        if(i == 4) {
            // Detener y salir del bucle.
            break;
        }
        // Imprimir por consola el valor numerico.
        printf("%d\n", i);
        // Incrementar en 1 el valor de i.
        i++;
    }

    int j = 0;

    printf("\nLos numeros del 0 al 9, excepto el 4, son:\n");
    // Imprimir por consola los numeros del 0 al 9, excepto el 4.
    while(j < 10) {
        // Verificar si el valor es igual a 4.
        if(j == 4) {
            // Incrementar en 1 el valor de i.
            j++;
            // Interrumpir la iteracion.
            continue;
        }
        // Imprimir por consola el valor numerico.
        printf("%d\n", j);
        // Incrementar en 1 el valor de i.
        j++;
    }
}