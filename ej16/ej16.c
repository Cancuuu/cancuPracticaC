/*

Hacer un programa que permita donde se le solicite que ingrese las iniciales de su nombre. Deben ser 3 iniciales y se deben ingresar de a una a la vez.Luego, se pide mostrar en pantalla las tres letras (iniciales) de su nombre, separadas por un (-).Ej: Ingrese 1er Inicial: GIngrese 2da Inicial: AIngrese 3er Inicial: AUd. Ingreso: G-A-A

*/

#include <stdio.h>

int main()
{
    char i1, i2, i3;

    printf("Ingresa la inicial 1: ");
    scanf(" %c", &i1);

    printf("Ingresa la inicial 2: ");
    scanf(" %c", &i2);

    printf("Ingresa la inicial 3: ");
    scanf(" %c", &i3);

    printf("%c - %c - %c \n", i1, i2, i3);

    return 0;
}