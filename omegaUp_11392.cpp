#include <iostream>
#include <vector>
#include <map>

using namespace std;

// Definición de los segmentos para cada número
const map<int, vector<string>> segmentos = {
    {0, {"###", "# #", "# #", "# #", "###"}},
    {1, {"  #", "  #", "  #", "  #", "  #"}},
    {2, {"###", "  #", "###", "#  ", "###"}},
    {3, {"###", "  #", "###", "  #", "###"}},
    {4, {"# #", "# #", "###", "  #", "  #"}},
    {5, {"###", "#  ", "###", "  #", "###"}},
    {6, {"###", "#  ", "###", "# #", "###"}},
    {7, {"###", "  #", "  #", "  #", "  #"}},
    {8, {"###", "# #", "###", "# #", "###"}},
    {9, {"###", "# #", "###", "  #", "###"}}
};

// Función para mostrar un número en el display de siete segmentos
void mostrarNumero(int numero, char caracter) {
    const vector<string>& digitos = segmentos.at(numero);

    for (const string& linea : digitos) {
        for (char c : linea) {
            if (c == '#') {
                cout << caracter;
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

int main() {
    char caracter;
    
    cout << "Ingrese el caracter para el display de siete segmentos: ";
    cin >> caracter;

    // Mostrar los números del 0 al 9
    for (int i = 0; i <= 9; ++i) {
        mostrarNumero(i, caracter);
        cout << endl;
    }

    return 0;
}
