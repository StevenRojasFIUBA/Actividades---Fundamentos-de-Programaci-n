#include <stdio.h>

int SubCodigo(int codigo, int k, int n)
{
    int CantidadDigitos = 0;
    int auxiliar = codigo;
    int resultado = 0;
    
    int i;

    int potenciaK = 1;
    int potenciaN = 1;
    
    //Este while s encarga de separar los digitos de el codigo y contarlos
    while(auxiliar > 0)
    {
        CantidadDigitos++;
        auxiliar /= 10;
    }

    if(n > 0 && n < CantidadDigitos)
    {
        for(i = 1; i <= k; i++)
            potenciaK *= 10; 


        for (i = 1; i <= n; i++)
            potenciaN *= 10;
        
        resultado = (codigo / potenciaK) % potenciaN;
    }
    else
    {
        resultado = -1;
    }
   

    return resultado;
}



int main()
{
    int numero;
    int longitud;
    int inicio;
    int SubCodigoGenerado;

    printf("Ingrese un codigo cualquiera: ");
    scanf("%d", &numero);

    printf("Cantidad de digitos: ");
    scanf("%d", &longitud);

    printf("Digito por donde va empezar: ");
    scanf("%d", &inicio);

    SubCodigoGenerado = SubCodigo(numero, inicio, longitud);

    printf("El subcodigo generado es: %d\n", SubCodigoGenerado);
    return 0;
}   