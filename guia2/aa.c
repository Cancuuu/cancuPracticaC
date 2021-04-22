
#include <stdio.h>

int main()
{

    int numero;

    printf("ingresa inun numero:");
    scanf("%d", &numero);

    if (numero > 100)
    {
        printf("el numero es mayor a 100");
    }
    else if (numero == 100)
    {
        printf("el numero es igual a 100");
    }
    else
    {
        printf("el numero es menor que 100");
    };

    return 0;
}