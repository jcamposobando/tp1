#include "Ordenador.h"

using namespace std;

/***
*Descripcion: Método de ordenamiento que busca el elemento más pequeño y lo pone en la primer posición, luego busca el segundo y lo
*pone en la segunda posición y así sucesivamente hasta tener el arreglo ordenado.
*Modifica: arreglo[tamano].
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
*	-int menor: contiene el elemento más pequeno del arreglo.
*	-int temp: variable temporal utilizada para intercambiar elementos del arreglo.
***/
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

