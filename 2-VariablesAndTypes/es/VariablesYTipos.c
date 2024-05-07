#include <stdio.h>

// Definir el tipo booleano.
#define BOOL char
#define FALSE 0
#define TRUE 1

int main() {
    // Declarar variables booleanas.
    BOOL esVerdadero = TRUE;
    BOOL esFalso = FALSE;

    // Imprimir los valores en consola.
    printf("El valor de esVerdadero es: %d\n", esVerdadero);
    printf("El valor de esFalso es: %d\n", esFalso);

    // Declarar variables enteras con signo.
    int unNumero = 4;
    int otroNumero = 0;
    
    // Cambiar el valor de la variable.
    otroNumero = 2;

    // Imprimir los valores en consola.
    printf("La suma es igual a: %d\n", unNumero + otroNumero);
    printf("La resta es igual a: %d\n", unNumero - otroNumero);
    printf("La multiplicacion es igual a: %d\n", unNumero * otroNumero);
    printf("La division es igual a: %d\n", unNumero / otroNumero);

    return 0;
}