#include <iostream>

using namespace std;

int main() {
    // Leer tres números enteros
    int N, M, A;
    cin >> N >> M >> A;

    // Verificar si los tres números son iguales
    if (N == M && M == A) {
        cout << "ELLA TE AMA" << endl;
    } else {
        cout << "ELLA NO TE AMA" << endl;
    }

    return 0;
}
