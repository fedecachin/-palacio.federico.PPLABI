#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "color.h"

void mostrarColor(eColor UnColor)
{
    printf("%d   %10s\n", UnColor.id, UnColor.nombreColor);
}

int mostrarColores(eColor colores[], int tam)
{
    int todoOk = 0;
    if(colores != NULL && tam > 0)
    {
        printf("      lista de colores\n");
        printf("id    color\n");
        for(int i = 0; i < tam; i++)
        {
            mostrarColor(colores[i]);
        }
    }
    return todoOk;
}

int cargarNombreColor(int id, eColor colores[], int tam, char desc[])
{
    int todoOk = 0;

    if(id>= 5000 && id <= 5004 && colores!= NULL && tam > 0 && desc != NULL){
    for(int i = 0; i < tam; i++)
    {
        if(colores[i].id == id )
        {
            strcpy(desc, colores[i].nombreColor);
            todoOk = 1;
            break;
        }
    }
    }
    return todoOk;
}
