#include <stdio.h>

// Definicion de Euler usando un valor.
#define EULER 2.7182818284
// Definicion de PI usando una expresion.
#define PI (22.0 / 7.0)

int main() {
    // Declarar constante entera.
    const int CONSTANTE_ENTERA = 10;
    // Declarar constante flotante.
    const float CONSTANTE_FLOTANTE = 15.66;
    // Declarar constante caracter.
    const char CONSTANTE_CARACTER = 'a';

    // Imprimir los valores por consola.
    printf("El valor de CONSTANTE_ENTERA es: %d\n", CONSTANTE_ENTERA);
    printf("El valor de CONSTANTE_FLOTANTE es: %f\n", CONSTANTE_FLOTANTE);
    printf("El valor de CONSTANTE_CARACTER es: %c\n", CONSTANTE_CARACTER);
    printf("El valor de EULER es: %f\n", EULER);
    printf("El valor de PI es: %f\n", PI);

    return 0;
}