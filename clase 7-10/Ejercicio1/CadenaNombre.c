#include <stdio.h>

int main() {
    char nombre[13] = "Steven Rojas";
    int i;

    for(i = 0; i < (int)sizeof(nombre); i++)
    {
        printf("%c\n", nombre[i]);
    }

    return 0;
}