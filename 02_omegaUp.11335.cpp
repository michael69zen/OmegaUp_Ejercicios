#include <iostream>

using namespace std;

int main() {
    int gatoA, gatoB, ratonC;

    // Pedir al usuario que ingrese las posiciones de los gatos y el ratón
    cout << "Ingresa las posiciones de los gatos A, B y del ratón C (separadas por un espacio): ";
    cin >> gatoA >> gatoB >> ratonC;

    // Verificar si las entradas son válidas
    if (cin.fail() || gatoA < 1 || gatoB < 1 || ratonC < 1 || gatoA > 100 || gatoB > 100 || ratonC > 100) {
        cout << "Por favor, ingresa posiciones válidas." << endl;
        return 1;
    }

    // Calcular las distancias de los gatos al ratón
    int distanciaGatoA = abs(gatoA - ratonC);
    int distanciaGatoB = abs(gatoB - ratonC);

    // Determinar cuál gato alcanzará al ratón primero
    if (distanciaGatoA < distanciaGatoB) {
        cout << "gato A" << endl;
    } else if (distanciaGatoB < distanciaGatoA) {
        cout << "gato B" << endl;
    } else {
        cout << "raton C" << endl;
    }

    return 0;
}
