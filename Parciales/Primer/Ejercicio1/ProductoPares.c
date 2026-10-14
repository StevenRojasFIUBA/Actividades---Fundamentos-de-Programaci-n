#include <stdio.h>

void ProductoPares(int numero, int* producto, int* frecuencia)
{
    int digito;
    *producto = 1;
    *frecuencia = 0;

    while (numero > 0)
    {
        digito = numero % 10;

        if(digito % 2 == 0)
        {
            *producto *= digito;
            (*frecuencia)++;
        }

        numero /= 10;
    }

}

int main()
{
    int numIngresado;
    int producto;
    int frecuenciaPar;

    printf("Ingrese un numero: ");
    scanf("%d", &numIngresado);

    ProductoPares(numIngresado, &producto, &frecuenciaPar);

    printf("Producto de sus digitos pares: %d\n", producto);
    printf("Se procesaron %d numeros.\n", frecuenciaPar);

    return 0;
}