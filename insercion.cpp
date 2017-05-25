//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

using namespace std;

/***
*Descripcion: Método de ordenamiento que consiste en insertar elementos no ordenados en un arreglo ordenado.
*Modifica: arreglo[tamano].
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
*	-int temporal: variable auxiliar utilizada para intercambiar elementos del arreglo.
*   -int j: indice del ciclo interno.
***/
void Ordenador::insercion(int *arreglo, int tamano) {
    int temporal;
    int j;

    for (int i = 1; i < tamano; ++i) {
        j = i;
        while (j > 0 && arreglo[j] > arreglo[j - 1]) {
            temporal = arreglo[j];
            arreglo[j] = arreglo[j - 1];
            arreglo[j - 1] = temporal;
            --j;
        }
    }
}

