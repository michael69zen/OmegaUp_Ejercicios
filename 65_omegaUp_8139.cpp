#include <iostream>

using namespace std;

int main() {
    int a, b;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese dos números enteros separados por espacio: ";
    cin >> a >> b;

    // Validar si los números son negativos o si a >= b
    if (a < 0 || b < 0 || a >= b) {
        cout << "Error" << endl;
        return 0;
    }

    // Si el primer número es par, imprimir los impares entre a y b
    if (a % 2 == 0) {
        for (int i = a + 1; i < b; i += 2) {
            cout << i << " ";
        }
    } else { // Si el primer número es impar, imprimir los pares entre a y b
        for (int i = a + (a % 2); i < b; i += 2) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
