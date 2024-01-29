#include <iostream>

using namespace std;

int main() {
    // Entrada
    int ganancias, perdidas;
    cin >> ganancias >> perdidas;

    // Verificación del estado del negocio
    if (ganancias > perdidas) {
        cout << "El negocio si es Rentable " << endl;
        cout << "Ganancias: " << ganancias << endl;
    } else {
        cout << "Dejalo ya esta muerto" << endl;
        cout << "Perdidas: " << perdidas << endl;
    }

    return 0;
}
