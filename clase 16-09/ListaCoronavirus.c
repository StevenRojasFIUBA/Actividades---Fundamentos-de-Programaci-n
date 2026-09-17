#include <stdio.h>

/*
Se tiene una lista de casos confirmados de coronavirus por cada país 
se pide:
Indicar cual es el promedio mundial
Cantidad de Casos mundiales
Que cantidad de casos tiene el país con menos casos
Que cantidad de casos tiene el país con más casos


Ingrese casos -1 para terminar
*/

int main()
{
    int casos_mundiales = 0;
    int promedio_mundial = 0;
    int pais_menos_casos = 0;
    int pais_mas_casos = 0;

    int casos = 0;
    int cantidad_paises = 0;
    int total = 0;


    while(casos != -1)
    {
        printf("Casos del pais: ");
        scanf("%d", &casos);

        if(casos > 0)
        {
            total += casos;
            cantidad_paises++;
        }

        if(casos < pais_menos_casos && casos >= 0)
        {
            pais_menos_casos = casos;
        }


        if(casos > pais_mas_casos)
        {
            pais_mas_casos = casos;
        }

    }
    
    if(cantidad_paises > 0)
    {
     
    casos_mundiales = total;
    promedio_mundial = total / cantidad_paises;

    printf("Cantidad de casos mundiales: %d\n", casos_mundiales);
    printf("Promedio mundial: %d\n", promedio_mundial);
    printf("Cantidad de casos del pais con menos casos: %d\n", pais_menos_casos);
    printf("Cantidad de casos del pais con mas casos: %d\n", pais_mas_casos);
    
    }
    else
    {
        printf("No se ingresaron casos validos.\n");
    }

    return 0;
}