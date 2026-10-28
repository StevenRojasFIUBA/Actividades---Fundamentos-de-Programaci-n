#include <stdio.h>
#include <string.h>

#define TAMANIO 5

//Declaracion del struct
typedef struct  
{
     char nombre[30];
     int padron;
     char email[50];
     int notas[2] ;
     float promedio;

} alumno;


void CargarDatos(alumno vec[TAMANIO])
{
    int i;
    for(i = 0 ; i < TAMANIO ; i++)
    {
        printf("\nIngrese el Nombre:\n");
        scanf("%s",vec[i].nombre);

        printf("Ingrese el padron:\n");
        scanf("%d",&vec[i].padron);

        printf("Ingrese el email:\n");
        scanf("%s",vec[i].email);

        printf("Ingrese la nota del Parcial 1:\n");
        scanf("%d",&vec[i].notas[0]);

        printf("Ingrese la nota del Parcial 2:\n");
        scanf("%d",&vec[i].notas[1]);

	    vec[i].promedio = (float)(vec[i].notas[0] + vec[i].notas[1])/2;
    }
}


void mostrarDatos(alumno vec[TAMANIO])
{
    int i;
    for(i = 0; i < TAMANIO; i++)
    {

 	    printf("\n\n Alumnos[%d]",i);
	    printf("\n nombre: %s ", vec[i].nombre);
	    printf("\n padron: %d ", vec[i].padron);	
	    printf("\n email: %s ", vec[i].email);
	    printf("\n Nota Parcial 1: %d Nota Parcial 2: %d", vec[i].notas[0],vec[i].notas[1]);
	    printf("\n promedio Cd: %.2f ", vec[i].promedio);
    
    }

}


void MayorPromedio(alumno datos[TAMANIO], char nombre[30], float* promedio)
{
    int i;
    *promedio = 0;

    for(i = 0; i < TAMANIO; i++)
    {
        if(datos[i].promedio > *promedio)
        {
            *promedio = datos[i].promedio;
            strcpy(nombre, datos[i].nombre);
        }
        
    }

}

float PromedioPrimerParcial(alumno datos[TAMANIO])
{
    int i, suma;
    float promedio;

    suma = 0;

    for(i = 0; i < TAMANIO; i++)
    {
        suma += datos[i].notas[1];
    }
    promedio = (float)(suma/TAMANIO);

    return promedio;
}



int main()
{
    char alumnoMaxPromedio[30];
    float promedioMax;
    float promedioParcial = 0;

    alumno Alumnos[TAMANIO];

    // cargo los elementos con funcion cargar
    CargarDatos(Alumnos);

 	/* Muestro datos del primer elemento de la tabla*/
    mostrarDatos(Alumnos);

	printf("\n\n");
	
    MayorPromedio(Alumnos, alumnoMaxPromedio, &promedioMax);

    printf("El alumno con el mejor promedio es: %s con %0.2f de promedio\n", alumnoMaxPromedio, promedioMax);

    promedioParcial = PromedioPrimerParcial(Alumnos);

    printf("En el primer parcial hubo un %0.2f de promedio\n", promedioParcial);

    return 0;
}