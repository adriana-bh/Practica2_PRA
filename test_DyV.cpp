#include <iostream>
#include <vector>
#include "DyV.h"

using namespace std;


int main(){
	vector<float> V = {10.0, 8.8, 9.9, 1.1, 3.3, 4.4, 2.2, 5.5, 7.7, 6.6};
	QuickSort(V, 0, 9);
	float X;
	cout << "Escribe el valor que buscas: ";
	cin >> X;
	
	for(int i=0; i<V.size(); i++){
		cout << V[i] << " ";
	}
	cout << endl;

	int pos = BusquedaBinaria(X, V, 0, 9);
	cout << "La posición del valor que buscas es: " << pos << endl;
return 0;
}







