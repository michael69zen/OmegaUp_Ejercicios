#include <iostream>
#include <cmath>

using namespace std;

int contarCifras(int numero) {
    int cifras = 0;
    while (numero > 0) {
        numero /= 10;
        cifras++;
    }
    return cifras;
}

bool esNarcisista(int numero) {
    int original = numero;
    int cifras = contarCifras(numero);
    int suma = 0;

    while (numero > 0) {
        int digito = numero % 10;
        suma += pow(digito, cifras);
        numero /= 10;
    }

    return suma == original;
}

int main() {
    // Entrada del número
    int x;
    cout << "Ingrese un número entero (mayor que 1 y menor que 500000): ";
    cin >> x;

    // Verificar que el número esté en el rango permitido
    if (x <= 1 || x >= 500000) {
        cout << "El número debe estar en el rango (1, 500000)." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Determinar si el número es narcisista y mostrar el resultado
    if (esNarcisista(x)) {
        cout << "Es Narcisista" << endl;
    } else {
        cout << "No es Narcisista" << endl;
    }

    return 0;
}
