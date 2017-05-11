//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

using namespace std;

void Ordenador::mergesort(int *arreglo, int tamano) {
    if (tamano > 1) {
        int mitad = tamano / 2;
        mergesort(arreglo, mitad);
        mergesort(arreglo + sizeof(int) * mitad, tamano - mitad);
        int a = 1;
        int b = mitad;
        while (a < mitad && b < tamano) {
            if (arreglo[a] < arreglo[b]) {

            }
        }
    }
}