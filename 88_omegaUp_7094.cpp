#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Leer las coordenadas y radios de cada dardo
    double p, q, r, s, t, u, a, b, c, d, e;
    cin >> p >> q >> r >> s >> t >> u >> a >> b >> c >> d >> e;

    // Calcular la distancia al centro para cada dardo
    double distancia1 = sqrt(p * p + q * q);
    double distancia2 = sqrt(r * r + s * s);
    double distancia3 = sqrt(t * t + u * u);

    // Determinar el puntaje de cada dardo
    int puntaje1 = (distancia1 <= a) ? 10 : ((distancia1 <= b) ? 8 : ((distancia1 <= c) ? 6 : ((distancia1 <= d) ? 4 : ((distancia1 <= e) ? 2 : 0))));
    int puntaje2 = (distancia2 <= a) ? 10 : ((distancia2 <= b) ? 8 : ((distancia2 <= c) ? 6 : ((distancia2 <= d) ? 4 : ((distancia2 <= e) ? 2 : 0))));
    int puntaje3 = (distancia3 <= a) ? 10 : ((distancia3 <= b) ? 8 : ((distancia3 <= c) ? 6 : ((distancia3 <= d) ? 4 : ((distancia3 <= e) ? 2 : 0))));

    // Calcular el puntaje total
    int puntajeTotal = puntaje1 + puntaje2 + puntaje3;

    // Mostrar el puntaje total
    cout << puntajeTotal << endl;

    return 0;
}
