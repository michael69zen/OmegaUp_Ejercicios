#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Declarar variables para los precios y descuentos
    double p1, p2, p3, c1, c2, c3;

    // Solicitar al usuario que ingrese los precios y descuentos
    cout << "Ingrese los precios de los productos (p1 p2 p3): ";
    cin >> p1 >> p2 >> p3;

    cout << "Ingrese los descuentos de los cupones (c1 c2 c3): ";
    cin >> c1 >> c2 >> c3;

    // Calcular el ahorro usando cada opción
    double ahorroCupon1 = (p1 + p2 + p3) * (c1 / 100);
    double ahorroCupon2 = (p1 * (c2 / 100)) + (p2 + p3);
    double ahorroCupon3 = (p2 * (c3 / 100)) + (p1 + p3);

    // Determinar la opción que ahorra más
    if (ahorroCupon1 >= ahorroCupon2 && ahorroCupon1 >= ahorroCupon3) {
        // Usar solo c1
        cout << "ONE " << fixed << setprecision(2) << ahorroCupon1 << endl;
    } else {
        // Usar c2 y c3
        cout << "TWO " << fixed << setprecision(2) << max(ahorroCupon2, ahorroCupon3) << endl;
    }

    return 0;
}
