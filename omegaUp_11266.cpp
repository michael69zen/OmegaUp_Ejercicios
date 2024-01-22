#include <iostream>

using namespace std;

int main() {
    // Variables para almacenar los valores de a y b
    int a, b;

    // Solicitar al usuario que ingrese a y b
    cout << "Ingrese el valor de a y b separados por un espacio: ";
    cin >> a >> b;

    // Imprimir los múltiplos de a en el rango de a a b
    cout << "Multiplos de " << a << " en el rango de " << a << " a " << b << ":" << endl;

    for (int i = a; i <= b; i += a) {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}
