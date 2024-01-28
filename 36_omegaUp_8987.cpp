#include <iostream>

using namespace std;

int main() {
    string palabra;
    cout << "Ingrese una palabra: ";
    cin>>palabra;

    int contador = 0;
    for (char caracter : palabra) {
        if (isalpha(caracter)) {
            contador++;
        }
    }

    cout << "El número de letras en la palabra es: " << contador << endl;

    return 0;
}
