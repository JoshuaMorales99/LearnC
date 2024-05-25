#include <stdio.h>

void imprimirNumeros(int numeros[], int longitud);
int sumar(int unNumero, int otroNumero);

int main() {
    int misNumeros[] = {10, 20, 30, 40, 50};
    // Calcular el tamanio del array de enteros.
    int longitud = sizeof(misNumeros) / sizeof(misNumeros[0]);
    // Imprimir los numeros del array.
    imprimirNumeros(misNumeros, longitud);

    // Almacenar el resultado de la suma entre dos numeros.
    int resultado = sumar(5, 3);
    // Imprimir por consola el resultado de la suma.
    printf("\nEl resultado es: %d\n", resultado);

    return 0;
}

void imprimirNumeros(int numeros[], int longitud) {
    printf("El array contiene los siguientes numeros:\n");
    // Imprimir por consola los numeros del array.
    for(int i = 0; i < longitud; i++) {
        printf("%d\n", numeros[i]);
    }
}

int sumar(int unNumero, int otroNumero) {
    // Retornar la suma de los numeros.
    return unNumero + otroNumero;
}