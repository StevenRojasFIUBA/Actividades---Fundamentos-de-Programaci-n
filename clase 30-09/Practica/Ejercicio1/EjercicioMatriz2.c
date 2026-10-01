#include <stdio.h>

#define MAX 50
#define APROBO 4

typedef int Tvec[MAX];

/*
Mostrar el promedio de notas del curso
Mostrar todas las notas superiores al promedio calculado
*/

void CargarNotas(Tvec vec, int *ml )
{
    int nota;
    *ml=0;

    printf("ingrese las notas o -1 para terminar\n");
    scanf("%d", &nota);
    
    while (nota!=-1 && *ml<MAX)
    {
        vec[*ml]=nota;
        (*ml) ++;
         printf("ingrese las notas o -1 para terminar\n");
         scanf("%d", &nota);

    }

}


float PromedioNotas(Tvec vec, int ml)
{
    float resultado = 0;
    int suma = 0;
    int i;

    for(i = 0; i < ml; i++)
    {
        suma += vec[i];
    }

    resultado = (float)suma / (float)ml;

    return resultado;
}


void NotasMayoresPromedio(Tvec vec, int ml, float promedio)
{
    int i;
    printf("Mejores notas: \n");
    for(i = 0; i < ml; i++)
    {
        if(vec[i] > promedio)
        {
            printf("%d\n", vec[i]);
        }
    }
    
}


int main()
{
    Tvec Vec;
    int ML=0; 
    float promedio = 0;

    CargarNotas(Vec, &ML);
    

    promedio = PromedioNotas(Vec, ML);
    printf("El promedio de las notas es: %0.2f\n", promedio);


    NotasMayoresPromedio(Vec, ML, promedio);
    return 0;
}

