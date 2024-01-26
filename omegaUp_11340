#include <iostream>

using namespace std;

string clasificarEdad(int edad) {
    if (edad >= 0 && edad <= 3) {
        return "BEBE";
    } else if (edad >= 4 && edad <= 14) {
        return "NINO";
    } else if (edad >= 15 && edad <= 18) {
        return "JOVEN";
    } else if (edad >= 19 && edad <= 65) {
        return "ADULTO";
    } else {
        return "ADULTO 3RA";
    }
}

int main() {
    int edad;

    // Pedir al usuario que ingrese la edad
    cout << "Ingresa la edad: ";
    cin >> edad;

    // Verificar si la entrada es un número válido
    if (cin.fail()) {
        cout << "Por favor, ingresa un número entero válido." << endl;
        return 1;
    }

    // Obtener y mostrar la categoría de edad
    string resultado = clasificarEdad(edad);
    cout << "La persona es " << resultado << "." << endl;

    return 0;
}
