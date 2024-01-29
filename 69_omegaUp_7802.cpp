#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int calificacionReal;
        cin >> calificacionReal;

        int calificaciones[] = {0, 5, 6, 7};
        int calificacionAsignada = calificaciones[0];

        for (int j = 1; j < 4; ++j) {
            if (abs(calificaciones[j] - calificacionReal) < abs(calificacionAsignada - calificacionReal)) {
                calificacionAsignada = calificaciones[j];
            }
        }

        cout << calificacionAsignada << endl;
    }

    return 0;
}
