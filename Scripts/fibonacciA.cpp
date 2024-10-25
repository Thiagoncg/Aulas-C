#include <iostream>
using namespace std;

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Casos base: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Chamada recursiva
}

int main() {
    int n;
    cout << "Digite o valor de n: ";
    cin >> n;

    // Imprime a sequência de Fibonacci até o n-ésimo número
    cout << "Sequência de Fibonacci: ";
    for (int i = 0; i <= n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
