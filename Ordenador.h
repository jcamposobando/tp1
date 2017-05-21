#ifndef _CLASE_ORDENADOR
#define _CLASE_ORDENADOR

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "time.h"

using namespace std;

class Ordenador {
private:

    //Defina los mtodos auxiliares de los algoritmos de ordenamiento solamente ac.
    //Puede definir cuantos mtodos quiera.

    void createHeap(int *arreglo, int tamano);

    void swap(int *arreglo, int a, int b);

    void heapify(int nodo, int *arreglo, int tamano);
    
    void particiona(int *arreglo, int inicio, int fin);
    
    void quicksortAyudante(int *arreglo, int inicio, int fin);

public:

    Ordenador() {};

    ~Ordenador() {};

    //Si piensa no implementar algunos de los mtodos de ordenamiento, no los borre,
    //simplemente djelos con el cuerpo vaco para as evitar errores de compilacin, ya
    //que voy a correr el mismo main para todas las tareas.
    void seleccion(int *arreglo, int tamano) {};

    void insercion(int *arreglo, int tamano);

    void mergesort(int *arreglo, int tamano);

    void heapsort(int *arreglo, int tamano);

    void quicksort(int *arreglo, int tamano) {};

    void radixsort(int *arreglo, int tamano) {};

    int mediana(int *arreglo, int tamano) {};

};

#endif
