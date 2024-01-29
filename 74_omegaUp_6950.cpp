#include <iostream>

using namespace std;

int main() {
    // Tamaño de la cuadrícula
    const int n = 10;

    // Inicializar alturas de secciones
    int alturas[n][n];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            alturas[i][j] = 1;
        }
    }

    // Entrada de datos
    int k;
    cout << "Ingrese el número de semanas (k): ";
    cin >> k;

    // Procesar cada semana
    for (int semana = 0; semana < k; ++semana) {
        // Filas y columnas seleccionadas para cortar
        int filas[3], columnas[3];
        cout << "Ingrese las filas y columnas seleccionadas para cortar en la semana " << semana + 1 << ": ";
        for (int i = 0; i < 3; ++i) {
            cin >> filas[i];
        }
        for (int i = 0; i < 3; ++i) {
            cin >> columnas[i];
        }

        // Actualizar alturas
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                alturas[filas[i] - 1][columnas[j] - 1] = 1;
            }
        }
    }

    // Mostrar la altura final de cada sección
    cout << "Altura final de la cuadrícula:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << alturas[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
