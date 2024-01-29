#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    // Calcular porcentaje en masa usando la fórmula p = (n / (n + k)) * 100
    double porcentaje = (static_cast<double>(n) / (n + k)) * 100;

    // Mostrar el resultado redondeado a dos decimales
    cout << fixed << setprecision(2) << porcentaje << endl;

    return 0;
}
