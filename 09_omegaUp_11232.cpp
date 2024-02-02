#include <iostream>
#include <string>

using namespace std;

int main() {
    // Entrada de la palabra y la letra
    string palabra;
    char letra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    cout << "Ingrese la letra para contar (l): ";
    cin >> letra;

    // Contar la frecuencia de la letra en la palabra
    int frecuencia = 0;
    for (char c : palabra) {
        if (c == letra) {
            frecuencia++;
        }
    }

    // Mostrar el resultado
    cout << "La letra '" << letra << "' aparece " << frecuencia << " veces en la palabra '" << palabra << "'.\n";

    return 0;
}
