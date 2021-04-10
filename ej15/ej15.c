/*

Escribir un programa que permita ingresar una X cantidad de días,y que como resultado, muestre en pantalla, la cantidad de minutos y segundos que hay en esa X cantidad de días.

*/

#include <stdio.h>

int main()
{
    //declarar las variables

    const int horasPorDia = 24;
    const int minutosPorHora = 60;
    const int segundosPorMinuto = 60;

    int dias, minutos, segundos;

    printf("ingresa una cantidad de dias: ");
    scanf("%d", &dias);

    minutos = dias * horasPorDia * minutosPorHora;
    segundos = minutos * segundosPorMinuto;

    printf(" Para %d hay %d minutos %d segundos ", dias, minutos, segundos);

    return 0;
}

