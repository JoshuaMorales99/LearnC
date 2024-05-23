#include <stdio.h>
#include <string.h>

int main() {
    char unString[20] = "Hola ";
    char otroString[] = "mundo!";
    char stringCopiado[20];

    // Imprimir la longitud de los strings.
    printf("El tamanio de %s es: %d.\n", unString, sizeof(unString));
    printf("El tamanio de %s es: %d.\n", unString, strlen(unString));
    printf("El tamanio de %s es: %d.\n", otroString, sizeof(otroString));
    printf("El tamanio de %s es: %d.\n", otroString, strlen(otroString));

    // Comparar los strings e imprimir el resultado.
    printf("El resultado de la comparacion entre %s y %s es: %d.\n", otroString, "mundo!", strcmp(otroString, "mundo!"));
    printf("El resultado de la comparacion entre %s y %s es: %d.\n", unString, otroString, strcmp(unString, otroString));

    // Concatenar dos strings dados.
    strcat(unString, otroString);
    // Imprimir el primer string por consola.
    printf("El primer string, luego de concatenar, resulta: %s.\n", unString);
    // Imprimir el segundo string por consola.
    printf("El segundo string resulta: %s.\n", otroString);

    // Copiar el valor del segundo string al primero.
    strcpy(stringCopiado, unString);
    // Imprimir el valor del segundo string.
    printf("El valor del segundo string, luego de copiar, es: %s.\n", stringCopiado);
    // Imprimir el valor del primer string.
    printf("El valor del primer string es: %s.\n", unString);
    
    return 0;
}