#include <stdio.h>
#include <stdbool.h>

bool EsNumeroPrimo(int numero)
{
    bool EsPrimo = true;
    int mitad = numero / 2;

    if((numero % 2 == 0 && numero != 2) || numero == 1)
    {
        EsPrimo = false;
    }
    else
    {   
        int i = 1;

        while (EsPrimo && i <= mitad)
        {
            if(numero % i == 0 && i != 1 && i != mitad)
            {
                EsPrimo = false;
            }
            else
            {
                i++;
            }

        }

    }


    return EsPrimo;
}




int main()
{
    bool comprobacion;
    int numero;


    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    comprobacion = EsNumeroPrimo(numero);

    if(comprobacion)
    {
        printf("El numero es primo\n");
    }
    else
    {
        printf("El numero no es primo\n");
    }

    return 0;
}