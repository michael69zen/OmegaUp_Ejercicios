#include <iostream>

using namespace std;

int main() {
    char cadena[501];

    cout << "Ingrese una cadena de hasta 500 caracteres: ";
    cin.getline(cadena, 501);

    int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;

    for (int i = 0; cadena[i] != '\0'; ++i) {
        char caracter = tolower(cadena[i]);

        switch (caracter) {
            case 'a':
                countA++;
                break;
            case 'e':
                countE++;
                break;
            case 'i':
                countI++;
                break;
            case 'o':
                countO++;
                break;
            case 'u':
                countU++;
                break;
            default:
                break;
        }
    }

    cout << countA << " " << countE << " " << countI << " " << countO << " " << countU << endl;

    return 0;
}
