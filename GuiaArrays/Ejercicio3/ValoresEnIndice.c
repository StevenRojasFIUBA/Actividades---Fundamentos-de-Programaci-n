#include <stdio.h>

#define MAX 1000

typedef int Tvector[MAX];

void InicializarMatriz(Tvector matriz)
{
    int i;
    for(i = 0; i < MAX; i++)
    {
        matriz[i] = 0;
    }
}

void LlenarMatriz(Tvector matriz)
{
    int i, x;

    do
    {
        printf("Ingrese el numero de casilla (Min: 0 y Max: 999): ");
        scanf("%d", &i);
        
        if(i >= 0 && i <= 999)
        {
            printf("Valor para [%d]: ", i);
            scanf("%d", &x);
            matriz[i] = x;
        }
        else if(i > 999)
        {
            printf("Ingrese un numero de casilla valido!\n");
        }


    } while (i >= 0);
    
}

void ImprimirContenidoMatriz(Tvector matriz)
{
    int indice;
    int tamanio = 0;

    printf("\n");
    printf("\nCONTENIDO DE LA MATRIZ\n");

    for(indice = 0 ; indice < MAX; indice++)
    {
        if(matriz[indice] != 0)
        {
            printf("[%d] = %d\n", indice, matriz[indice]);
            tamanio++;
        }
    }

    printf("\n");
    printf("La matriz tiene %d espacios llenos.\n", tamanio);
}

int main()
{
    Tvector MiVector;
    
    InicializarMatriz(MiVector);
    LlenarMatriz(MiVector);
    ImprimirContenidoMatriz(MiVector);
    
    return 0;
}