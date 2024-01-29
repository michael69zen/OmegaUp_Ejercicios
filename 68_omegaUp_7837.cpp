#include <iostream>
#include <iomanip> // Necesario para setprecision

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        double lado;
        cin >> lado;

        // Calcula la altura de un triángulo equilátero
        double altura = 0.866 * lado; // Aproximación de sqrt(3)/2

        // Imprime la altura redondeada a dos lugares decimales
        cout << fixed << setprecision(2) << altura << endl;
    }

    return 0;
}
