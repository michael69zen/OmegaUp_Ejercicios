#include <iostream>

using namespace std;

int main() {
    int P; // Número de pizzas
    cout << "Ingrese el número de pizzas: ";
    cin >> P;

    int rebanadasTotal = P * 8; // Total de rebanadas de pizza

    int rebanadasComidas[5]; // Rebanadas de pizza comidas por cada amigo
    cout << "Ingrese el número de rebanadas comidas por cada amigo: ";
    for (int i = 0; i < 5; ++i) {
        cin >> rebanadasComidas[i];
    }

    int rebanadasConsumidas = 0; // Total de rebanadas consumidas por todos los amigos
    for (int i = 0; i < 5; ++i) {
        rebanadasConsumidas += rebanadasComidas[i];
    }

    int rebanadasSobrantes = rebanadasTotal - rebanadasConsumidas; // Rebanadas de pizza sobrantes

    if (rebanadasSobrantes > 0) {
        cout << "FF - Foráneo Feliz" << endl;
    } else {
        cout << "FH - Foráneo Hambriento" << endl;
    }

    return 0;
}
