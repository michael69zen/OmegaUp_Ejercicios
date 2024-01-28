#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese un entero positivo N: ";
    cin >> N;

    if (N < 1 || N > 1000000000) {
        cout << "N debe estar en el rango [1, 10^9]." << endl;
        return 1;
    }

    long long suma = 0;
    for (int i = 1; i <= N; ++i) {
        suma += i;
    }

    cout << "La suma de los primeros " << N << " números naturales es: " << suma << endl;

    return 0;
}
