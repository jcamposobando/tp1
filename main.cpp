#include "Ordenador.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include "time.h"
using namespace std;

void correrAlgoritmos(int tamanoArreglo){
    //Ordenador ordenador;
    //int * arreglo = new int[tamanoArreglo]; (mejor hacerle new al arreglo, as es ms probable que pueda detectar errores en el cdigo si algo est mal).
    //llene su arreglo con numeros negativos y positivos, al azar.
    //Corra todos los algoritmos de ordenamiento, por medio del ordenador. Imprima el tiempo de ejecucin de cada uno.
    //ordenador.seleccion(arreglo, tamanoArreglo);
    //imprimir tiempo de ejecucin...
    //ordenador.insercion (etc...)
    //...
    //delete[] arreglo;
}

int main(){
    srand(time(0));
    correrAlgoritmos(10000); //ejemplo
    return 0;
}