#include <stdio.h>

int main() {
    int dia = 7;

    // Evaluar el dia.
    switch (dia) {
        // Bloque de codigo para la situacion donde dia es 1.
        case 1:
            printf("Lunes\n");
        break;

        // Bloque de codigo para la situacion donde dia es 2.
        case 2:
            printf("Martes\n");
        break;
        
        // Bloque de codigo para la situacion donde dia es 3.
        case 3:
            printf("Miercoles\n");
        break;

        // Bloque de codigo para la situacion donde dia es 4.
        case 4:
            printf("Jueves\n");
        break;

        // Bloque de codigo para la situacion donde dia es 5.
        case 5:
            printf("Viernes\n");
        break;

        // Bloque de codigo para la situacion donde no haya coincidencia con las otros casos.
        default:
            printf("Es fin de semana!\n");
    }

    return 0;
}