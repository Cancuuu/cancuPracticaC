/*
Haga un programa que permita introducir un valor entero por teclado. Almacene
dicho número en una variable llamada valor.
Luego, incremente valor en 1 y almacene el resultado en otra variable llamada
INCREMENTO. 

Luego tomando valor ingresado, almacene en DECREMENTO el numero – 1.
Muestre en pantalla lo que se almacenó en valor, en INCREMENTO y en
DECREMENTO. 
*/

#include <stdio.h>

int main()
{
    int valor, incremento, decremento;

    printf("ingresa un valor: ");
    scanf("%d", &valor);

    incremento = valor + 1;

    decremento = valor - 1;

    printf("El incremento es: %d", incremento);
    printf("\nEl decremento es: %d\n", decremento);

    return 0;
}