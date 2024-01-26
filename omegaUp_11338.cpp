#include <iostream>

using namespace std;

int main() {
    int N;

    // Pedir al usuario que ingrese la longitud y altura de la escalera
    cout << "Ingresa la longitud y altura de la escalera (N): ";
    cin >> N;

    // Imprimir la escalera
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j < i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
