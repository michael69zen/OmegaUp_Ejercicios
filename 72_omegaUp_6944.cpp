#include <iostream>


using namespace std;

int main() {
    double h, p;
    cin >> h >> p;

    // Calcular el IMC
    double imc = p / (h * h);

    // Redondear el IMC a 2 decimales
    cout.precision(2);

    cout << "IMC: " << imc << endl;

    // Determinar la categoría
    if (imc < 18.5) {
        cout << "Infra Peso" << endl;
    } else if (imc < 24.9) {
        cout << "Peso Normal" << endl;
    } else if (imc < 29.9) {
        cout << "Sobre Peso" << endl;
    } else if (imc < 34.9) {
        cout << "Obesidad Leve" << endl;
    } else if (imc < 39.9) {
        cout << "Obesidad Media" << endl;
    } else {
        cout << "Obesidad Morbida" << endl;
    }

    return 0;
}
