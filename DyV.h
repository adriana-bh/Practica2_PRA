#include <iostream>
#include <vector>

using namespace std;


float Partition(vector<float> &v, int ini, int fin){
        float x = v[fin];
        int i = ini;
        for(int j = ini; j <= fin-1; j++){
                if(v[j]<=x){
                        float aux = v[i];
                        v[i] = v[j];
                        v[j] = aux;
                        i++;
                }
        }
        float aux = v[i];
        v[i] = v[fin];
        v[fin] = aux;
        return i;
}


void QuickSort(vector<float> &v, int ini, int fin){
	if(ini<fin){
		float pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot-1);
		QuickSort(v, pivot+1, fin);	
	}
}


int BusquedaBinaria(float x, vector<float> v, int ini, int fin){
	if(ini > fin) return -1;
	
	int medio = (ini + fin) / 2;

	if(v[medio] == x) return medio;
	else if(v[medio] > x) return BusquedaBinaria(x, v, ini, medio-1);
	else return BusquedaBinaria(x, v, medio+1, fin);
}
