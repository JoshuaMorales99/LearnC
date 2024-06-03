#include <stdio.h>

int main() {
    // Declarar la variable edad e inicializarla.
    int edad = 43;
    // Imprimir por consola la direccion en memoria de edad.
    printf("La direccion de memoria de edad es: %p\n", &edad);

    return 0;
}