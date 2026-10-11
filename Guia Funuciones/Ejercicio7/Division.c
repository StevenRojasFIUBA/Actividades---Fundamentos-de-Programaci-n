#include <stdio.h>

int Division(int divisor, int dividendo)
{
    int cociente = 0;

    if(divisor == 0)
    {
        cociente = -1;
    }
    else
    {
        while(dividendo >= divisor)
        {
            dividendo -= divisor;
            cociente++;
        }
    }

    return cociente;
}

int main()
{
    int divisor = 5;
    int dividendo = 20;
    int resultado = Division(divisor, dividendo);

    printf("El resultado de la division de %d entre %d es: %d\n", dividendo, divisor, resultado);

    return 0;
}