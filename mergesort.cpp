//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

using namespace std;

void Ordenador::mergesort(int *arreglo, int tamano) {
    if (tamano > 2) {
        int mitad1 = tamano / 2;
        int mitad2 = tamano - mitad1;

        int *sub1 = new int[mitad1];
        copy(arreglo, arreglo + sizeof(int) * mitad1, sub1);
        mergesort(sub1, mitad1);

        int *sub2 = new int[mitad2];
        copy(arreglo + sizeof(int) * mitad1, arreglo + sizeof(int) * tamano, sub2);
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
        cerr << "5";
        if (indice1 == mitad1) {
            copy(sub2 + sizeof(int) * indice2, sub2 + sizeof(int) * mitad2, arreglo + sizeof(int) * indice);
        } else {
            copy(sub1 + sizeof(int) * indice1, sub1 + sizeof(int) * mitad1, arreglo + sizeof(int) * indice);
        }
    }
}