#include <iostream>

using namespace std;

int main() {
    // Declarar e inicializar la matriz
    int matriz[3][3];

    // Entrada de la matriz
    cout << "Ingrese la matriz de 3x3 separando cada elemento por espacios:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Verificar si las diagonales son iguales
    bool diagonalesIguales = true;
    for (int i = 0; i < 2; ++i) {
        if (matriz[i][i] != matriz[i + 1][i + 1] || matriz[i][2 - i] != matriz[i + 1][1 - i]) {
            diagonalesIguales = false;
            break;
        }
    }

    // Mostrar el resultado
    if (diagonalesIguales) {
        cout << "Tesoro encontrado" << endl;
    } else {
        cout << "Sigue buscando" << endl;
    }

    return 0;
}
