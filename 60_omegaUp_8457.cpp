int main() {
    // Entrada
    int n;
    cin >> n;

    // Cálculo del valor mínimo y máximo
    int min_sum = (n * (1+2+3+4+5));  // Mínimo valor posible: n * 1 * 5
    int max_sum = (n * (2+3+4+5+6));  // Máximo valor posible: n * 6 * 5

    // Salida
    cout << min_sum << " " << max_sum << endl;

    return 0;
}


