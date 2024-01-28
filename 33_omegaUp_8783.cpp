#include <iostream>

using namespace std;

int main() {
    // Entrada de las siete calificaciones
    double calificacion1, calificacion2, calificacion3, calificacion4, calificacion5, calificacion6, calificacion7;

    cout << "Ingrese las siete calificaciones (de 0 a 10) separadas por espacios: ";
    cin >> calificacion1 >> calificacion2 >> calificacion3 >> calificacion4 >> calificacion5 >> calificacion6 >> calificacion7;

    // Calcular el promedio
    double promedio = (calificacion1 + calificacion2 + calificacion3 + calificacion4 + calificacion5 + calificacion6 + calificacion7) / 7.0;

    // Mostrar el promedio con un solo decimal
    cout.precision(1);
    cout << "El promedio de tus calificaciones es: " << fixed << promedio << endl;

    return 0;
}
