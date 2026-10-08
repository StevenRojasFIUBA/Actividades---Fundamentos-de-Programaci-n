#include <stdio.h>


void OperacionPares(int numero, int* productoPares, int* cantidadPares) 
{
    int digito;

    if(numero == 0 || numero < 0)
    {
        *productoPares = 0;
        *cantidadPares = 0;
    }

    while(numero != 0)
    {
        digito = numero % 10;
        
        if(digito % 2 == 0)
        {
            *productoPares *= digito;
            (*cantidadPares)++;
        }
        
        numero = numero / 10;
    }

}


int main() {
    
    
    return 0;
}