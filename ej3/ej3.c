/*

Haga un programa que permita dividir dos valores realesy muestre en pantalla, 
el resultado de la división y el resto de dicha operación. (Ej. 4/2 = 2 y el resto es 0)

*/

#include <stdio.h>

int main()
{
    float valor1, valor2, division, resto;

    printf("ingrese el valor1: ");
    scanf("%f", &valor1);

    printf("ingrese el valor2: ");
    scanf("%f", &valor2);

    division = valor1 / valor2;
    resto = (int)valor1 % (int)valor2;

    printf("%.2f/%.2f = %.2f y el resto es %.0f", valor1, valor2, division, resto);

    return 0;
}