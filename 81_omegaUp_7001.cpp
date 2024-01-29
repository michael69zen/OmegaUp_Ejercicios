#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double R;
    cin >> R;

    // Paso 1: Calcular R + 5
    double paso1 = R + 5;

    // Paso 2: Elevar el resultado al cuadrado
    double paso2 = pow(paso1, 2);

    // Paso 3: Dividir entre un tercio del número original R
    double paso3 = paso2 / (R / 3.0);

    // Paso 4: Elevar el resultado al cubo
    double paso4 = pow(paso3, 3);

    // Mostrar resultados
    cout << R << " " << paso1 << " " << paso2 << " " << paso3 << " " << paso4 << endl;

    return 0;
}
