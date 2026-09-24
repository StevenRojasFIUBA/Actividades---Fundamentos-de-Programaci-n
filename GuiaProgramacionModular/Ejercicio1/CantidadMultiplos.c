#include <stdio.h>
#include <stdbool.h>

void Mensaje(bool condicion, int numero)
{
    if (condicion)
    {
        printf("Si es multiplo de: %i\n", numero);
    }
    else
    {
        printf("No es multiplo de: %i\n", numero);
    }
}


void comprobar_multiplos(int numero, int multiplo)
{
    bool EsMultiplo = false;

    if(numero % multiplo == 0)
    {
        EsMultiplo = true;
    }

    Mensaje(EsMultiplo, multiplo);
}


int main()
{
    int valor_ingresado;

    printf("Ingrese un numero: ");
    scanf("%d", &valor_ingresado);

    comprobar_multiplos(valor_ingresado, 2);
    comprobar_multiplos(valor_ingresado, 3);
    comprobar_multiplos(valor_ingresado, 5);
    comprobar_multiplos(valor_ingresado, 7);

    return 0;
}