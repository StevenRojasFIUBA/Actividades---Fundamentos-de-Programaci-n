#include <stdio.h>

#define MAX 100

typedef int Tvector[MAX];

void InicializarMatriz(Tvector matriz)
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        matriz[i] = 0;
    }
}

void InsetarValores(Tvector matriz, int* ML)
{
    int valor;
    *ML = 0;

    do
    {
        printf("Valor a insertar (0 para terminar): ");
        scanf("%d", &valor);

        if(valor != 0)
        {
            matriz[*ML] = valor;
            (*ML)++;
        }

    } while(valor != 0 && *ML < MAX);

}

int ValorMaximo(Tvector matriz, int ML)
{
    int i;
    int valorMAX = 0;

    for(i = 0; i < ML; i++)
    {
        if(matriz[i] > valorMAX && matriz[i] != valorMAX)
        {
            valorMAX = matriz[i];
        }
    }

    return valorMAX;
}

int FrecuenciaValor(Tvector matriz, int ML, int valor)
{
    int i;
    int frecuencia = 0;

    for(i = 0; i < ML; i++)
    {
        if(valor == matriz[i])
        {
            frecuencia++;
        }
    }

    return frecuencia;
}

void MostrarValor(Tvector matriz, int ML, int valor)
{
    int i;

    printf("\n");
    printf("\n %d ocupa las posiciones: \n", valor);

    for(i = 0; i < ML; i++)
    {
        if(valor == matriz[i])
        {
            printf(" [%i] ", i);
        }
    }
    printf("\n");
}

int main()
{
    Tvector MiMatriz;
    int ML;
    int Maximo;
    int Veces;

    InicializarMatriz(MiMatriz);
    InsetarValores(MiMatriz, &ML);

    Maximo = ValorMaximo(MiMatriz, ML);
    Veces = FrecuenciaValor(MiMatriz, ML, Maximo);

    printf("\n");
    printf("\nEl valor maximo de la matriz es: %d y aprarece un total de %d veces.", Maximo, Veces);

    MostrarValor(MiMatriz, ML, Maximo);
    return 0;
}