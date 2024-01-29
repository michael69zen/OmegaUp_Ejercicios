#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de números que tiene Fausto: ";
    cin >> n;

    vector<int> numeros(n);
    cout << "Ingrese los " << n << " números separados por espacios: ";
    for (int i = 0; i < n; ++i) {
        cin >> numeros[i];
    }

    bool encontrado = false;

    // Verificar si el número favorito "8" está presente
    for (int i = 0; i < n; ++i) {
        if (numeros[i] == 8) {
            encontrado = true;
            break; // Salir del bucle si se encuentra el número
        }
    }

    int resultado;
    if (encontrado) {
        resultado = 1;
    } else {
        resultado = 0;
    }

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
