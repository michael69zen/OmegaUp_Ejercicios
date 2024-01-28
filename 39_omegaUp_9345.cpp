#include <iostream>

using namespace std;

int main() {
    int N;

    // Solicitar al usuario el valor de N
    cout << "Ingrese un número positivo N (menor a 100000): ";
    cin >> N;

    // Verificar que N esté en el rango permitido
    if (N < 1 || N >= 100000) {
        cout << "N debe ser un número positivo menor a 100000." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Imprimir "Bienvenido a C++" N veces
    for (int i = 0; i < N; ++i) {
        cout << "Bienvenido a C++";
        if (i < N - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
