#include <iostream>
#include <vector>
#include "BB_INV.h"

using namespace std;


int main(){
        vector<float> V = {10.0, 9.9, 8.8, 7.7, 6.6, 5.5, 4.4, 3.3, 2.2, 1.1};
        float X;
        cout << "Escribe el valor que buscas: ";
        cin >> X;

        int pos = BusquedaBinaria(X, V, 0, 9);
        cout << "La posición del valor que buscas es: " << pos << endl;
return 0;
}
