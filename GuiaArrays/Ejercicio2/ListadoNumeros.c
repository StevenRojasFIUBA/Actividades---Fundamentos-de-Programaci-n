#include <stdio.h>

#define MAX 1000

typedef int Tvector[MAX];

int LlenarMatriz(Tvector matriz)
{
    int tamanioFinal = 0;
    int valor = 0;
    int i = 0;
    
    do
    {   
        printf("Ingrese un numero: ");
        scanf("%d", &valor);

        if(valor >= 0)
        {
            matriz[i] = valor;
            i++;
        }
        
    } while(valor >= 0);
    

    tamanioFinal = i;
    
    return tamanioFinal;
}

void ImprimirContenidoMatriz(Tvector matriz, int tamanio)
{
    int i;

    printf("\n");
    printf("  CONTENIDO DE LA MATRIZ  ");
    printf("\n");

    for(i = 0; i < tamanio; i++)
    {
        printf("[%d] = %d\n", i, matriz[i]);
    }
}


int main()
{
    Tvector vector;
    int dimension;

    dimension = LlenarMatriz(vector);

    ImprimirContenidoMatriz(vector, dimension);

    printf("La matriz tiene %d valores en total.\n", dimension);
    return 0;
}