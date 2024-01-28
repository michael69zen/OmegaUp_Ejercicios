#include <iostream>

using namespace std;

int main() {
    // Declarar una variable para almacenar el nombre
    string nombre;

    // Solicitar al usuario que ingrese su nombre
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    // Imprimir el equivalente ASCII de los primeros cuatro caracteres del nombre
    cout << "Equivalente ASCII de los primeros cuatro caracteres:" << endl;
    for (int i = 0; i < 4 && i < nombre.length(); ++i) {
        char caracter = nombre[i];
        int ascii = static_cast<int>(caracter);
        cout << "Caracter: " << caracter << ", ASCII: " << ascii << endl;
    }

    return 0;
}
