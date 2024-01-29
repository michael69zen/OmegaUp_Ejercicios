#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Declaración de variables
    double x1, y1, x2, y2, x3, y3;

    // Entrada de datos
    cout << "Ingrese las coordenadas (x, y) del primer punto: ";
    cin >> x1 >> y1;

    cout << "Ingrese las coordenadas (x, y) del segundo punto: ";
    cin >> x2 >> y2;

    cout << "Ingrese las coordenadas (x, y) del tercer punto: ";
    cin >> x3 >> y3;

    // Cálculo del área del triángulo
    double area = 0.5 * abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)));

    // Salida del resultado
    cout << "El área del triángulo es: " << area << endl;

    return 0;
}
