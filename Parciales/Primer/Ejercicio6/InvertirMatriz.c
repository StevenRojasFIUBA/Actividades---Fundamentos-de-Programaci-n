#include <stdio.h>

#define MAX 6

typedef float Tvector[MAX];

void ImprimirValores(Tvector vector)
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("\n[%d] = %f\n", i, vector[i]);
    }

}

void VectorInverso(Tvector vector)
{
    int i;
    float valor; 

    for(i = 0; i < MAX/2; i++)
    {
        valor = vector[i];

        vector[i] = vector[MAX - 1 - i];
        
        vector[MAX - 1 - i] = valor;
    }

}

int main()
{
    Tvector numeros = {15.00, 204.00, 42.00, 30.00, 23.00, 107.00};

    printf("Matriz Normal\n");
    ImprimirValores(numeros);

    
    printf("\n Matriz Inversa\n");
    VectorInverso(numeros);
    ImprimirValores(numeros);
    return 0;
}