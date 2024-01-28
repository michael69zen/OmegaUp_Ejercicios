#include <iostream>

using namespace std;

int binarioADecimal(int binario) {
    int decimal = 0, base = 1;

    while (binario != 0) {
        int digito = binario % 10;
        decimal += digito * base;
        base *= 2;
        binario /= 10;
    }

    return decimal;
}

int main() {
    // Entrada del número binario
    int numeroBinario;

    cout << "Ingrese un numero binario: ";
    cin >> numeroBinario;

    // Convertir el número binario a decimal
    int resultadoDecimal = binarioADecimal(numeroBinario);

    // Mostrar el resultado
    cout << "El numero binario " << numeroBinario << " en decimal es: " << resultadoDecimal << endl;

    return 0;
}
