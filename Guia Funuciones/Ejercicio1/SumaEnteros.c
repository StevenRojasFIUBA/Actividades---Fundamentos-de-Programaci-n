#include <stdio.h>

int suma_n(int numero)
{
    int total = 0;

    for(int i = 0; i <= numero; i++)
    {
        total += i;
    }

    return total;
}


int main()
{
    int valor, resultado;

    printf("Ingrese un numero N: ");
    scanf("%d", &valor);

    resultado = suma_n(valor);

    printf("La suma de los numeros entre 0 y N es: %d\n", resultado);

    return 0;
}