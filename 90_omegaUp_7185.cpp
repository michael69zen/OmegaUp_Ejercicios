#include <iostream>
#include <string>

using namespace std;

int main() {
    // Leer las cadenas s y t
    string s, t;
    getline(cin, s);
    getline(cin, t);

    // Buscar y reemplazar cada ocurrencia de t en s con espacios en blanco
    size_t found = s.find(t);
    while (found != string::npos) {
        s.replace(found, t.length(), t.length(), ' ');
        found = s.find(t, found + t.length());
    }

    // Imprimir la cadena s modificada
    cout << s << endl;

    return 0;
}
