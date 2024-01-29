#include <iostream>
#include <string>

using namespace std;

int main() {
    string mensaje;
    cin >> mensaje;

    int mitad = mensaje.length() / 2;
    string primera_mitad = mensaje.substr(0, mitad);
    string segunda_mitad = mensaje.substr(mitad);

    // Calcular los valores de rotación
    int rotacion_primera = 0, rotacion_segunda = 0;
    for (char ch : primera_mitad) {
        rotacion_primera += ch - 'A';
    }
    for (char ch : segunda_mitad) {
        rotacion_segunda += ch - 'A';
    }

    // Rotar cada carácter de las mitades
    for (char &ch : primera_mitad) {
        ch = (ch - 'A' + rotacion_segunda) % 26 + 'A';
    }
    for (char &ch : segunda_mitad) {
        ch = (ch - 'A' + rotacion_primera) % 26 + 'A';
    }

    // Unir las mitades para obtener el mensaje descifrado
    string mensaje_descifrado;
    for (int i = 0; i < mitad; ++i) {
        mensaje_descifrado += (primera_mitad[i] - 'A' + segunda_mitad[i] - 'A') % 26 + 'A';
    }

    cout << mensaje_descifrado << endl;

    return 0;
}
