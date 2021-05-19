#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
{
    int id;
    char nombreColor[20];

} eColor;

#endif // COLOR_H_INCLUDED

void mostrarColor(eColor UnColor);

int mostrarColores(eColor colores[], int tam);

int cargarNombreColor(int id, eColor colores[], int tam, char desc[]);
