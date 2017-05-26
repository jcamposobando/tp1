#include "Ordenador.h"

using namespace std;

/***
*Descripcion: Método que recorre el arreglo e intercambia posiciones a aquellos elementos que son menores o igual al pivote, dejando los 
*	elementos menores a la izquierda del pivote y los mayores a su derecha.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int inicio: Posición del primer elemento del arreglo (0).
*	-int fin: Posición de último elemento del arreglo (tamaño - 1).
*Variables:
*	-int pivote: designa donde se va a particionar el arreglo.
*	-int i: indice del menor elemento.
*	-int temporal: variable auxiliar utilizada para intercambiar elementos del arreglo.
***/

int Ordenador::particiona (int *arreglo, int inicio, int fin) {
	int pivote = arreglo[fin]; // pivote
	int i = (inicio - 1); // Indice del menor elemento
	int temporal;

	for (int j = inicio; j <= (fin - 1); j++) {
		//Intercambia arreglo[i] con arreglo[j] si este ultimo es menor que pivote.
		if (arreglo[j] <= pivote) {
			i++; //Pasa al elemento siguiente.
			temporal = arreglo[i];
			arreglo[i] = arreglo[j];
			arreglo[j] = temporal;
		}
	}

	temporal = arreglo[i+1];
	arreglo[i+1] = arreglo[fin];
	arreglo[fin] = temporal;

	return (i + 1);
}

/***
*Descripcion: Método auxiliar que ejecuta el algoritmo de ordenamiento recursivo quicksort. Encuentra un valor pivote (mediante el método
*	particiona) donde se va a partir el arreglo para hacer 2 llamados recursivos, uno con el subarreglo que va del inicio hasta pivote -1
* 	y otro subarreglo que va desde pivote+1 hasta el fin del arreglo original. 
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int inicio: Posición del primer elemento del arreglo (0).
*	-int fin: Posición de último elemento del arreglo (tamaño - 1).
*Variables:
*	-int pivote: designa donde se va a particionar el arreglo para hacer los llamados recursivos.
***/

void Ordenador::quicksortAyudante (int *arreglo, int inicio, int fin) {

	if (inicio < fin) {

		//Calcula el pivote donde se particiona el arreglo.
		int pivote = particiona(arreglo, inicio, fin);

		//Ordena los subarreglos divididos en el pivote.
		quicksortAyudante(arreglo, inicio, (pivote - 1) );
		quicksortAyudante(arreglo, (pivote + 1), fin);
	}
}

/***
*Descripcion: Se encarga de llamar al método auxiliar quicksortAyudante que utilizalos parámetros (int *arreglo, int inicio, int fin) 
*	propios del algoritmo Quicksort, en lugar de (int *arreglo, int tamano).
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
*	-int inicio: Posición del primer elemento del arreglo (0).
*	-int fin: Posición de último elemento del arreglo (tamaño - 1).
***/

void Ordenador::quicksort (int *arreglo, int tamano) {
	int inicio = 0;
	int fin = tamano-1;

	quicksortAyudante(arreglo, inicio, fin);
}

