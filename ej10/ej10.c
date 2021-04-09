/*
Escriba un programa que permita al usuario, introducir 3 números enteros por teclado, y que los visualice en pantalla, en el orden inverso al que fueron introducidos. EJ: Introduzca N° 1: 23Introduzca N° 2: 44Introduzca N° 3: 120Los números ingresados en orden inverso son: 1204423 Nótese que los números están separados por una tabulación.
*/

#include <stdio.h>

int main()
{

    int numero1, numero2, numero3;

    printf("ingrese el numero1: ");
    scanf("%d", &numero1);

    printf("ingrese el numero2: ");
    scanf("%d", &numero2);

    printf("ingrese el numero3: ");
    scanf("%d", &numero3);

    printf("Los numeros ingresados en orden inverso son: %d %d %d", numero3, numero2, numero1);
}