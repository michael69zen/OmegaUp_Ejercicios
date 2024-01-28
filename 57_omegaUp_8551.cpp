#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int x, y, z;

    // Entrada de datos
    cout << "Ingrese las longitudes de los lados del triángulo (x y z): ";
    cin >> x >> y >> z;

    // Determinar el tipo de triángulo
    if (x == y && y == z) {
        cout << "equilatero" << endl;
    } else if (x == y || y == z || z == x) {
        cout << "isosceles" << endl;
    } else {
        cout << "escaleno" << endl;
    }

    return 0;
}
