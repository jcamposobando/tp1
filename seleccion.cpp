#include "Ordenador.h"

using namespace std;

void Ordenador::seleccion(int *arreglo, int tamano) {
	int menor; //Valor minimo del arreglo

	for (int i = 0; i < tamano-1; i++) {
		menor = i;
		for (int j = i+1; j < tamano; j++)
			if (arreglo[j] < arreglo[menor])
				menor = j;

			int temp = arreglo[menor];
			arreglo[menor] = arreglo[i];;
			arreglo[i] = temp;
	}
}

