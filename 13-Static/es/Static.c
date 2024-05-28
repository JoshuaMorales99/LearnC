#include <stdio.h>

// Declarar variable global.
int contadorGlobal;

// Declarar las funciones.
int corredorLocal();
int corredorEstatico();
int corredorGlobal();

int main() {
    printf("El valor de la variable no estatica es: %d\n", corredorLocal());
    printf("El valor de la variable no estatica es: %d\n", corredorLocal());

    printf("\nEl valor de la variable estatica es: %d\n", corredorEstatico());
    printf("El valor de la variable estatica es: %d\n", corredorEstatico());

    printf("\nEl valor de la variable global es: %d\n", corredorGlobal());
    printf("El valor de la cariable global es: %d \n", corredorGlobal());

    return 0;
}

int corredorLocal() {
    // Declarar variable local contador e inicializar en 0.
    int contadorLocal = 0;
    // Incrementar variable contador.
    contadorLocal++;
    // Retornar el valor de contador.
    return contadorLocal;
}

int corredorEstatico() {
    // Declarar variable estatica contador e inicializar en 0.
    static int contadorEstatico = 0;
    // Incrementar variable contador.
    contadorEstatico++;
    // Retornar el valor de contador.
    return contadorEstatico;
}

int corredorGlobal() {
    // Incrementar variable contador.
    contadorGlobal++;
    // Retornar el valor de contador.
    return contadorGlobal;
}