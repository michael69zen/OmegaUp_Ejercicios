#include <iostream>

using namespace std;

int main() {
    int N, K;

    // Leer el tamaño del arreglo
    cin >> N;

    // Leer los elementos del arreglo
    int arreglo[N];
    for (int i = 0; i < N; ++i) {
        cin >> arreglo[i];
    }

    // Leer el número de elementos a ignorar
    cin >> K;

    // Imprimir el arreglo ignorando los últimos K elementos
    for (int i = 0; i < N - K; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
