// Define constantes, macros, tipos y declara funciones de entrada y salida.
#include <stdio.h>
// Define booleanos.
#include <stdbool.h>

// Definir manualmente el tipo booleano.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declarar variables booleanas.
    bool esVerdadero = true;
    bool esFalso = false;

    // Declarar variables booleanas.
    BOOL miVerdadero = TRUE;
    BOOL miFalso = FALSE;

    // Imprimir los valores en consola.
    printf("El valor de esVerdadero es: %d\n", esVerdadero);
    printf("El valor de esFalso es: %d\n", esFalso);
    printf("El valor de miVerdadero es: %d\n", miVerdadero);
    printf("El valor de miFalso es: %d\n", miFalso);

    return 0;
}