#include <stdio.h>

#define cantColum 15
#define cantFilas 30

typedef int Tcolumnas[cantColum];
typedef Tcolumnas TMatriz[cantFilas]; // Esto es el equivalente a definir una matriz 30x15 (int matriz[cantFilas][cantColum])

typedef int Tvector[cantFilas];

//Ejercicio 3
void SumarFilas(TMatriz matriz, Tvector sumaTotal)
{
    int i, j;
    int suma;

    for(i = 0; i < cantFilas; i++)
    {
        suma = 0;
        
        for (j = 0; i < cantColum; j++)
        {
            suma += matriz[i][j];
        }
        
        sumaTotal[i] = suma;
    }

}


//Ejercicio 4
void PromedioFilas(TMatriz matriz, int filas, int columnas, Tvector promedioTotal)
{
    int i, j;
    int suma;
    int promedio;

    for(i = 0; i < filas; i++)
    {
        promedio = 0;

        for(j = 0; j < columnas; j++)
        {
            suma += matriz[i][j]; 
        }

        promedio = suma / columnas;

        promedioTotal[i] = promedio;
    }

}

//Ejercicio 5
void MinimoFila(TMatriz matriz, int fila, int columnas, Tvector valoresMinimos)
{
    int i, j;
    int numeroChico;

    for(i = 0; i < fila; i++)
    {
        numeroChico = matriz[i][0];
        
        for(j = 0; j < columnas; j++)
        {
            if(numeroChico > matriz[i][j])
            {
                numeroChico = matriz[i][j];
            }

        }

        valoresMinimos[i] = numeroChico;
    }

}

int main()
{
    return 0;
}