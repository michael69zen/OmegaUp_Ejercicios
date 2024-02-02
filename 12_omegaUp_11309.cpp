#include <iostream>

using namespace std;

// Función para calcular la suma de los dígitos
int sumaDigitos(int numero) {
    int suma = 0;

    // Iterar mientras haya dígitos
    while (numero != 0) {
        suma += numero % 10;  // Obtener el último dígito y sumarlo
        numero /= 10;         // Eliminar el último dígito
    }

    cout<<suma<<endl;
}

int main() {
    int N;

    // Solicitar al usuario que ingrese un entero
    cout << "Ingrese un entero N: ";
    cin >> N;

    // Calcular la suma de los dígitos utilizando la función sumaDigitos
    int resultado = sumaDigitos(N);

    // Mostrar el resultado
    cout << "La suma de los dígitos de " << N << " es: " << resultado << endl;

    return 0;
}
