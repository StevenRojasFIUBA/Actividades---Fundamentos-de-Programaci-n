#include <stdio.h>
#include <stdbool.h>

#define MAX 500

typedef int Tvector[MAX];


void InsertarValores(Tvector matriz, int* ML)
{
    int valor;
    *ML = 0;

   do
   {
        printf("Inserte un valor, 0 para salir: ");
        scanf("%d", &valor);

        if(valor != 0)
        {
            matriz[*ML] = valor;
            (*ML)++;
        }

   } while (valor != 0);
   
    
}



void AnalizarMatriz(Tvector matriz, int ML, int* indiceNegativo, bool* hayParMayorCien)
{
    int i = 0;
    *indiceNegativo = -1;
    *hayParMayorCien = false;

    while (i < ML && (*indiceNegativo == -1 || !*hayParMayorCien))
    {
        if(matriz[i] < 0 && *indiceNegativo == -1)
        {
            *indiceNegativo = i;
        }
        else if(matriz[i] % 2 == 0  && matriz[i] > 100)
        {
            *hayParMayorCien = true;
        }
        
        i++;
    }
    
}





int main()
{
    Tvector VectorNumeros;
    int ML;
    int indice;
    bool MayorCien;

    InsertarValores(VectorNumeros, &ML);

    AnalizarMatriz(VectorNumeros, ML, &indice, &MayorCien);

    printf("El indice del primer numero negativo del vector es: %d\n", indice);
    printf("Hay un numero par mayor a cien? : %s\n", MayorCien? "Si" : "No");

    return 0;
}