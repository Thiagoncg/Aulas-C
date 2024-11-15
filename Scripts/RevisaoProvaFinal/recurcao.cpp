#include <iostream>
using namespace std;

int fatorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;
    cout << "Digite um número para calcular o fatorial: ";
    cin >> numero;
    cout << "O fatorial de " << numero << " é: " << fatorial(numero) << endl;
    return 0;
}
