#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Ingrese el número de palabras: ";
    cin >> n;

    string palabra, menorPalabra;
    int menorLongitud = INT_MAX;  // Inicializar con un valor muy grande para comparar

    for (int i = 0; i < n; ++i) {
        cout << "Ingrese la palabra #" << i + 1 << ": ";
        cin >> palabra;

        if (palabra.length() < menorLongitud) {
            menorLongitud = palabra.length();
            menorPalabra = palabra;
        }
    }

    string paridad = (menorLongitud % 2 == 0) ? "par" : "impar";

    cout << "La palabra con menos caracteres es: " << menorPalabra << endl;
    cout << "Cantidad de caracteres: " << menorLongitud << endl;
    cout << "La longitud de la palabra es " << paridad << "." << endl;

    return 0;
}
