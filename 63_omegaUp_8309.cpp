#include <iostream>

using namespace std;

int main() {
    int lado;
    int perimetro = 0;

    cout << "Ingrese la longitud de los lados (ingrese 0 para finalizar):" << endl;

    // Leer los lados hasta que se ingrese 0
    while (true) {
        cin >> lado;
        
        // Verificar si se ha ingresado 0 para finalizar
        if (lado == 0) {
            break;
        }

        // Corregir valores negativos
        if (lado < 0) {
            lado = -lado;
        }

        // Sumar al perímetro
        perimetro += lado;
    }

    // Mostrar el perímetro calculado
    cout << "El perímetro de la figura es: " << perimetro << endl;

    return 0;
}
