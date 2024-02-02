#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    // Definir la tabla de precios
    vector<vector<int>> precios(4, vector<int>(4));
    
    // Entrada de los precios
    cout << "Ingrese los precios de los platos (4x4 matriz):" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> precios[i][j];
        }
    }

    // Entrada de platos rotos
    int N;
    cout << "Ingrese la cantidad de platos rotos (N): ";
    cin >> N;

    // Utilizamos unordered_map para contar la cantidad de cada tipo de vajilla rota
    unordered_map<char, int> platosRotos;
    cout << "Ingrese los platos rotos en el formato VajillaTamaño (Ejemplo: A2):" << endl;
    for (int i = 0; i < N; ++i) {
        string plato;
        cin >> plato;
        platosRotos[plato[0]]++;  // Usar el primer carácter de la cadena como identificador de vajilla
    }

    // Calcular el descuento total
    int descuentoTotal = 0;
    for (const auto& kv : platosRotos) {
        char vajilla = kv.first;
        int cantidad = kv.second;

        // Obtener los precios de la vajilla
        const vector<int>& preciosVajilla = precios[vajilla - 'A'];

        // Calcular el descuento para cada vajilla rota
        for (int j = 0; j < 4; ++j) {
            descuentoTotal += preciosVajilla[j] * cantidad;
        }

        // Aplicar descuento por comprar la vajilla completa
        descuentoTotal -= 10 * cantidad;
    }

    cout << "El descuento total es: $" << descuentoTotal << endl;

    return 0;
}
