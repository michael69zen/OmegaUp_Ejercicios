#include <iostream>

using namespace std;

// Funci�n para calcular la suma de los d�gitos
int sumaDigitos(int numero) {
    int suma = 0;

    // Iterar mientras haya d�gitos
    while (numero != 0) {
        suma += numero % 10;  // Obtener el �ltimo d�gito y sumarlo
        numero /= 10;         // Eliminar el �ltimo d�gito
    }

    cout<<suma<<endl;
}

int main() {
    int N;

    // Solicitar al usuario que ingrese un entero
    cout << "Ingrese un entero N: ";
    cin >> N;

    // Calcular la suma de los d�gitos utilizando la funci�n sumaDigitos
    int resultado = sumaDigitos(N);

    // Mostrar el resultado
    cout << "La suma de los d�gitos de " << N << " es: " << resultado << endl;

    return 0;
}
