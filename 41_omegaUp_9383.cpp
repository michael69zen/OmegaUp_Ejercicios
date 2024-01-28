#include <iostream>

using namespace std;

int main() {
    int A, B;

    // Solicitar al usuario los dos números
    cout << "Ingrese dos números separados por un espacio (A B): ";
    cin >> A >> B;

    // Verificar que A y B estén en el rango permitido
    if (A < 1 || B < A || B >= 100) {
        cout << "Los números deben cumplir con 1 <= A <= B < 100." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Calcular la suma de A y B
    int resultado = A + B;

    // Imprimir el resultado
    cout << "La suma de " << A << " y " << B << " es: " << resultado << endl;

    return 0;
}
