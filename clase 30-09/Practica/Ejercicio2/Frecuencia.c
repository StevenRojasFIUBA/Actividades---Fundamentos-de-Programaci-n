#include <stdio.h>
#define MAX 1000  
  
typedef int TVec[MAX];    

/*
/Ingresar una serie de números, entre 0 y 999,  finalizada con un numero negativo y mostrar la cantidad de veces que aparece cada número en la serie
*/

void Inicializar(TVec vec)
{
    int i;
    
    for(i = 0; i < MAX; i++)
    {
        vec[i] = 0;
    }
}

void CargarContadores(TVec vec)
{
    int ingreso = 0;

    printf("Ingrese un numero (0 hasta 999), -1 para terminar: ");
    scanf("%d", &ingreso);

    while(ingreso != -1)
    {
        if(ingreso >= 0 && ingreso < MAX)
            vec[ingreso] ++;
        
        printf("Ingrese un numero (0 hasta 999), -1 para terminar: ");
        scanf("%d", &ingreso);
    }

}

void MostrarFrecuencia(TVec vec)
{
    int i;

    for(i = 0; i < MAX; i++)
    {
        printf("El numero %d, parece %d veces", i, vec[i]);
    }
}

int main()
{
   TVec vec;
   
    Inicializar(vec);
   
    CargarContadores(vec);
   
    MostrarFrecuencia(vec);

    return 0;
}