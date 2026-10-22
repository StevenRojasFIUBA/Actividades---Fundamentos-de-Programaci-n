#include <stdio.h>
#include <stdbool.h>

#define MAX 150
#define NO_ENCONTRADO -1


typedef int Tvector[MAX];

void CargarDatos(Tvector vector, int* ML)
{
    int dato;
    *ML = 0;

    do
    {
        printf("Ingrese un legajo: ");
        scanf("%d", &dato);

        if(dato != 0)
        {
            vector[*ML] = dato;
            (*ML)++;
        }

    } while ((dato != 0) && *ML < MAX);

}



void OrdenarLegajos(Tvector vector, int ML)
{
    int i, j;
    int auxiliar;

    for(i = ML; i < ML; i++)
    {
        auxiliar = vector[i];
        j = i - 1;

        while ( (j >= 0) && (auxiliar < vector[j]) )
        {
            vector[j + 1] = vector[j];
            j = j -1;
        }
        
        vector[j+1] = auxiliar;
    }

}


int ExisteEnVector(Tvector vector, int ML, int valorBuscado)
{
    int inf, sup, mit;
    int posicion;
    bool encontrado; 
  
    // inicializaciones
    inf = 0;
    sup = ML - 1;
    encontrado = false;


    while (!encontrado) 
    {

      if ((inf > sup) || (valorBuscado < vector[inf]) || (valorBuscado > vector[sup])) 
      {
          encontrado = true; // NO ESTA => FIN DE LA BUSQUEDA
          posicion = NO_ENCONTRADO;  
      } 
      else 
      {
          mit = inf + ((sup-inf)/2); // evitamos overflow de la suma directa

          if (vector[mit] == valorBuscado) 
          {
            encontrado = true; // ENCONTRADO => FIN DE LA BUSQUEDA
            posicion = mit;
          } 
          else if (valorBuscado > vector[mit]) 
          {
            inf = mit + 1;
          } 
          else 
          {
            sup = mit - 1;
          }
      }        
  }

  return posicion;
}


int main()
{
    Tvector legajos;
    int MaximoLogico;
    int numero;

    CargarDatos(legajos, &MaximoLogico);
    OrdenarLegajos(legajos, MaximoLogico);

    do
    {
        printf("\nLegajo a buscar: ");
        scanf("%d", &numero);

        if (ExisteEnVector(legajos, MaximoLogico, numero) != NO_ENCONTRADO)
        {
            printf("El estudiante esta en el curso\n");
        }
        else
        {
            printf("El estudiante no esta en el curso\n");
        }

    } while (numero != 0);
    
   
    return 0;
}