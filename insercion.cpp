//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

using namespace std;

void Ordenador::insercion(int *arreglo, int tamano) {
    int temporal;
    for (int i = 1; i < tamano; ++i) {
        for (int j = i; j > 0; --j) {
            if (arreglo[j] > arreglo[j - 1]) {
                temporal = arreglo[j];
                arreglo[j] = arreglo[j - 1];
                arreglo[j - 1] = temporal;
            } else {
                break;
            }
        }
    }
}

