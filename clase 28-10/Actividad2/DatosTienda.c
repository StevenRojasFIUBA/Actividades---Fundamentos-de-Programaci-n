#include <stdio.h>
#include <string.h>

#define MAX 10

typedef struct 
{
    int codigo;
    char nombre[50];
    char proveedor[50];
    float precio;
    int cantidadVendida;
    float importe;
} DatosTienda;

typedef DatosTienda Productos[MAX];


void cargarDatosEjemplo(Productos lista, int* ML) 
{
    *ML = 5;

    lista[0].codigo = 100;
    strcpy(lista[0].nombre, "Teclado");
    strcpy(lista[0].proveedor, "TecnoSur");
    lista[0].precio = 25000;
    lista[0].cantidadVendida = 10;

    lista[1].codigo = 101;
    strcpy(lista[1].nombre, "Mouse");
    strcpy(lista[1].proveedor, "Perifericos SA");
    lista[1].precio = 12000;
    lista[1].cantidadVendida = 5;

    lista[2].codigo = 105;
    strcpy(lista[2].nombre, "Monitor");
    strcpy(lista[2].proveedor, "TecnoSur");
    lista[2].precio = 180000;
    lista[2].cantidadVendida = 20;

    lista[3].codigo = 102;
    strcpy(lista[3].nombre, "Auriculares");
    strcpy(lista[3].proveedor, "AudioMax");
    lista[3].precio = 35000;
    lista[3].cantidadVendida = 8;

    lista[4].codigo = 104;
    strcpy(lista[4].nombre, "Parlantes");
    strcpy(lista[4].proveedor, "AudioMax");
    lista[4].precio = 45000;
    lista[4].cantidadVendida = 12;

    printf("Datos de ejemplo cargados correctamente.\n");
}




void CargarProducto(Productos lista, int* ML)
{
    *ML = 0;
    char continuar = 's';

    lista[*ML].codigo = 0;
    lista[*ML].precio = 0;
    lista[*ML].cantidadVendida = 0;

    while (continuar != 'n' && continuar != 'N')
    {
        
        printf("Ingresando nuevo producto: \n");
        lista[*ML].codigo = *ML;
        
        printf("Nombre: ");
        scanf("%s", lista[*ML].nombre);
        
        printf("Proveedor: ");
        scanf("%s", lista[*ML].proveedor);

        printf("Precio: ");
        scanf("%f", &lista[*ML].precio);
        
        if(lista[*ML].precio < 0)
        {
            lista[*ML].precio *= -1;
        }
        
        printf("Unidades Vendidas: ");
        scanf("%d", &lista[*ML].cantidadVendida);

        printf("\nQuiere ingresar otro producto? (S/N): ");
        scanf("%s", &continuar);
        
        if(continuar == 'S' || continuar == 's')
            (*ML)++;
        
    }
    

    
}

void MostrarLista(Productos lista, int ML)
{
    int i;

    printf("\n LISTA DE PRODUCTOS \n");
    
    for(i = 0; i <= ML; i++)
    {
        printf("Codigo: %d\n", lista[i].codigo);
        printf("Nombre: %s\n", lista[i].nombre);
        printf("Proveedor: %s\n", lista[i].proveedor);
        printf("Precio: $%0.2f\n", lista[i].precio);
        printf("Unidades Vendidas: %d\n", lista[i].cantidadVendida);

        lista[i].importe = lista[i].precio * (float)lista[i].cantidadVendida;

        printf("El importe del producto es: $%0.2f\n", lista[i].importe);

        printf("\n");
    }

}

void BuscarCodigo()
{
    
}



int main()
{
    Productos Listado;
    int ML;

    CargarProducto(Listado, &ML);

    MostrarLista(Listado, ML);

    return 0;
}