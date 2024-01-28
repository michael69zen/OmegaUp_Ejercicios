#include <iostream>

using namespace std;

int main() {
    int s, n;

    // Solicitar al usuario los valores de s y n
    cout << "Ingrese el valor de s y n separados por un espacio: ";
    cin >> s >> n;

    // Verificar que s sea positivo
    if (s <= 0) {
        cout << "El valor de s debe ser positivo." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Calcular la sumatoria con incrementos s
    int sumatoria = 0;
    for (int i = 1; i <= n; i += s) {
        sumatoria += i;
    }

    // Mostrar el resultado
    cout << "La sumatoria con salto " << s << " es: " << sumatoria << endl;

    return 0;
}
