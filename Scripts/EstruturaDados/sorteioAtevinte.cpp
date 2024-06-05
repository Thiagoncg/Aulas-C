#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Inicializa a semente para gerar números aleatórios
    srand(time(nullptr));

    // Sorteia e imprime 20 números aleatórios
    for (int i = 0; i < 20; ++i) {
        int numero = rand() % 101; // Gera número entre 0 e 100
        cout << numero << " ";
    }

    cout << endl;
    return 0;
}
