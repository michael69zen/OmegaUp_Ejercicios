#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> montos;

    // Leer la secuencia de montos de compra
    cout << "Ingrese los montos de compra (ingrese un valor negativo para finalizar):" << endl;
    double monto;
    while (true) {
        cin >> monto;
        if (monto < 0) {
            break;
        }
        montos.push_back(monto);
    }

    // Calcular y mostrar el monto a pagar para cada cliente
    for (double monto : montos) {
        double monto_a_pagar;

        if (monto < 500) {
            monto_a_pagar = monto;
        } else if (monto <= 1000) {
            monto_a_pagar = monto * 0.95;  // 5% de descuento
        } else if (monto <= 7000) {
            monto_a_pagar = monto * 0.89;  // 11% de descuento
        } else if (monto <= 15000) {
            monto_a_pagar = monto * 0.82;  // 18% de descuento
        } else {
            monto_a_pagar = monto * 0.75;  // 25% de descuento
        }

        cout << "Monto a pagar: $" << monto_a_pagar << endl;
    }

    return 0;
}
