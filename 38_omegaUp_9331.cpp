#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Solicitar al usuario los valores de a, b y c
    cout << "Ingrese el valor de a: ";
    cin >> a;
    cout << "Ingrese el valor de b: ";
    cin >> b;
    cout << "Ingrese el valor de c: ";
    cin >> c;

    // Calcular el volumen total
    int volumenTotal = a * b * c;

    // Mostrar el resultado
    cout << "El volumen total de las cajas es: " << volumenTotal << endl;

    return 0;
}
