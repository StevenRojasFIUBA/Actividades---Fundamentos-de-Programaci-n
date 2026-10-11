#include <stdio.h>

void FechaConversion(int AnioMesDia, int* Anio, int* Mes, int* Dia)
{
    *Anio = AnioMesDia / 10000;
    *Mes = (AnioMesDia % 10000) / 100;
    *Dia = AnioMesDia % 100;
}



int main()
{
    int Fecha;
    int Anio = 0;
    int Mes = 0;
    int Dia = 0;

    printf("Ingrese la fecha en formato AAAAMMDD: ");
    scanf("%d", &Fecha);

    FechaConversion(Fecha, &Anio, &Mes, &Dia);

    printf("ANIO: %d / MES: %d / DIA: %d\n", Anio, Mes, Dia);

    return 0;
}