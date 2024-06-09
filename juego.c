#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
//#include "tdas/list.h"
//#include <string.h>

void comoJugar() {
    printf("\nprobando que funcione bien todo...\n");
}
int main(void)
{
    char opcion;
    do
    {
        printf("NOMBRE DEL JUEGO\n\n"); // hay que decidir un nombre del juego...

        printf("(1) Jugar\n");
        printf("(2) Cargar Partida\n");
        printf("(3) ¿Como Jugar?\n");
        printf("(4) Salir\n");

        printf("Ingrese su opcion: ");
        scanf(" %c", &opcion);
        printf("\n");

        switch (opcion)
        {
            case '1':
                printf("elegiste la 1\n\n");
                //jugar();
                break;
            case '2':
                printf("elegiste 2\n\n");
                //cargarPartida();
                break;
            case '3':
                comoJugar();
                printf("\n");
                break;
            case '4':
                printf("Saliendo del juego...\n");
                break;
            default:
                printf("Por favor ingresar una opcion valida\n");
                break;
        }

    } while (opcion != '4');

    return 0;
}