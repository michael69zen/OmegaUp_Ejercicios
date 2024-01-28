#include <iostream>
#include <vector>

using namespace std;

vector<int> fibonacci(int N) {
    vector<int> fib;
    if (N >= 1) {
        fib.push_back(0);
    }
    if (N >= 2) {
        fib.push_back(1);
    }
    for (int i = 2; i < N; ++i) {
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    return fib;
}

int main() {
    int N;
    cout << "Ingrese el valor de N para generar los primeros N números de la serie Fibonacci: ";
    cin >> N;

    if (N < 1) {
        cout << "N debe ser un entero positivo." << endl;
        return 1;
    }

    vector<int> fib = fibonacci(N);

    cout << "Los primeros " << N << " números de la serie Fibonacci son: ";
    for (int i = 0; i < fib.size(); ++i) {
        cout << fib[i] << " ";
    }
    cout << endl;

    return 0;
}
