#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bicicletar.h"
#include "tipo.h"
#include "color.h"
#include "validaciones.h"

int inicializarBicicletas(eBicicleta lista[], int tam)
{
    int todoOk = 0;

    if(lista != NULL && tam > 0)
    {
        for(int i = 0; i < tam; i++)
        {
            lista[i].isEmpty = 1;
        }
        todoOk = 1;
    }
    return todoOk;
}

int buscarLibre(eBicicleta lista[], int tam)
{
    int lLibre=-1;

    for(int i=0; i<tam; i++)
    {
        if(lista[i].isEmpty)
        {
            lLibre=i;
            break;
        }
    }
    return lLibre;
}

int altaBicicleta(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamT, eColor colores[], int tamC, int* idBicicleta)
{
    int todoOk = 0;
    int indice;
    eBicicleta auxBicicleta;

    if(bicicletas != NULL && tamB > 0 && tipos != NULL && tamT > 0 && colores != NULL && tamC > 0 && idBicicleta != NULL)
    {
        indice = buscarLibre(bicicletas, tamB);

        if(indice == -1)
        {
            todoOk = 2;
        }
        else
        {
            printf("ingrese marca: ");
            fflush(stdin);
            gets(auxBicicleta.marca);
            while(!arrayValidacionLetras(auxBicicleta.marca))
            {
                printf("invalido, ingrese marca: ");
                fflush(stdin);
                gets(auxBicicleta.marca);
            }

            mostrarTipos(tipos,tamT);

            printf("\n ingrese el id del tipo: ");
            scanf("%d", &auxBicicleta.idTipo);
            while(!validarTipo(auxBicicleta.idTipo))
            {
                printf("\n invalido,ingrese el id del tipo: ");
                scanf("%d", &auxBicicleta.idTipo);
            }

            mostrarColores(colores, tamC);

            printf("\n ingrese el id del color: ");
            scanf("%d", &auxBicicleta.idColor);
            while(!validarColor(auxBicicleta.idColor))
            {
                printf("\n invalido,ingrese el id del color: ");
                scanf("%d", &auxBicicleta.idColor);
            }

            printf("\n ingrese el rodado: ");
            scanf("%f", &auxBicicleta.rodado);
            while(!validarRodado(auxBicicleta.rodado))
            {
                printf("\n invalido, ingrese el rodado: ");
                scanf("%f", &auxBicicleta.rodado);
            }

            auxBicicleta.isEmpty = 0;

            auxBicicleta.id = *idBicicleta;
            *idBicicleta=*idBicicleta+1;

            bicicletas[indice] = auxBicicleta;

            todoOk = 1;

        }
    }

    return todoOk;

}

int mostrarBicicleta(eBicicleta unaBicicleta, eColor colores[], int tamC, eTipo tipos[], int tamT)
{
    char descripcionTipo[20];
    char nombreColor[20];
    int todoOk = 0;
    if(cargarDescripcionTipo(unaBicicleta.idTipo, tipos, tamT, descripcionTipo) && cargarNombreColor(unaBicicleta.idColor, colores, tamC, nombreColor))
    {

        printf("%d  %10s  %10s  %10s  %.2f\n", unaBicicleta.id, unaBicicleta.marca, descripcionTipo, nombreColor, unaBicicleta.rodado);
        todoOk = 1;
    }
    return todoOk;
}

int mostrarBicicletas(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT)
{
    int bandera = 1;
    if(Bicicletas!=NULL&& colores!= NULL&& tipos != NULL&& tamB > 0 && tamC > 0 && tamT > 0)
    {
        printf("      lista de bicicletas\n");
        printf("  id   marca  tipo  color  rodado\n");
        for(int i = 0; i < tamB; i++)
        {
            if(!Bicicletas[i].isEmpty)
            {
                mostrarBicicleta(Bicicletas[i], colores, tamC, tipos, tamT);
                bandera = 0;
            }
            if(bandera)
            {
                printf("no hay almuerzos que mostrar\n");
            }
        }
    }
}
