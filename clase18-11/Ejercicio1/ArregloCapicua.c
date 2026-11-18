#include <stdio.h>
#include <stdbool.h>
#define MAX 30

typedef int Tvector[MAX];


bool ComprobarCapicua(Tvector vector, int ML)
{
    int i, indices;
    bool esCapicua = true;

    indices = ML -1;
    i = 0;

   while (i <= indices/2 && esCapicua)
   {
        if(vector[i] != vector[indices - i])
        {   
            esCapicua = false;
        }
        else
        {
            i++;
        }
   }

   return esCapicua;
}

int main()
{
    Tvector numeros = {1, 2, 2, 1};
    int MaximoLogico = 4;

    if(ComprobarCapicua(numeros, MaximoLogico))
    {
        printf("El vector es capicua!\n");
    }
    else
    {
        printf("No es capicua el vector!\n");
    }


    return 0;
}