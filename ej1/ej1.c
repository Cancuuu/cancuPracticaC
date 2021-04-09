#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor1, valor2, multiplicacion, division;

    printf("Ingresa el primer valor: ");
    scanf("%f", &valor1);

    printf("Ingresa el segundo valor: ");
    scanf("%f", &valor2);

    multiplicacion = valor1 * valor2;
    division = valor1 / valor2;

    printf("\n El resultado de la multiplicacion es: %.2f", multiplicacion);

    printf("\n El resultado de la divsion es: %.2f \n", division);

    return 0;
}
