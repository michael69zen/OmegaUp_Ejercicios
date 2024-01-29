#include <iostream>

using namespace std;

int main() {
    int lada;
    cin >> lada;

    switch (lada) {
        case 614:
            cout << "Chihuahua" << endl;
            break;
        case 656:
            cout << "Ciudad Juarez" << endl;
            break;
        // Agregar más casos según las claves lada de Chihuahua
        default:
            cout << "Clave lada no identificada" << endl;
    }

    return 0;
}
