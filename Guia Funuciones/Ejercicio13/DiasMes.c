#include <stdio.h>
#include <stdbool.h>

int DiasDelMes(int mes, int anio)
{
    int CantidadDias = 0;

    if(mes == 2)
    {
        if((anio % 4 == 0) || (anio % 100 == 0 && anio % 400 == 0))
            CantidadDias = 29;
        else
            CantidadDias = 28;
    }
    else
    {
        if(mes % 2 != 0)
        {
            if(mes <= 7)
                CantidadDias = 31;
            else
                CantidadDias = 30;
            
        }
        else
        {
            if(mes >= 8)
                CantidadDias = 31;
            else
                CantidadDias = 30;
        }
    }

    return CantidadDias;
}
 

int main()
{
    int mesIngresado, anioIngresado;
    int diasTotales;

    printf("Ingrese un mes (como numero): ");
    scanf("%d", &mesIngresado);

    printf("Ingrese un anio (como numero): ");
    scanf("%d", &anioIngresado);

    diasTotales = DiasDelMes(mesIngresado, anioIngresado);

    printf("El mes tiene %d dias en total.\n", diasTotales);

    return 0;
}