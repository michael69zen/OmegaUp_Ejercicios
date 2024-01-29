#include <iostream>

using namespace std;

int main() {
    double Q, t;

    // Entrada de datos
    cout << "Ingrese la carga eléctrica (Q): ";
    cin >> Q;

    cout << "Ingrese el tiempo (t): ";
    cin >> t;

    // Calcular la intensidad de corriente
    double I = Q / t;

    // Mostrar resultado
    cout << "La intensidad de corriente es: " << I << " A" << endl;

    return 0;
}
