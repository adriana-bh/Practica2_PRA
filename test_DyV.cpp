#include <iostream>
#include <vector>
#include "DyV.h"
#include <chrono>

using namespace std;


int main(){

// inicialización vector
	vector<float> V = {10.0, 8.8, 9.9, 1.1, 3.3, 4.4, 2.2, 5.5, 7.7, 6.6};

// Quicksort + medición del proceso
	auto start = chrono::system_clock::now();  // inicio de cronómetro 

	QuickSort(V, 0, 9);  // proceso que mide

	auto end = chrono::system_clock::now();  // fin del cronómetro
	
// mostrar el vector ordenado
	cout << "Vector ordenado: ";
	for(int i=0; i<V.size(); i++){
		cout << V[i] << " ";
	}
	cout << endl;

// mostrar el tiempo que se ha tardado en ordenar el vector
	chrono::duration<float, milli> duration = end - start;
	cout << "Tiempo empleado para ordenar el vector: " << duration.count() << "s" << endl;

// preguntar al usuario de qué valor quiere saber la posición
	float X;
        cout << "Escribe el valor que buscas: ";
        cin >> X;

// buscar y mostrar la posición del valor
	int pos = BusquedaBinaria(X, V, 0, 9);
	cout << "La posición del valor que buscas es: " << pos << endl;
return 0;
}







