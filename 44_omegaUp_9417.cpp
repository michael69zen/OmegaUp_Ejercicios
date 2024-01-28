#include <iostream>

using namespace std;

int main() {
    int N, M;

    // Solicitar al usuario el número de cajas de tipo A y tipo B
    cout << "Ingrese el número de cajas de tipo A (N): ";
    cin >> N;
    cout << "Ingrese el número de cajas de tipo B (M): ";
    cin >> M;

    // Verificar que N y M estén en el rango permitido
    if (N < 1 || M < 1 || N > 100 || M > 100) {
        cout << "El número de cajas debe estar entre 1 y 100." << endl;
        return 1;  // Terminar el programa con código de error
    }

    int totalA = 0, totalB = 0;

    // Calcular la cantidad total de pelotas en las cajas de tipo A
    cout << "Ingrese la cantidad de pelotas en las cajas de tipo A:" << endl;
    for (int i = 0; i < N; ++i) {
        int pelotas;
        cin >> pelotas;
        totalA += pelotas;
    }

    // Calcular la cantidad total de pelotas en las cajas de tipo B
    cout << "Ingrese la cantidad de pelotas en las cajas de tipo B:" << endl;
    for (int i = 0; i < M; ++i) {
        int pelotas;
        cin >> pelotas;
        totalB += pelotas;
    }

    // Mostrar el resultado
    cout << "Total de pelotas en cajas de tipo A: " << totalA << endl;
    cout << "Total de pelotas en cajas de tipo B: " << totalB << endl;

    return 0;
}
