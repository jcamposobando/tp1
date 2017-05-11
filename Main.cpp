#include "Ordenador.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "time.h"
using namespace std;

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

void correrAlgoritmos(int tamanoArreglo){
    Ordenador ordenador;
    int *arreglo = new int[tamanoArreglo];         //(mejor hacerle new al arreglo, as es ms probable que pueda detectar errores en el cdigo si algo est mal).
    llenarArreglo(arreglo, tamanoArreglo);
    ordenador.insercion(arreglo,
                        tamanoArreglo);   //Corra todos los algoritmos de ordenamiento, por medio del ordenador. Imprima el tiempo de ejecucin de cada uno.
    //ordenador.seleccion(arreglo, tamanoArreglo);
    //ordenador.insercion (etc...)
    //...
    //delete[] arreglo;
}

int main(){
    srand(time(0));
    correrAlgoritmos(50); //ejemplo
    return 0;
}