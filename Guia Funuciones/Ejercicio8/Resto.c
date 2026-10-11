#include <stdio.h>

int DivisionResto(int divisor, int dividendo)
{
    int resto = 0;

    if(divisor == 0)
    {
        resto = -1;
    }
    else
    {
        while(dividendo >= divisor)
        {
            dividendo -= divisor;
        }

        resto = dividendo;
    }

    return resto;
}


int main()
{
    int divisor = 5;
    int dividendo = 22;
    int resultado = DivisionResto(divisor, dividendo);

    printf("El resto de la division de %d entre %d es: %d\n", dividendo, divisor, resultado);

    return 0;
}