#include "Ordenador.h"

using namespace std;


/***
*Descripcion: Método de comparación que utiliza el algorimo Counting sort como auxiliar para ordenar un arreglo comparando elementos por su
*	del menor al mayor dígito significativo.
*Parámetros:
*	-int *arreglo: arreglo a ordenar.
*	-int tamano: tamaño del arreglo.
*Variables:
*	-int maximo: Valor máximo del arreglo.
*	-int salida[tamano]: Arreglo de salida temporal donde se va ordenando arreglo[].
***/

void Ordenador::radixsort(int *arreglo, int tamano) {
	int maximo = arreglo [0]; 
	int salida[tamano]; 

	//Encuentra el valor maximo del arreglo
	for (int i = 1; i < tamano; i++) {
		if (arreglo[i] > maximo)
			maximo = arreglo[i];
	}

	for (int exp = 1; maximo/exp > 0; exp *= 10) {
		int pos[10] = {0};

		//Aplica el algoritmo Counting Sort
		for (int i = 0; i < tamano; i++)
			pos[ (arreglo[i]/exp)%10 ]++;

		//Cambia pos[i] para que ahora contenga la posicion actual del digito correspondiente en salida[].
		for (int i = 1; i < 10; i++)
			pos[i] += pos[i - 1];

		//Construye el subarreglo de salidaya ordenado.
		for (int i = (tamano - 1); i >= 0; i--) {
			salida[pos[ (arreglo[i]/exp)%10 ] - 1] = arreglo[i];
			pos[ (arreglo[i]/exp)%10 ]--;
		}

		//Copia el subarreglo de salida (ya ordenado) a arreglo[].
		for (int i = 0; i < tamano; i++)
			arreglo[i] = salida[i];
	}
}

