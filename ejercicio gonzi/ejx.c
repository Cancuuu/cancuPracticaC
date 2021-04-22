
#include <stdio.h>

int main()
{
    int valor1, valor2, aux;

    printf("ingresa valor1: ");
    scanf("%d", &valor1);

    printf("ingresa valor2: ");
    scanf("%d", &valor2);

    printf("el valor1 es: %d", valor1);
    printf("el valor2 es: %d", valor2);

    aux = valor1;
    valor1 = valor2;
    valor2 = aux;

    return 0;
}