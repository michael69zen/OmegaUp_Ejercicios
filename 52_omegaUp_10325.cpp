#include <iostream>
#include <string>

using namespace std;

int main() {
    string palabra;

    // Ingresar la palabra
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Verificar si la palabra es larga y acortarla
    if (palabra.length() > 4) {
        cout << palabra[0] << palabra.length() - 2 << palabra.back() << endl;
    } else {
        cout << palabra << endl;
    }

    return 0;
}
