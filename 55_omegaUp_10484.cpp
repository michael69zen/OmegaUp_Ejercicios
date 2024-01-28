#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    int A, B, C, D, E;

    // Ingresar cinco números
    cout << "Ingrese cinco números enteros separados por espacios: ";
    cin >> A >> B >> C >> D >> E;

    // Encontrar el menor y el mayor
    int menor = A;
    int mayor = A;

    if (B < menor) menor = B;
    if (C < menor) menor = C;
    if (D < menor) menor = D;
    if (E < menor) menor = E;

    if (B > mayor) mayor = B;
    if (C > mayor) mayor = C;
    if (D > mayor) mayor = D;
    if (E > mayor) mayor = E;

    // Mostrar el menor y el mayor
    cout << "Menor: " << menor << endl;
    cout << "Mayor: " << mayor << endl;

    return 0;
}
