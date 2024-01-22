#include <iostream>
using namespace std;


// Función para realizar un retiro
void realizarRetiro(float& saldo, float monto) {
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso. Saldo restante: $" << saldo << endl;
    } else {
        cout << "Error: Monto inválido o insuficiente saldo." << endl;
    }
}

// Función para realizar un depósito
void realizarDeposito(float& saldo, float monto) {
    if (monto > 0) {
        saldo += monto;
        cout << "Depósito exitoso. Saldo actual: $" << saldo << endl;
    } else {
        cout << "Error: Monto de depósito inválido." << endl;
    }
}

// Función para consultar el saldo
void consultarSaldo(float saldo) {
    cout << "Saldo disponible: $" << saldo << endl;
}

int main() {

    cout<<"PENSAMIENTO_COMPUTACIONAL"<<endl;
    cout<<"Ing. Miguel ACEITUNO ROJO"<<endl;
    cout<<"Est. Cristhian Michael JALLO PAREDES"<<endl;
    cout<<"Codigo_236543"<<endl;
    cout<<"***************************************"<<endl;


    // Saldo inicial
    float saldo = 1000.0;

    char opcion;
    float monto;

    do {
        cout << "Ingrese 'R' para retirar, 'D' para depositar, 'C' para consultar saldo, 'S' para salir: ";
        cin >> opcion;

        switch (opcion) {
            case 'R':
                cout << "Ingrese monto a retirar: ";
                cin >> monto;
                realizarRetiro(saldo, monto);
                break;

            case 'D':
                cout << "Ingrese monto a depositar: ";
                cin >> monto;
                realizarDeposito(saldo, monto);
                break;

            case 'C':
                consultarSaldo(saldo);
                break;

            case 'S':
                cout << "Gracias por utilizar el cajero automático." << endl;
                break;

            default:
                cout << "Opción no válida. Inténtelo de nuevo." << endl;
        }
    } while (opcion != 'S');

    return 0;
}
