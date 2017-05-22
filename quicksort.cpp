#include "Ordenador.h"

using namespace std;

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

void Ordenador::quicksortAyudante (int *arreglo, int inicio, int fin) {

	if (inicio < fin) {

		//Calcula el pivote donde se particiona el arreglo.
		int pivote = particiona(arreglo, inicio, fin);

		//Ordena los subarreglos divididos en el pivote.
		quicksortAyudante(arreglo, inicio, (pivote - 1) );
		quicksortAyudante(arreglo, (pivote + 1), fin);
	}
}

void Ordenador::quicksort (int *arreglo, int tamano) {
	int inicio = 0;
	int fin = tamano-1;

	quicksortAyudante(arreglo, inicio, fin);
}

