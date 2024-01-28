#include <iostream>

using namespace std;

int main() {
    // Leer el valor de N desde la entrada estándar
    int N;
    cout << "Ingrese el valor de N: ";
    cin >> N;

    // Calcular la suma de los números naturales de 1 a N
    int suma = (N * (N + 1)) / 2;

    // Mostrar el resultado
    cout << "La suma de los números naturales de 1 a " << N << " es: " << suma << endl;

    return 0;
}
