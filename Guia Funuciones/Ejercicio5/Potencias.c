#include <stdio.h>

double potencia(int base, int exponente)
{
    double resultado = 1;
    //int auxiliar = base;

    if(base < 0)
    {
        base *= -1;
    }


    if(exponente > 0)
    {
        for(int i = 1; i <= exponente ; i++)
        {
            resultado *= base;
        }
    }
    else if(exponente == 0)
    {
        resultado = 1;
    }

    return resultado;
}


int main()
{
    int base;
    int exponente;

    printf("Ingrese la base: ");
    scanf("%d", &base);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    printf("%d, elevado a %d es: %.2f", base, exponente, potencia(base, exponente));

    return 0;
}