

#include <stdio.h>

/*
    
para usar la libreria math te
*/

#include <math.h>

int main()
{
    int num, cuadrado, cubo;

    printf("Ingresa un numero: ");
    scanf("%d", &num);

    cuadrado = pow(num, 2.0);
    cubo = pow(num, 3.0);

    printf("el cuadrado de num es %d y el cubo es %d", cuadrado, cubo);

    return 0;
}