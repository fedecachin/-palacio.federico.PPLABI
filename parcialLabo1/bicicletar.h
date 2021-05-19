#include "tipo.h"
#include "color.h"
#ifndef BICICLETAR_H_INCLUDED
#define BICICLETAR_H_INCLUDED

typedef struct
{
    int id;
    char marca[20];
    int idTipo;
    int idColor;
    float rodado;
    int isEmpty;


} eBicicleta;

#endif // BICICLETAR_H_INCLUDED

int altaBicicleta(eBicicleta bicicletas[], int tamB, eTipo tipos[], int tamT, eColor colores[], int tamC, int* idBicicleta);

int inicializarBicicletas(eBicicleta lista[], int tam);

int mostrarBicicleta(eBicicleta unaBicicleta, eColor colores[], int tamC, eTipo tipos[], int tamT);

int mostrarBicicletas(eBicicleta Bicicletas[], int tamB, eColor colores[], int tamC, eTipo tipos[], int tamT);
