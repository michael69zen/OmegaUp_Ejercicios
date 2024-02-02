#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int max_perimetro(int N, vector<int>& longitudes_palitos) {
    // Paso 1: Ordena las longitudes de los palitos de manera descendente
    sort(longitudes_palitos.rbegin(), longitudes_palitos.rend());

    // Paso 2 y 3: Encuentra el máximo perímetro posible
    for (int i = 0; i < N - 2; ++i) {
        int a = longitudes_palitos[i];
        int b = longitudes_palitos[i + 1];
        int c = longitudes_palitos[i + 2];

        if (a < b + c) {
            return a + b + c;  // Devuelve el máximo perímetro posible
        }
    }

    // Paso 4 y 5: Si no es posible construir un triángulo, devuelve -1
    return -1;
}

int main() {
    // Lectura de la entrada
    int N;
    cin >> N;

    vector<int> longitudes_palitos(N);
    for (int i = 0; i < N; ++i) {
        cin >> longitudes_palitos[i];
    }

    // Obtén y muestra la salida
    int resultado = max_perimetro(N, longitudes_palitos);
    cout << resultado << endl;

    return 0;
}
