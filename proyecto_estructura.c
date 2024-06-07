#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int data;
} tipoDato;

int main(void)
{
    tipoDato dato;
    dato.data = 13;
    printf("hola\n");
    int a = 1;
    int b = 4;
    printf("%d", a + b);
    printf("odio esto\n");

    printf(dato.data);
    return 0;
}