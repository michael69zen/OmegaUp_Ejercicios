#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Lectura de la entrada
    int N;
    cin >> N;

    vector<int> arreglo(N);

    // Lectura de los elementos del arreglo
    for (int i = 0; i < N; ++i) {
        cin >> arreglo[i];
    }

    // Buscar y mostrar los números pares
    bool hay_numeros_pares = false;

    cout << "[";
    for (int i = 0; i < N; ++i) {
        if (arreglo[i] % 2 == 0) {
            // Si el número es par, mostrarlo
            if (hay_numeros_pares) {
                cout << ", ";
            }
            cout << arreglo[i];
            hay_numeros_pares = true;
        }
    }
    cout << "]";

    // Si no hay números pares, mostrar ":("
    if (!hay_numeros_pares) {
        cout << ":(";
    }

    cout << endl;

    return 0;
}
