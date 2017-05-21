//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

using namespace std;

void Ordenador::mergesort(int *arreglo, int tamano) {
    if (tamano > 1) {
        int mitad1 = tamano / 2;
        int mitad2 = tamano - mitad1;

        int *sub1 = new int[mitad1];
        copy(arreglo, arreglo + mitad1, sub1);
        mergesort(sub1, mitad1);

        int *sub2 = new int[mitad2];
        copy(arreglo + mitad1, arreglo + tamano, sub2);
        mergesort(sub2, mitad2);

        int indice = 0;
        int indice1 = 0;
        int indice2 = 0;

        while (indice1 < mitad1 && indice2 < mitad2) {
            if (sub1[indice1] < sub2[indice2]) {
                arreglo[indice] = sub1[indice1];
                ++indice1;
            } else {
                arreglo[indice] = sub2[indice2];
                ++indice2;
            }
            ++indice;
        }
        if (indice1 == mitad1) {
            copy(sub2 + indice2, sub2 + mitad2, arreglo + indice);
        } else {
            copy(sub1 + indice1, sub1 + mitad1, arreglo + indice);
        }
    }
}