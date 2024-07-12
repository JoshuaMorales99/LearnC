#include <stdio.h>

int main() {
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