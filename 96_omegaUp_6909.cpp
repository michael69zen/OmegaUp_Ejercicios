#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, k, s;
    cin >> n >> k >> s;

    // Calcular el porcentaje en volumen
    double porcentaje = (n / (n + k)) * 100.0;

    // Mostrar el resultado redondeado a dos decimales
    cout << fixed << setprecision(2) << porcentaje << endl;

    return 0;
}
