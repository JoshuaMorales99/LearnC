#include <stdio.h>

int main() {
    // Declarar arreglo.
    int numeros[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // Cambiar el primer elemento del arreglo.
    numeros[0] = 15;
    // Almacenar el largo del arreglo.
    int largo = sizeof(numeros) / sizeof(numeros[0]);

    // Imprimir el primer elemento del arreglo.
    printf("El valor del primer elemento del arreglo es: %d\n", numeros[0]);
    // Imprimir el tamanio en Bytes del arreglo dado.
    printf("El arreglo numeros tiene un tamanio de: %lu Bytes\n", sizeof(numeros));
    // Imprimir el largo del arreglo dado.
    printf("El arreglo numeros tiene un largo de: %d\n", largo);

    return 0;
}