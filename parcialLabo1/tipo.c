#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tipo.h"

int mostrarTipos(eTipo tipos[], int tam)
{
    int todoOk = 0;
    if(tipos != NULL && tam > 0)
    {
        printf("      lista de tipos\n");
        printf("id    descripcion\n");
        for(int i = 0; i < tam; i++)
        {
            mostrarTipo(tipos[i]);
        }
    }
    return todoOk;
}

void mostrarTipo(eTipo Untipo)
{
    printf("%d   %10s\n", Untipo.id, Untipo.descripcion);
}

int cargarDescripcionTipo(int id, eTipo tipos[], int tam, char desc[])
{
    int todoOk = 0;

    if(id>= 1000 && id <= 1003 && tipos!= NULL && tam > 0 && desc != NULL){
    for(int i = 0; i < tam; i++)
    {
        if(tipos[i].id == id )
        {
            strcpy(desc, tipos[i].descripcion);
            todoOk = 1;
            break;
        }
    }
    }
    return todoOk;
}
