#include <iostream>

using namespace std;

int main() {
    int N, O, P, C;
    cin >> N >> O >> P >> C;

    // Calcular el número de canastas de tacos que Juan compró
    int canastas = N / C;

    // Calcular el número de platones de tacos que Juan compró
    int platones = (N % C) / P;

    // Calcular el número de órdenes de tacos que Juan compró
    int ordenes = ((N % C) % P) / O;

    // Calcular el número de tacos individuales que Juan compró
    int individuales = ((N % C) % P) % O;

    // Calcular el costo total
    int costo_total = (canastas * 1500) + (platones * 250) + (ordenes * 50) + (individuales * 10);

    // Mostrar el resultado
    cout << costo_total << " " << individuales << " " << ordenes << " " << platones << " " << canastas << endl;

    return 0;
}
