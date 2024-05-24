#include <stdio.h>

// Declarar la funcion 'miFuncion'.
void miFuncion();

int main() {
    // Llamar a la funcion 'miFuncion' varias veces.
    miFuncion();
    miFuncion();
    miFuncion();

    return 0;
}

// Definir la funcion 'miFuncion'.
void miFuncion() {
    // Imprimir un mensaje por consola.
    printf("Me acaban de ejecutar!\n");
}