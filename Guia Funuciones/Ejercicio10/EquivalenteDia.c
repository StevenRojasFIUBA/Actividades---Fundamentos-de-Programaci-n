#include <stdio.h>

void tiempo_equivalente(int tiempo, int* dias, int* horas, int* minutos, int* segundosRestantes)
{
    *dias = tiempo / 86400;

    *horas = (tiempo % 86400) / 3600;
    
    *minutos = (tiempo % 3600) / 60; 

    *segundosRestantes = tiempo % 60;
}



int main()
{
    int dias, horas, minutos, segundos;
    int tiempo = 0;
    
    printf("Ingrese el Tiempo en Segundos: ");
    scanf("%i", &tiempo);
    
    if(tiempo > 0)
    {
        tiempo_equivalente(tiempo, &dias, &horas, &minutos, &segundos);
        
        printf("Resultado: Dias: %i, Horas: %i, Minutos: %i, Segundos: %i \n", dias, horas, minutos, segundos);
    }
    
    else
    {
        printf("No existe tiempo negativo\n");
    }
    
    return 0;
}