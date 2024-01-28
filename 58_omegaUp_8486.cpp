#include <iostream>

using namespace std;

int main() {
    // Declaración de variables
    double dinero_invertido, tasa_interes_1, tasa_interes_2, tasa_interes_3, porcentaje_banco;
    
    // Entrada de datos
    cin >> dinero_invertido >> tasa_interes_1 >> tasa_interes_2 >> tasa_interes_3 >> porcentaje_banco;

    // Cálculos
    double ganancia_total = dinero_invertido * (tasa_interes_1 + tasa_interes_2 + tasa_interes_3);
    double ganancia_banco = ganancia_total * porcentaje_banco;
    double total_dinero = dinero_invertido + ganancia_total - ganancia_banco;

    // Configurar la precisión de cout
    cout.precision(3);

    // Salida de resultado
    cout << fixed << total_dinero << endl;

    return 0;
}
