#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double n, pm;
    cin >> n >> pm;

    // Calcular moles usando la fórmula n = masa / peso molecular
    double moles = n / pm;

    // Mostrar el resultado redondeado a dos decimales
    cout << fixed << setprecision(2) << moles << endl;

    return 0;
}
