#include <iostream>

using namespace std;

int main() {
    int bolita, movimientos;
    cout << "Ingrese la nuez inicial de la bolita (1-4): ";
    cin >> bolita;

    cout << "Ingrese el número de movimientos: ";
    cin >> movimientos;

    for (int i = 0; i < movimientos; ++i) {
        int movimiento;
        cout << "Ingrese el movimiento #" << i + 1 << " (1-6): ";
        cin >> movimiento;

        // Aplicar el movimiento
        switch (movimiento) {
            case 1:  // la 1 por la 2
                if (bolita == 1) bolita = 2;
                else if (bolita == 2) bolita = 1;
                break;
            case 2:  // la 1 por la 3
                if (bolita == 1) bolita = 3;
                else if (bolita == 3) bolita = 1;
                break;
            case 3:  // la 1 por la 4
                if (bolita == 1) bolita = 4;
                else if (bolita == 4) bolita = 1;
                break;
            case 4:  // la 2 por la 3
                if (bolita == 2) bolita = 3;
                else if (bolita == 3) bolita = 2;
                break;
            case 5:  // la 2 por la 4
                if (bolita == 2) bolita = 4;
                else if (bolita == 4) bolita = 2;
                break;
            case 6:  // la 3 por la 4
                if (bolita == 3) bolita = 4;
                else if (bolita == 4) bolita = 3;
                break;
            default:
                cout << "Movimiento inválido. Inténtalo de nuevo." << endl;
                --i;  // Decrementar el índice para repetir el mismo intento
                break;
        }
    }

    cout << "La bolita se encuentra en la nuez: " << bolita << endl;

    return 0;
}
