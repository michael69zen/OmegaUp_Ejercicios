#include <iostream>
#include <vector>

using namespace std;

int encontrar_mediana(const vector<int>& lista_ordenada) {
    int n = lista_ordenada.size();

    if (n % 2 == 1) {
        // Si la cantidad de elementos es impar, devolver el valor en la posición central
        return lista_ordenada[n / 2];
    } else {
        // Si la cantidad de elementos es par, devolver el promedio de los dos valores centrales
        int centro1 = lista_ordenada[(n - 1) / 2];
        int centro2 = lista_ordenada[n / 2];
        return (centro1 + centro2) / 2;
    }
}

int main() {
    // Lectura de la entrada
    int n;
    cin >> n;

    vector<int> lista_ordenada(n);
    for (int i = 0; i < n; ++i) {
        cin >> lista_ordenada[i];
    }

    // Calcular y mostrar la mediana
    int mediana = encontrar_mediana(lista_ordenada);
    cout << mediana << endl;

    return 0;
}
