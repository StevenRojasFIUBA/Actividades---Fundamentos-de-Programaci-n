#include <stdio.h>
#include <string.h>

#define MAX_NOM 100
#define MAX 1000

/*
Realizar un programa que muestre los alumnos de forma ordenada por Nombre ascendente .
Suponer máximo 100 Alumnos.
*/

typedef char String[MAX_NOM];


typedef struct  
{
   int DNI;
   
   String Nombre;
   
   String Email; 
   
} Tregistro; 

typedef Tregistro T_Tabla[MAX];

void CargarTabla(FILE *Arch, T_Tabla Tabla, int *ml)
{
    
}



int main()
 {
    FILE *Arch;
    FILE *ArchOrd;

    T_Tabla Tabla;
    int ml;
    
    CargarTabla(Arch, Tabla, &ml);
    
    OrdenarTabla(Tabla, ml);
    
    Mostrar (Tabla, ml);
    
    GuardarOrdenado (Tabla, ml, ArchOrd);
    
    return 0;   
}