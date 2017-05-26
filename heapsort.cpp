//
// Created by juanico on 5/10/17.
//
#include "Ordenador.h"

/***
*Descripcion: Método que crea un montículo.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
***/

void Ordenador::createHeap(int *arreglo, int tamano) {
    for (int i = tamano / 2 - 1; i >= 0; --i) {
        heapify(i, arreglo, tamano);
    }
}

/***
*Descripcion: Método que recibe un arreglo y la posicíon de dos de sus elementos para intercambiarlos.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int a: posición del primer elemento del arreglo a intercambiar.
*	-int b: posición del segundo elemento del arreglo a intercambiar.
*Variables:
*   -int temporal: Variable auxiliar utilizada para intercambiar otras variables.
***/

void Ordenador::swap(int *arreglo, int a, int b) {
    int temporal = arreglo[a];
    arreglo[a] = arreglo[b];
    arreglo[b] = temporal;
}

/***
*Descripcion: Método que se encarga de hacer los montículos máximos, es decir, todo nodo hijo es mejor que su nodo padre.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*   -int nodo: elemento donde se empieza a crear los monticulos.
*Variables:
*   -int ultimo_no_hoja: se utiliza para comprobar si un nodo no es una hoja.
*   -int hijo: asigna el hijo de un nodo si este no es una hoja.
*   -int hijo_izquierda: representa el hijo izquierdo de un nodo, nodo +1.
*   -int hijo_derecho: representa el hijo derecho de un nodo, nodo +2.
***/

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

/***
*Descripcion: Método auxiliar que imprime el arreglo.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
***/

void holi(int *arreglo, int tamano) {
    cout << "(" << to_string(arreglo[0]);
    for (int i = 1; i < tamano; ++i) {
        cout << "," << to_string(arreglo[i]);
    }
    cout << ")" << endl;
}

/***
*Descripcion: Método de ordenamiento mediante el uso de montículos máximos.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
***/

void Ordenador::heapsort(int *arreglo, int tamano) {
    createHeap(arreglo, tamano);
    for (int i = tamano - 1; i > 0; --i) {
        swap(arreglo, i, 0);
        heapify(0, arreglo, i);
    }
}

