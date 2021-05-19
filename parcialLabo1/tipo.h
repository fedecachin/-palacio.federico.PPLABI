#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED

typedef struct
{
    int id;
    char descripcion[20];

} eTipo;

#endif // TIPO_H_INCLUDED

int mostrarTipos (eTipo tipos[], int tam);

void mostrarTipo(eTipo Untipo);

int cargarDescripcionTipo(int id, eTipo tipos[], int tam, char desc[]);
