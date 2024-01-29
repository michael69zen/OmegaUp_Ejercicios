#include <iostream>

using namespace std;

int main() {
    int K;
    cin >> K;

    int monedas[K];
    for (int i = 0; i < K; ++i) {
        cin >> monedas[i];
    }

    // Encontrar la moneda más grande
    int monedaMasGrande = monedas[0];
    for (int i = 1; i < K; ++i) {
        if (monedas[i] > monedaMasGrande) {
            monedaMasGrande = monedas[i];
        }
    }

    // Calcular el resultado y decidir qué pizza pedir
    int resultado = (monedaMasGrande + 2) * monedaMasGrande;
    if (resultado % 2 == 0) {
        cout << "hawaiiana" << endl;
    } else {
        cout << "pepperoni" << endl;
    }

    return 0;
}
