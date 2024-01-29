#include <iostream>

using namespace std;

int main() {
    // Entrada
    int n;
    cin >> n;

    // Captura de la lista de valores
    int lista[n];
    for (int i = 0; i < n; ++i) {
        cin >> lista[i];
    }

    // Suma de la multiplicación de cada pareja de datos
    int sumaMultiplicaciones = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            sumaMultiplicaciones += lista[i] * lista[j];
        }
    }

    // Salida
    cout << "Suma de la multiplicación de cada pareja de datos: " << sumaMultiplicaciones << endl;

    return 0;
}
