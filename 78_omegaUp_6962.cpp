#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<string>> preferences(n);
    unordered_set<string> installedApps;

    // Leer las listas de preferencias de los niños
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;
        preferences[i].resize(m);
        for (int j = 0; j < m; ++j) {
            cin >> preferences[i][j];
        }
    }

    // Instalar las aplicaciones según las preferencias
    for (int i = 0; i < n; ++i) {
        string selectedApp;
        for (const string &app : preferences[i]) {
            if (installedApps.find(app) == installedApps.end()) {
                selectedApp = app;
                installedApps.insert(app);
                break;
            }
        }
        cout << selectedApp << " ";
    }

    return 0;
}
