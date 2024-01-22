#include <iostream>
using namespace std;


// Funci�n para realizar un retiro
void realizarRetiro(float& saldo, float monto) {
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso. Saldo restante: $" << saldo << endl;
    } else {
        cout << "Error: Monto inv�lido o insuficiente saldo." << endl;
    }
}

// Funci�n para realizar un dep�sito
void realizarDeposito(float& saldo, float monto) {
    if (monto > 0) {
        saldo += monto;
        cout << "Dep�sito exitoso. Saldo actual: $" << saldo << endl;
    } else {
        cout << "Error: Monto de dep�sito inv�lido." << endl;
    }
}

// Funci�n para consultar el saldo
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
                cout << "Gracias por utilizar el cajero autom�tico." << endl;
                break;

            default:
                cout << "Opci�n no v�lida. Int�ntelo de nuevo." << endl;
        }
    } while (opcion != 'S');

    return 0;
}
