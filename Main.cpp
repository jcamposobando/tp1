#include "Ordenador.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include "time.h"

using namespace std;

#define cronometrar(funcion, arreglo, tamano)       \
do {                                                \
int* nuevo_arreglo = new int[tamano];               \
copy(arreglo, arreglo+tamano,nuevo_arreglo);        \
cout << left << setw(25) << #funcion;               \
int inicio = clock();                               \
funcion(arreglo, tamano);                           \
int fin = clock();                                  \
cout << left << setw(8) << (fin-inicio);            \
cout << tamano << endl;                             \
delete[] nuevo_arreglo;                             \
} while (0)                                         \


void llenarArreglo(int *arreglo, int tamano) {
    for (int i = 0; i < tamano; ++i) {
        arreglo[i] = (rand() % 200) - 100; //lo puse as'i para ver mejor los n'umeros. podemos cambiarlo despu'es
    }
}


void imprimirArreglo(int *arreglo, int tamano) {
    cout << "(" << to_string(arreglo[0]);
    for (int i = 1; i < tamano; ++i) {
        cout << "," << to_string(arreglo[i]);
    }
    cout << ")" << endl;
}

void correrAlgoritmos(int tamanoArreglo) {
    Ordenador ordenador;
    int *arreglo = new int[tamanoArreglo];
    llenarArreglo(arreglo, tamanoArreglo);
    for (int i = 0; i < 5; ++i) {
        cronometrar(ordenador.heapsort, arreglo, tamanoArreglo);
        cronometrar(ordenador.mergesort, arreglo, tamanoArreglo);
        cronometrar(ordenador.insercion, arreglo, tamanoArreglo);
        cronometrar(ordenador.quicksort, arreglo, tamanoArreglo);
        cronometrar(ordenador.radixsort, arreglo, tamanoArreglo);
        cronometrar(ordenador.seleccion, arreglo, tamanoArreglo);
    }
    delete[] arreglo;
}

int main() {
    srand(time(0));
    cout << left << setw(25) << "Nombre";
    cout << left << setw(8) << "Tiempo";
    cout << left << setw(5) << "Tamano" << endl;
    for (int i = 10000; i <= 40000; i += 10000) {
        correrAlgoritmos(i);
    }
    return 0;
}