#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n;
    cin >> n;

    // Volumen ocupado por n moles en condiciones normales (24.45 litros/mol)
    double volumen = n * 24.45;

    // Mostrar el resultado redondeado a tres decimales
    cout << fixed << setprecision(3) << volumen << endl;

    return 0;
}
