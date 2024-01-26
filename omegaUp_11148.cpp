#include <iostream>

using namespace std;

int main() {
    int n, m;

    // Pedir al usuario que ingrese la fracción n/m
    cout << "Ingresa la fracción en formato n/m: ";
    cin >> n >> m;

    // Verificar si la entrada es válida
    if (cin.fail() || m == 0) {
        cout << "Por favor, ingresa una fracción válida." << endl;
        return 1;
    }

    // Calcular a y b
    int a = n / m;
    int b = n % m;

    // Imprimir la representación en la forma a b/m o solo a
    if (b != 0) {
        cout << a << " " << b << "/" << m << endl;
    } else {
        cout << a << endl;
    }

    return 0;
}
