#include <iostream>

using namespace std;

int main() {
    // Leer el número de días y el número de hojas por cuaderno
    int n, k;
    cin >> n >> k;

    // Leer la cantidad de hojas que se usarán cada día
    int hojas_por_dia[n];
    for (int i = 0; i < n; i++) {
        cin >> hojas_por_dia[i];
    }

    // Calcular el número total de hojas necesarias
    int hojas_totales = 0;
    for (int i = 0; i < n; i++) {
        hojas_totales += hojas_por_dia[i];
    }

    // Calcular el número de cuadernos necesarios
    int cuadernos = (hojas_totales + k - 1) / k;

    // Imprimir el resultado
    cout << cuadernos << endl;

    return 0;
}
