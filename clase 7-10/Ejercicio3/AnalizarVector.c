#include <stdio.h>

#define MAX 500
typedef int Tvector[MAX];

void AnalizarVector(Tvector vector, int maximo_logico, int* indiceNegativo, bool* ParMayorCien)
{
    int i;
    *ParMayorCien = false;
    *indiceNegativo = -1;

    while(ParMayorCien == false || indiceNegativo != -1)
    {
        i = maximo_logico - 1;

        if(vector[i] < 0)
        {
            *indiceNegativo = i;
        }

        if(vector[i] % 2 == 0 && vector[i] > 100)
        {
            *ParMayorCien = true;
        }

    }
}
/*
void DevolverMenor(Tmatriz matriz, int filas, int columnas, int* menor)
{

}


*/
int main() 
{
    
    
    return 0;
}