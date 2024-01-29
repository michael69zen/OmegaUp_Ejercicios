#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        int g;
        cin >> g;

        int kingPosition = -1;

        for (int j = 0; j < g; ++j) {
            int gnome;
            cin >> gnome;

            if (j > 0 && j < g - 1 && gnome != j + 1) {
                kingPosition = j + 1;
                break;
            }
        }

        cout << "King position in group " << (i + 1) << ": " << kingPosition << endl;
    }

    return 0;
}
