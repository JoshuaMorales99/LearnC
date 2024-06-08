#include <stdio.h>

int main() {
    // Declarar un arreglo de 2 filas y 3 columnas.
    int matriz[2][3] = {{1, 4, 2}, {3, 6, 8}};
    // Cambiar el elemento de la fila 0 y columna 0.
    matriz[0][0] = 9;

    // Print the element of row 0 and column 0.
    printf("El valor es: %d\n", matriz[0][0]);

    return 0;
}