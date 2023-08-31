#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    const int totalNumeros = 60;
    const int numerosASortear = 6;

    // Configurando o gerador de números aleatórios
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, totalNumeros);

    vector<int> numerosSorteados;

    // Sorteando os números
    while (numerosSorteados.size() < numerosASortear) {
        int numeroAleatorio = dis(gen);
        
        // Verificando se o número já foi sorteado
        if (find(numerosSorteados.begin(), numerosSorteados.end(), numeroAleatorio) == numerosSorteados.end()) {
            numerosSorteados.push_back(numeroAleatorio);
        }
    }

    // Ordenando os números sorteados
    sort(numerosSorteados.begin(), numerosSorteados.end());

    // Exibindo os números sorteados
    cout << "Números sorteados: ";
    for (int numero : numerosSorteados) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}
