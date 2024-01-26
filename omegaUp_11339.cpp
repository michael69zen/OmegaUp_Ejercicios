#include <iostream>

using namespace std;

int main() {
    int A, B;

    // Pedir al usuario que ingrese los números A y B
    cout << "Ingresa el número A: ";
    cin >> A;

    cout << "Ingresa el número B: ";
    cin >> B;

    // Verificar si las entradas son válidas
    if (cin.fail()) {
        cout << "Por favor, ingresa números enteros válidos." << endl;
        return 1;
    }

    // Imprimir la lista de números desde A hasta B
    for (int i = A; i <= B; ++i) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
