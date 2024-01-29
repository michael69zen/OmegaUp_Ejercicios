#include <iostream>

// Permite usar cout y cin directamente sin tener que poner std:: delante
using namespace std;

int main() {
    // Variables para almacenar los números vistos en la televisión
    int numero1, numero2, numero3;

    // Solicitar al usuario ingresar los números
    cout << "Ingrese el primer número: ";
    cin >> numero1;

    cout << "Ingrese el segundo número: ";
    cin >> numero2;

    cout << "Ingrese el tercer número: ";
    cin >> numero3;

    // Multiplicar cada número por 7 y mostrar los resultados
    int resultado1 = numero1 * 7;
    int resultado2 = numero2 * 7;
    int resultado3 = numero3 * 7;

    cout << "Resultado 1: " << resultado1 << endl;
    cout << "Resultado 2: " << resultado2 << endl;
    cout << "Resultado 3: " << resultado3 << endl;

    return 0;
}
