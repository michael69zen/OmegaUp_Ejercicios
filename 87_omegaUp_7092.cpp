#include <iostream>

using namespace std;

// Función para determinar si un año es bisiesto
bool esBisiesto(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true; // Es bisiesto
    } else {
        return false; // No es bisiesto
    }
}

// Función para calcular el número de días de febrero en un año
int diasFebrero(int year) {
    if (esBisiesto(year)) {
        return 29; // Febrero tiene 29 días en un año bisiesto
    } else {
        return 28; // Febrero tiene 28 días en un año no bisiesto
    }
}

int main() {
    // Leer los cuatro años
    int A1, A2, A3, A4;
    cin >> A1 >> A2 >> A3 >> A4;

    // Calcular y mostrar el número de días de febrero para cada año
    cout << diasFebrero(A1) << endl;
    cout << diasFebrero(A2) << endl;
    cout << diasFebrero(A3) << endl;
    cout << diasFebrero(A4) << endl;

    return 0;
}
