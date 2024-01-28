#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Leer el número de carretes (N)
    int N;
    cout << "Ingrese el número de carretes (entre 2 y 200): ";
    cin >> N;

    if (N < 2 || N > 200) {
        cout << "Número de carretes fuera del rango permitido." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Leer los precios iniciales y finales como cadenas de caracteres
    string precioInicial, precioFinal;
    cout << "Ingrese el precio inicial: ";
    cin >> precioInicial;
    cout << "Ingrese el precio final: ";
    cin >> precioFinal;

    // Verificar que las cadenas tengan la misma longitud
    if (precioInicial.length() != N || precioFinal.length() != N) {
        cout << "Las cadenas de precios deben tener longitud " << N << "." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Calcular el número total de pasos
    int totalPasos = 0;

    for (int i = 0; i < N; ++i) {
        int digitoInicial = precioInicial[i] - '0';
        int digitoFinal = precioFinal[i] - '0';

        int pasosEnSentidoDirecto = abs(digitoFinal - digitoInicial);
        int pasosEnSentidoInverso = 10 - pasosEnSentidoDirecto;

        totalPasos += min(pasosEnSentidoDirecto, pasosEnSentidoInverso);
    }

    // Mostrar el resultado
    cout << "El número total de pasos es: " << totalPasos << endl;

    return 0;
}
