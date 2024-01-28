#include <iostream>

using namespace std;

// Función recursiva para calcular el factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    // Entrada del número
    int N;
    cout << "Ingrese un número entero (menor a 15): ";
    cin >> N;

    // Verificar que el número esté en el rango permitido
    if (N < 0 || N >= 15) {
        cout << "El número debe estar en el rango [0, 14]." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Calcular y mostrar el factorial de N
    int resultado = factorial(N);
    cout << "El factorial de " << N << " es: " << resultado << endl;

    return 0;
}
