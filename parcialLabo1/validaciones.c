#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "validaciones.h"

int arrayValidacionLetras(char array[])
{
    for(int i = 0; array[i] != '\0'; i++)
    {
        if((array[i] != ' ') && (array[i] < 'a' || array[i] > 'z') && (array[i] < 'A' || array[i] > 'Z'))
        {
            return 0;
        }
    }
    return 1;
}

int validarTipo(int tipo)
{
    int todoOk = 0;
    if(tipo >= 1000 && tipo <= 1003)
    {
        todoOk = 1;
    }
    return todoOk;
}

int validarColor(int color)
{
    int todoOk = 0;
    if(color >= 5000 && color <= 5004)
    {
        todoOk = 1;
    }
    return todoOk;
}

int validarRodado(float rodado)
{
    int todoOk = 0;
    if(rodado == 20 || rodado == 26 || rodado == 27.5 || rodado == 29)
    {
        todoOk = 1;
    }
    return todoOk;
}
