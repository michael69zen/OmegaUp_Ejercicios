#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de alumnos en el salón: ";
    cin >> n;

    if (n <= 0) {
        cout << "El número de alumnos debe ser positivo." << endl;
        return 1;  // Terminar el programa con código de error
    }

    int totalLapiceras = 0;

    for (int i = 0; i < n; ++i) {
        int lapiceras;
        cout << "Ingrese la cantidad de lapiceras del alumno " << (i + 1) << ": ";
        cin >> lapiceras;

        if (lapiceras < 0) {
            cout << "La cantidad de lapiceras no puede ser negativa." << endl;
            return 1;  // Terminar el programa con código de error
        }

        totalLapiceras += lapiceras;
    }

    double promedio = static_cast<double>(totalLapiceras) / n;

    cout << "El promedio de lapiceras es: " << promedio << endl;

    return 0;
}
