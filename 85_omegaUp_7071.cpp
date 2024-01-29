#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Leer el número K
    int K;
    cin >> K;

    // Calcular la probabilidad
    double probabilidad = 1.0 / K;

    // Mostrar el resultado con precisión de 5 decimales
    cout << fixed << setprecision(5) << probabilidad << endl;

    return 0;
}
