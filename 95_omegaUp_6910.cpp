#include <iostream>

using namespace std;

int main() {
    int pH;
    cin >> pH;

    if (pH < 0 || pH > 14) {
        cout << "Are you kidding me?" << endl;
    } else if (pH >= 0 && pH < 7) {
        cout << "Acido" << endl;
    } else if (pH > 7 && pH <= 14) {
        cout << "Base" << endl;
    } else {
        cout << "Neutro" << endl;
    }

    return 0;
}
