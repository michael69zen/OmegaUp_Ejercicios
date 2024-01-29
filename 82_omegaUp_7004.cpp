#include <iostream>

using namespace std;

int main() {
    int S;
    cin >> S;

    // Calcular días, horas, minutos y segundos
    int dias = S / (12 * 70 * 50);
    int horas = (S % (12 * 70 * 50)) / (70 * 50);
    int minutos = ((S % (12 * 70 * 50)) % (70 * 50)) / 50;
    int segundos = ((S % (12 * 70 * 50)) % (70 * 50)) % 50;

    // Mostrar resultados
    cout << dias << " " << horas << " " << minutos << " " << segundos << endl;

    return 0;
}
