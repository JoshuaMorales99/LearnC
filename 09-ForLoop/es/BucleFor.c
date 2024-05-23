#include <stdio.h>

int main() {
    printf("Los numeros pares del 0 al 10 son:\n");
    // Imprimir los numeros pares del 0 al 10.
    for (int i = 0; i <= 10; i = i + 2) {
        printf("%d\n", i);
    }

    int numeros[] = {25, 50, 75, 100};

    printf("\nLos elementos del arreglo \'numeros\' son:\n");
    // Imprimir por consola todos los elementos del arreglo.
    for (int i = 0; i < 4; i++) {
        printf("%d\n", numeros[i]);
    }

    int matriz[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("\nLos elementos del arreglo \'matriz\' son:\n");
    // Bucle externo que recorre las filas de la matriz.
    for (int i = 0; i < 2; i++) {
        // Bucle interno que recorre las columnas de la matriz.
        for (int j = 0; j < 3; j++) {
            // Imprimir el elemento actual de la matriz.
            printf("%d ", matriz[i][j]);
        }
        // Imprimir un salto de línea después de imprimir todos los elementos de una fila.
        printf("\n");
    }
}