#include <iostream>

using namespace std;

int main() {
    int T, B;
    cin >> T >> B;

    // Calcular el número de tamales que se comerá el líder
    int tamales_lider = T / B;

    // Si hay tamales sobrantes, el líder se queda con uno más
    if (T % B != 0) {
        tamales_lider++;
    }

    // Mostrar el resultado
    cout << tamales_lider << endl;

    return 0;
}
