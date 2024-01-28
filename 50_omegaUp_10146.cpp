#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese el número de carritos (N): ";
    cin >> N;

    int posiciones[N];
    int velocidades[N];

    for (int i = 0; i < N; ++i) {
        cout << "Ingrese posición y velocidad del carrito " << i + 1 << ": ";
        cin >> posiciones[i] >> velocidades[i];
    }

    double tiempoChoque = -1;
    int indiceCarrito1 = -1, indiceCarrito2 = -1;

    for (int i = 0; i < N - 1; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if (velocidades[i] != velocidades[j]) {
                double tiempo = static_cast<double>(posiciones[j] - posiciones[i]) /
                                static_cast<double>(velocidades[i] - velocidades[j]);

                if (tiempo >= 0 && (tiempoChoque == -1 || tiempo < tiempoChoque)) {
                    tiempoChoque = tiempo;
                    indiceCarrito1 = i + 1;
                    indiceCarrito2 = j + 1;
                }
            }
        }
    }

    if (tiempoChoque == -1) {
        cout << "No hay choques entre carritos." << endl;
    } else {
        cout << "El primer choque ocurre en el tiempo T = " << tiempoChoque << endl;
        cout << "Índices de los carritos involucrados: " << indiceCarrito1 << " y " << indiceCarrito2 << endl;
    }

    return 0;
}
