#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
} tipoDato;

void hola()
{
    printf("hola :) ");
}

int main(void)
{
    tipoDato dato;
    dato.data = 13;
    printf("hola\n");
    int a = 1;
    int b = 4;
    printf("%d", a + b);
    printf("ñ\n");

    printf("%i", dato.data);
    printf("odio esto\n");
    printf(a);

    hola();
    return 0;
}