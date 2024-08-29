#include <iostream>

using namespace std;

void moverDisco(int n, char origem, char destino, char auxiliar) {
    if (n == 1) {
        cout << "Mover disco 1 de " << origem << " para " << destino << endl;
    } else {
        moverDisco(n - 1, origem, auxiliar, destino);
        cout << "Mover disco " << n << " de " << origem << " para " << destino << endl;
        moverDisco(n - 1, auxiliar, destino, origem);
    }
}

int main() {
    int n;
    cout << "Digite o número de discos: ";
    cin >> n;

    moverDisco(n, 'A', 'C', 'B');

    return 0;
}