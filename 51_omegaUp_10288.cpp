#include <iostream>

using namespace std;

int main() {
    int dias;

    // Ingresar la cantidad de días
    cout << "Ingrese la cantidad de días: ";
    cin >> dias;

    // Calcular el número de segundos
    int segundos = dias * 24 * 60 * 60;

    // Mostrar el resultado
    cout << "Número de segundos en " << dias << " días: " << segundos << endl;

    return 0;
}
