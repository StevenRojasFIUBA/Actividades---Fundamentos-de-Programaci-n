#include <stdio.h>

int factorial(int n)
{
    //Comprueba que sea positivo
    if(n < 0)
    {
        return 0;
    } 

    //Calcula el factorial, si es 0 devuelve 1
    if(n != 0)
    {
        for(int i = n-1; i > 0; i--)
        {
            n *= i;
        }
        
    }
    else
    {
        n = 1;
    }

    return n;
}


int main()
{
    int numero;

    printf("Ingrese un numero para calcular su factorial: ");
    scanf("%d", &numero);
    printf("El factorial de %d es: %d\n", numero, factorial(numero));

    return 0;
}