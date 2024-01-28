#include <iostream>

using namespace std;

// Función para aplicar la regla y calcular el nuevo color
int nuevoColor(int izquierdo, int centro, int derecho) {
    if (izquierdo == 0 && centro == 0 && derecho == 0) {
        return 0; // Negro
    } else if (izquierdo == 0 && centro == 0 && derecho == 1) {
        return 1; // Blanco
    } else if (izquierdo == 0 && centro == 1 && derecho == 0) {
        return 0; // Negro
    } else if (izquierdo == 0 && centro == 1 && derecho == 1) {
        return 1; // Blanco
    } else if (izquierdo == 1 && centro == 0 && derecho == 0) {
        return 0; // Negro
    } else if (izquierdo == 1 && centro == 0 && derecho == 1) {
        return 1; // Blanco
    } else if (izquierdo == 1 && centro == 1 && derecho == 0) {
        return 0; // Negro
    } else {
        return 1; // Blanco
    }
}

int main() {
    // Entrada de datos
    int n, colorIzquierdo, colorCentro, colorDerecho;

    cout << "Ingrese el número de veces que se aplicará la regla (n): ";
    cin >> n;

    cout << "Ingrese los colores iniciales de los cuadrados (0 para negro, 1 para blanco): ";
    cin >> colorIzquierdo >> colorCentro >> colorDerecho;

    // Aplicar la regla n veces
    for (int i = 0; i < n; ++i) {
        int nuevoIzquierdo = nuevoColor(colorIzquierdo, colorCentro, colorDerecho);
        int nuevoCentro = nuevoColor(colorCentro, colorDerecho, nuevoIzquierdo);
        int nuevoDerecho = nuevoColor(colorDerecho, nuevoIzquierdo, nuevoCentro);

        colorIzquierdo = nuevoIzquierdo;
        colorCentro = nuevoCentro;
        colorDerecho = nuevoDerecho;
    }

    // Mostrar el resultado
    cout << colorIzquierdo << " " << colorCentro << " " << colorDerecho << endl;

    return 0;
}
