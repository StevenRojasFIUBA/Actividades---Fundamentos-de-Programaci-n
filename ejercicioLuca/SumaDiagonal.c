//Programa que lea una matriz 3x3 y calcule la suma diagonal principal
#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

typedef int Numerito;
typedef int Tmatriz[FILAS][COLUMNAS];

void InicializarMatriz(Tmatriz matriz) {
    for (int i = 0; i < FILAS; i++) 
        for (int j = 0; j < COLUMNAS; j++) 
           matriz[i][j] = 2;
   
}

void SumarDiagonal(Tmatriz matriz)
{
    int resultado = 0;
    int i;
    
    for ( i = 0; i < FILAS; i++)
    {
        resultado += matriz[i][i];
    }
    
    printf("Suma de la diagonal %d\n", resultado);
}

int main()
{
    Tmatriz miMatriz;
    InicializarMatriz(miMatriz);
    SumarDiagonal(miMatriz);

    return 0;
}