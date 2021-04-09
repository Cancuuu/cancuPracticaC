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
    int valor;

    printf("ingresa un valor: ");
    scanf("%d", &valor);
    printf("El incremento es: %d \nEl decremento es: %d", valor + 1, valor - 1);

    return 0;
}