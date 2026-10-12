#include <stdio.h>

#define MAX 100

typedef int Tvector[MAX];

void LlenarVector(Tvector matriz, int ML)
{
    int i;
    int valor;

    for(i = 0; i < ML; i++)
    {
        printf("Ingrese un Numero: ");
        scanf("%d", &valor);

        matriz[i] = valor;
    }

}

void ImprimirContenido(Tvector matriz, int ML)
{
    int i;
    for (i = 0; i < ML; i++)
    {
        printf("Valor en [%d]: %d\n", i, matriz[i]);
    }
    
}

int main()
{
    Tvector MiMatriz;
    int Tamanio;

    printf("Establezca el tamanio de la matriz: ");
    scanf("%d", &Tamanio);

    LlenarVector(MiMatriz, Tamanio);
    ImprimirContenido(MiMatriz, Tamanio);

    return 0;
}