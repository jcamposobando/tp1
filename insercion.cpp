//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

using namespace std;

void Ordenador::insercion(int *arreglo, int tamano) {
    int temporal; //variable auxiliar para intercambiar valores
    int j; //indice del ciclo interno

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

