#include <stdio.h>
#include <stdlib.h>
//#include <stdbool.h>
//#include "tdas/list.h"
//#include <string.h>
int main(void)
{
    char opcion;
    do
    {
        puts("NOMBRE DEL JUEGO"); // hay que decidir un nombre del juego...

        puts("(1) Jugar");
        puts("(2) Cargar Partida");
        puts("(3) ¿Como Jugar?");
        puts("(4) Salir");

        printf("Ingrese su opcion: ");
        scanf_s("%c", opcion);
        printf("%c", opcion);
        switch (opcion)
        {
            case '1':
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                puts("Salendo del juego...");
                break;
            default:
                puts("Por favor ingresar una opcion valida");
                break;
        }

    } while (opcion != '4');
    return 0;
}