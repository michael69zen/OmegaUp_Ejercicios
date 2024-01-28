#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int años[10];

    // Ingresar diez años
    cout << "Ingrese diez años separados por espacios: ";
    for (int i = 0; i < 10; ++i) {
        cin >> años[i];
    }

    // Contar los años bisiestos
    int añosBisiestos = 0;

    for (int i = 0; i < 10; ++i) {
        if ((años[i] % 4 == 0 && años[i] % 100 != 0) || (años[i] % 400 == 0)) {
            añosBisiestos++;
        }
    }

    // Mostrar el resultado
    cout << "Número total de años bisiestos: " << añosBisiestos << endl;

    return 0;
}
