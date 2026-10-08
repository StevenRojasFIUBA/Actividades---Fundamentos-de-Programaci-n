#include <stdio.h>

#define N_FILAS 4
#define N_COLUMNAS 3

typedef int Tmatriz[N_FILAS][N_COLUMNAS];


int DevolverMenor(Tmatriz matriz, int filas, int columnas, int* numeroMenor, int* cantidadMenor)
{
    int i, j;
    *numeroMenor = matriz[0][0];
    *cantidadMenor = 0;

    for(i = 0; i < filas; i++)
    {
        for(j = 0; j < columnas; j++)
        {
            if(numeroMenor > matriz[i][j])
            {
               *numeroMenor =  matriz[i][j];
               *cantidadMenor = 1;
            }
            else if(numeroMenor == matriz[i][j])
            {
                (*cantidadMenor)++;
            }
        }
    }

}

/*

int NumeroEnColumnasPares(Tmatriz matriz, int filas, int columnas, int numero)

*/