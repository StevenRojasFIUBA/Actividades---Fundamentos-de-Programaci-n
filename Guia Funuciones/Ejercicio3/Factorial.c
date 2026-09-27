#include <stdio.h>

int factorial(int numero)
{
    int resultado = numero;

    if(numero > 0)
    {
        for(int i = numero - 1; i >= 1; i--)
        {
            resultado *= i;
        }
    }
    else if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = 0;
    }

    return resultado;
}


int main()
{
    int numero;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("El factorial del numero es: %d\n", factorial(numero));

    return 0;
}