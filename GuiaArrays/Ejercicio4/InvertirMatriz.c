#include <stdio.h>

#define MAX 100

typedef int Tvector[MAX];

void InicializarMatriz(Tvector matriz)
{
    int i;

    for(i = 0 ; i < MAX; i++)
    {
        matriz[i] = 0;
    }
}

void InsertarValores(Tvector matriz, int* ML)
{
    int valor;
    *ML = 0;

    do
    {
        printf("Ingrese un valor (0 para terminar): ");
        scanf("%d", &valor);

        if(valor != 0)
        {
            matriz[*ML] = valor;
            (*ML)++;
        }
        
    } while (valor != 0 && *ML < MAX);
    
}

void InvertirMatriz(Tvector matriz, int ML)
{
    int i;
    int aux;

    for(i = 0; i < ML/2; i++)
    {
        aux = matriz[i];

        matriz[i] = matriz[ML - 1 - i];

        matriz[ML - 1 - i] = aux;
    }

}

void ImprimirMatriz(Tvector matriz, int ML)
{
    int i;
    for(i = 0; i < ML; i++)
    {
        printf("Indice [%d] = %d\n", i, matriz[i]);
    }
}


int main()
{
    Tvector MiVector;
    int MaximoLogico;

    InicializarMatriz(MiVector);
    InsertarValores(MiVector, &MaximoLogico);
    
    printf("\n MATRIZ \n");
    ImprimirMatriz(MiVector, MaximoLogico);
    
    printf("\n MATRIZ INVERTIDA \n");
    InvertirMatriz(MiVector, MaximoLogico);
    ImprimirMatriz(MiVector, MaximoLogico);

    return 0;
}