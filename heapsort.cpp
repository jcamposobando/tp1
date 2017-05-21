//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

void Ordenador::createHeap(int *arreglo, int tamano) {
    for (int i = tamano / 2 - 1; i >= 0; --i) {
        heapify(i, arreglo, tamano);
    }
}

void Ordenador::swap(int *arreglo, int a, int b) {
    int temporal = arreglo[a];
    arreglo[a] = arreglo[b];
    arreglo[b] = temporal;
}

void Ordenador::heapify(int nodo, int *arreglo, int tamano) {
    int ultimo_no_hoja = tamano / 2 - 1;
    if (nodo == ultimo_no_hoja && tamano % 2 == 0) {
        int hijo = 2 * nodo + 1;
        if (arreglo[nodo] < arreglo[hijo]) {
            swap(arreglo, nodo, hijo);
        }
    } else if (nodo <= ultimo_no_hoja) {
        int hijo_izquierda = 2 * nodo + 1;
        int hijo_derecha = 2 * nodo + 2;
        if (arreglo[nodo] < arreglo[hijo_izquierda]) {
            if (arreglo[hijo_derecha] < arreglo[hijo_izquierda]) {
                swap(arreglo, nodo, hijo_izquierda);
                heapify(hijo_izquierda, arreglo, tamano);
            } else {
                swap(arreglo, nodo, hijo_derecha);
                heapify(hijo_derecha, arreglo, tamano);
            }
        } else if (arreglo[nodo] < arreglo[hijo_derecha]) {
            swap(arreglo, nodo, hijo_derecha);
            heapify(hijo_derecha, arreglo, tamano);
        }
    }
}

void holi(int *arreglo, int tamano) {
    cout << "(" << to_string(arreglo[0]);
    for (int i = 1; i < tamano; ++i) {
        cout << "," << to_string(arreglo[i]);
    }
    cout << ")" << endl;
}

void Ordenador::heapsort(int *arreglo, int tamano) {
    createHeap(arreglo, tamano);
    for (int i = tamano - 1; i > 0; --i) {
        swap(arreglo, i, 0);
        heapify(0, arreglo, i);
    }
}

