#include <stdio.h>

int MaximoComunDivisor(int num1, int num2)
{
    int MCD = 0;
    int Divisor;
    int Dividendo;
    int residuo = num1 % num2; 

    if(residuo == 0)
    {
        if(num1 >= num2)
            MCD = num2;
        else if(num2 >= num1)
            MCD = num1;   
    }
    else
    {
        Dividendo = num2;

        while (residuo != 0)
        {
            Divisor = residuo;
            
            residuo = Dividendo % Divisor;

            Dividendo = Divisor;

        }
       
        MCD = Divisor;
        
    }

    return MCD;
    
}

int main()
{
    int num_A, num_B;
    int resultado;

    printf("Ingrese un numero A: ");
    scanf("%d", &num_A);

    printf("Ingrese un numero B: ");
    scanf("%d", &num_B);

    resultado = MaximoComunDivisor(num_A, num_B);

    printf("El M.C.D entre %d, y %d es: %d\n", num_A, num_B, resultado);

    return 0;
}