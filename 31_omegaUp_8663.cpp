#include <iostream>
#include <cmath>

using namespace std;

// Función para calcular el área de un triángulo dado por tres puntos
double areaTriangulo(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
}

int main() {
    // Entrada del número de ídolos
    int N;
    cout << "Ingrese el número de ídolos (N): ";
    cin >> N;

    // Verificar que N esté en el rango permitido
    if (N < 3 || N > 500) {
        cout << "N debe estar en el rango [3, 500]." << endl;
        return 1;  // Terminar el programa con código de error
    }

    // Entrada de las coordenadas de los ídolos
    double x[N], y[N];
    cout << "Ingrese las coordenadas (x, y) de los " << N << " ídolos:" << endl;
    for (int i = 0; i < N; ++i) {
        cin >> x[i] >> y[i];
    }

    // Calcular el área máxima del triángulo formado por tres ídolos
    double maxArea = 0.0;
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                maxArea = max(maxArea, areaTriangulo(x[i], y[i], x[j], y[j], x[k], y[k]));
            }
        }
    }

    // Mostrar el área máxima
    cout.precision(3);
    cout << "El área máxima del triángulo es: " << maxArea << endl;

    return 0;
}
