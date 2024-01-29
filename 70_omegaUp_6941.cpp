#include <iostream>

using namespace std;

int main() {
    int a, b, a1;
    cin >> a >> b >> a1;

    // Usamos la propiedad de semejanza de triángulos: a1 / a = x / b
    // Despejamos x: x = (a1 * b) / a

    int x = (a1 * b) / a;

    cout << x << endl;

    return 0;
}
