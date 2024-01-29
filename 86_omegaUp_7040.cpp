#include <iostream>

using namespace std;

int main() {
    // Leer los dos números A y B
    int A, B;
    cin >> A >> B;

    // Calcular el último dígito de la multiplicación
    int resultado = (A * B) % 10;

    // Mostrar el resultado
    cout << resultado << endl;

    return 0;
}
