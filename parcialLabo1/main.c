#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fecha.h"
#include "tipo.h"
#include "color.h"
#include "bicicletar.h"
#include "servicio.h"
#include "trabajo.h"
#define TAMT 4
#define TAMC 5
#define TAMS 4
#define TAMB 5



int menu();

int main()
{
    eTipo tipos[TAMT] = {{1000, "rutera"}, {1001, "carrera"}, {1002, "mountaint"}, {1003, "bmx"} };
    eColor colores[TAMC] = {{5000, "gris"}, {5001, "negro"}, {5002, "blanco"}, {5003, "azul"}, {5004, "rojo"} };
    eServicio servicios[TAMS] = {{20000, "limpieza", 250}, {20001, "parche", 300}, {20002, "centrado", 400}, {20003, "cadena", 350} };
    eBicicleta listaB[TAMB];

    char salir = 'n';
    int NextIdBicicleta = 50000;
    int altaBici;

    inicializarBicicletas(listaB, TAMB);

    do
    {
        switch(menu())
        {
        case 1:
            altaBici = altaBicicleta(listaB, TAMB, tipos, TAMT, colores, TAMC, &NextIdBicicleta);
            if(altaBici==1)
            {
                printf("alta dada con exito\n");
            }else if(altaBici == 0)
            {
                printf("se produjo un error\n");
            }else if (altaBici == 2)
            {
                printf("no hay lugar disponible\n");
            }
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            mostrarBicicletas(listaB, TAMB, colores, TAMC, tipos, TAMT);

            break;
        case 5:
            mostrarTipos(tipos, TAMT);
            break;
        case 6:
            mostrarColores(colores, TAMC);
            break;
        case 7:

            break;
        case 8:

            break;
        case 9:

            break;
        case 10:
            salir = 's';
            break;
        }
        system("pause");
    }
    while(salir == 'n');

    return 0;
}

int menu()
{
    int opcion;

    system("cls");
    printf("  ****menu de opciones****\n\n");
    printf("1. alta bicicleta\n");
    printf("2. modificar bicicleta\n");
    printf("3. baja bicicleta\n");
    printf("4. listar bicicletas\n");
    printf("5. listar tipos\n");
    printf("6. listar colores\n");
    printf("7. listar servicios\n");
    printf("8. alta trabajo\n");
    printf("9. listar trabajos\n");
    printf("10. salir\n");
    printf("ingrese una opcion: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;

}
