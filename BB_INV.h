#include <iostream>
#include <vector>

using namespace std;

int BusquedaBinaria(float x, vector<float> v, int ini, int fin){
        if(ini > fin) return -1;

        int medio = (ini + fin) / 2;

        if(v[medio] == x) return medio;
        else if(v[medio] < x) return BusquedaBinaria(x, v, ini, medio-1);
        else return BusquedaBinaria(x, v, medio+1, fin);
}
  
