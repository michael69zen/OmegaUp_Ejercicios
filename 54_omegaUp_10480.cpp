#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int n, m;

    // Ingresar los números
    cout << "Ingrese el valor de n: ";
    cin >> n;

    cout << "Ingrese el valor de m: ";
    cin >> m;

    // Mostrar los números pares en el rango
    cout << "Números pares en el rango [" << n << ", " << m << "]: ";
    for (int i = n; i <= m; ++i) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
