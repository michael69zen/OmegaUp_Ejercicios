#include <iostream>

using namespace std;

int main() {
    // Variables para la hora de inicio
    int hInicio, mInicio, sInicio;

    // Variables para la hora de finalización
    int hFin, mFin, sFin;

    // Entrada de datos
    cout << "Ingrese la hora de inicio (hh:mm:ss): ";
    cin >> hInicio >> mInicio >> sInicio;

    cout << "Ingrese la hora de finalización (hh:mm:ss): ";
    cin >> hFin >> mFin >> sFin;

    // Calcular la duración del viaje en segundos
    int duracionSegundos = (hFin - hInicio) * 3600 + (mFin - mInicio) * 60 + (sFin - sInicio);

    // Mostrar la duración del viaje en segundos
    cout << "Duración del viaje: " << duracionSegundos << " segundos." << endl;

    return 0;
}
