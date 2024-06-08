#include <stdio.h>

int main() {
    int edad = 19;

    // Evaluar si es menor de edad.
    if(edad < 18) {
        // Imprimir "Es menor de edad" por consola.
        printf("Es menor de edad\n");
    } else if(edad == 18) {
        // Imprimir "La edad es igual a 18" por consola.
        printf("La edad es igual a 18\n");
    } else {
        // Imprimir "Es mayor de edad" por consola.
        printf("Es mayor de edad\n");
    }
    
    return 0;
}