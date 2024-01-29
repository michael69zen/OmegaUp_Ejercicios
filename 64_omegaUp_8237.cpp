#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número entero: ";
    cin >> numero;

    // Determinar la posición del número en la recta numérica
    if (numero > 0) {
        cout << "Right" << endl;
    } else if (numero < 0) {
        cout << "Left" << endl;
    } else {
        cout << "Zero" << endl;
    }

    return 0;
}
