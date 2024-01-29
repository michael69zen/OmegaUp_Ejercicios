#include <iostream>

using namespace std;

int main() {
    // Declarar variables para intensidad y resistencia
    double intensidad, resistencia;

    // Solicitar al usuario que ingrese la intensidad
    cout << "Ingrese la intensidad (I): ";
    cin >> intensidad;

    // Solicitar al usuario que ingrese la resistencia
    cout << "Ingrese la resistencia (R): ";
    cin >> resistencia;

    // Calcular el voltaje usando la Ley de Ohm: V = I * R
    double voltaje = intensidad * resistencia;

    // Mostrar el resultado
    cout << "El voltaje (V) es: " << voltaje << " voltios" << endl;

    return 0;
}
