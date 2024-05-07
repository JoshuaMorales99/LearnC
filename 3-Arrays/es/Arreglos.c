#include <stdio.h>

int main() {
    // Declarar arreglo.
    int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // Cambiar el primer elemento del arreglo.
    numeros[0] = 15;

    // Imprimir el primer elemento del arreglo.
    printf("El primer elemento del array es igual a: %d", numeros[0]);

    return 0;
}