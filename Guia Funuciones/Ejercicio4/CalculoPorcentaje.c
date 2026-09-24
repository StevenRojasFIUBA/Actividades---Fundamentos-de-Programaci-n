#include <stdio.h>

float porcentaje(int parte, int total)
{
    float porcentaje = 0;

    porcentaje = (float)parte * 100 / (float)total;

    return porcentaje;

}


int main()
{
    int parte, total;
    

    printf("Ingrese la parte: ");
    scanf("%d", &parte);
    printf("Ingrese el total: ");
    scanf("%d", &total);

    printf("El porcentaje es: %.1f%%\n", porcentaje(parte, total));

    return 0;
}