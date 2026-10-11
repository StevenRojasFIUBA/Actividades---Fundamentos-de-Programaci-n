#include <stdio.h>
#include <stdbool.h>

bool esCapicua(int numero)
{
    bool respuesta = true;
    int numeroOriginal = numero; 
    int numeroInvertido = 0;
    int digito;

    if(numero < 0)
    {
        respuesta = false;
    }
    else
    {
       while(numero > 0)
       {
            digito = numero % 10;
            numeroInvertido = (numeroInvertido * 10) + digito;
            numero = numero / 10;
       }

       if(numeroOriginal != numeroInvertido)
       {
            respuesta = false;
       }
        
    }

    return respuesta;
}

int main()
{
    int numero = 2552;
    bool resultado = esCapicua(numero);
    if(resultado)
    {
        printf("El numero %d es capicua.\n", numero);
    }
    else
    {
        printf("El numero %d no es capicua.\n", numero);
    }

    return 0;
}