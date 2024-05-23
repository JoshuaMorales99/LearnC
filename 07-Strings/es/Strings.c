#include <stdio.h>

int main() {
    char unaPersona[] = "John Smith";
    char otraPersona[11] = "John Smith";
    char otraPersonaMas[] = {'J', 'o', 'h', 'n', ' ', 'S', 'm', 'i', 't', 'h', '\0'};
    int edad = 27;

    // Imprimir la edad de las distintas personas.
    printf("El Sr. %s tiene %d anios.\n", unaPersona, edad);
    printf("El Sr. %s tiene %d anios.\n", otraPersona, edad);
    printf("El Sr. %s tiene %d anios.\n", otraPersonaMas, edad);

    char unString[20] = "Jola";

    // Cambiar el primer elemento del arreglo.
    unString[0] = 'H';
    // Imprimir el primer caracter de la cadena de caracteres.
    printf("El primer caracter de %s es %c.\n", unString, unString[0]);

    return 0;
}