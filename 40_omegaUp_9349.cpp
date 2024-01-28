#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Solicitar al usuario las calificaciones de Jorge, Iris y Zack
    cout << "Ingrese la calificación de Jorge: ";
    cin >> a;
    cout << "Ingrese la calificación de Iris: ";
    cin >> b;
    cout << "Ingrese la calificación de Zack: ";
    cin >> c;

    // Determinar la calificación más alta
    int calificacionMasAlta = a;
    if (b > calificacionMasAlta) {
        calificacionMasAlta = b;
    }
    if (c > calificacionMasAlta) {
        calificacionMasAlta = c;
    }

    // Imprimir la calificación más alta
    cout << "La calificación más alta es: " << calificacionMasAlta << endl;

    return 0;
}
