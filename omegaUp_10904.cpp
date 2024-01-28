#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Entrada de las coordenadas
    int Xa, Ya, Xb, Yb;
    cout << "Ingrese las coordenadas Xa Ya Xb Yb separadas por espacios: ";
    cin >> Xa >> Ya >> Xb >> Yb;

    // Calcular la distancia entre A y B
    double distancia = sqrt(pow(Xb - Xa, 2) + pow(Yb - Ya, 2));

    // Determinar si mantienen una sana o insana distancia
    if (distancia >= 150) {
        cout << "sana" << endl;
    } else {
        cout << "insana" << endl;
    }

    return 0;
}
