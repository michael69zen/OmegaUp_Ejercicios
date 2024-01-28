#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    // Entrada del tamaño del arreglo
    int N;
    cout << "Ingrese el tamaño del arreglo (N): ";
    cin >> N;

    // Verificar que N esté en el rango permitido
    if (N < 1 || N > 1000) {
        cout << "N debe estar en el rango [1, 1000]." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Entrada de los elementos del arreglo
    int arreglo[N];
    cout << "Ingrese los " << N << " elementos del arreglo:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> arreglo[i];
    }

    // Ordenar el arreglo de mayor a menor
    sort(arreglo, arreglo + N, greater<int>());

    // Calcular la longitud del intervalo más grande
    int longitudMaxima = 0;
    for (int i = 1; i < N; ++i) {
        longitudMaxima = max(longitudMaxima, arreglo[i - 1] - arreglo[i]);
    }

    // Mostrar el resultado
    cout << "La longitud del intervalo más grande es: " << longitudMaxima << endl;

    return 0;
}
