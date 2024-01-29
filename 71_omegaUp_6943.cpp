#include <iostream>

using namespace std;

int main() {
    int C;
    cin >> C;

    // Conversión de Celsius a Fahrenheit: F = (C * 9/5) + 32
    int F = (C * 9/5) + 32;

    // Conversión de Celsius a Kelvin: K = C + 273.15
    int K = C + 273.15;

    // Conversión de Celsius a Rankine: R = (C + 273.15) * 9/5
    int R = (C + 273.15) * 9/5;

    cout << F << " " << K << " " << R << endl;

    return 0;
}
