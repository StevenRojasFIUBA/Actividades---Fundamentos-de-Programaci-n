#include <stdio.h>

#define MAX_DIA 7
#define MAX_HORA 24

typedef int TMat[MAX_DIA][MAX_HORA];


void PromedioDia(TMat matriz)
{
    int i;
    int j;

    int suma_hora;
    
    for(i = 0; i < MAX_DIA; i++)
    {
        suma_hora = 0;

        for(j = 0; j < MAX_HORA; j++)
        {
            suma_hora += matriz[i][j];
        }

        printf("El promedio por dia es: %.2f\n", (float)suma_hora / (float)MAX_HORA);
    }

}



int main()
{
    TMat Mat;

    PromedioDia(Mat);

    return 0;
}