

/*

Escriba un programa que permita ingresar un número por teclado y muestre en pantalla, ese número elevado al cuadrado y el mismo número elevado al cubo.

*/

#include <stdio.h>

int main()
{
    int num, cuadrado, cubo;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    cuadrado = num * num;
    cubo = num * num * num;

    printf("el cuadrado de num es %d y el cubo es %d", cuadrado, cubo);

    return 0;
}