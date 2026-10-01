#include <stdio.h>

// Declaración de la función que recibe una matriz como parámetro
void imprimirMatriz(int matriz[3][3], int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}


void poner_en_cero(int mat[3][3], int filas, int columnas) {
    for (int i = 0; i < filas; i++) 
        for (int j = 0; j < columnas; j++) 
           mat[i][j]=0;
   
}


void Cargardatos(int mat[3][3], int filas, int columnas) 
{
    int datos;

    for (int i = 0; i < filas; i++)
    {    
        for (int j = 0; j < columnas; j++) 
           {
                printf("Ingrese un numero; ");
                scanf("%d", &datos);
                mat[i][j] = datos;
           }

    }
}


int SumaDiagonalPrincipal(int mat[3][3], int tamanio)
{
    int resultado = 0;

    for (int i = 0; i < tamanio; i++)
    {    
        resultado = resultado + mat[i][i];
    }

    return resultado;
}


int SumaDiagonalSecundaria(int mat[3][3], int tamanio)
{
    int indice = tamanio - 1;
    int resultado = 0;

    for (int i = 0; i < tamanio; i++)
    {
            resultado = resultado + mat[i][indice - i];
    }
    

    return resultado;
}

void InicializarMatriz(int matriz[3], int tamanio)
{
    for(int i = 0; i < tamanio; i++)
    {
        matriz[i] = 0;
    }
}

void SumaFilas(int mat[3][3], int suma[3], int tamanio)
{

    for (int i = 0; i < tamanio; i++)
    {    
        for (int j = 0; j < tamanio; j++) 
           {
              suma[i] += mat[i][j];
           }

    }
}

void ImprimirSuma(int matriz[3], int tamanio)
{
    int i;

    for (i = 0; i < tamanio; i++)
    {
        printf("Suma de la fila %d : %d\n", i, matriz[i]);
    }
    
}


int main() 
{

    int Suma1 = 0;
    int Suma2 = 0;
    
    // Definición de una matriz de 3x3
    int matriz[3][3];
    int MatrizSuma[3];

    // Llamada a la función pasando la matriz como parámetro
    poner_en_cero(matriz, 3, 3);
    imprimirMatriz(matriz, 3, 3);

    //PUNTO A)
    Cargardatos(matriz, 3, 3);
    imprimirMatriz(matriz, 3, 3);

    //PUNTO B)
    Suma1 = SumaDiagonalPrincipal(matriz, 3);
    printf("La suma de la diagonal principal: %d\n", Suma1);

    //PUNTO C)
    Suma2 = SumaDiagonalSecundaria(matriz, 3);
    printf("La suma de la diagonal secundaria: %d\n", Suma2);

    //PUNTO D)
    InicializarMatriz(MatrizSuma, 3);
    SumaFilas(matriz, MatrizSuma, 3);
    ImprimirSuma(MatrizSuma, 3);

    return 0;
}