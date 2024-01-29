#include <iostream>
#include <cctype>

using namespace std;

int main() {
    cout << "Ingresa un texto (termina con un punto):" << endl;

    char caracter;
    int contadorLetras = 0;

    while (cin >> caracter && caracter != '.') {
        if (isalpha(caracter)) {
            contadorLetras++;
        }
    }

    cout << "El texto contiene " << contadorLetras << " letras." << endl;

    return 0;
}
