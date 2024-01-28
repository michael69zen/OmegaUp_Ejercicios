#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int n, m;

    // Ingresar los números
    cout << "Ingrese el primer número (n): ";
    cin >> n;

    cout << "Ingrese el segundo número (m): ";
    cin >> m;

    // Calcular el punto medio
    int puntoMedio = (n + m) / 2;

    // Mostrar el resultado
    cout << "El punto medio es: " << puntoMedio << endl;

    return 0;
}
