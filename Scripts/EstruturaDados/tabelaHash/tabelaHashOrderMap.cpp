#include <unordered_map>
#include <string>
#include <iostream>

using namespace std;

int main() {
    // Cria um unordered_map onde a chave é uma string (placa do carro) e o valor é um int (ID do carro)
    unordered_map<string, int> placasCarro;

    // Adiciona algumas placas de carro e seus respectivos IDs ao unordered_map
    placasCarro["ABC-1234"] = 1;
    placasCarro["XYZ-5678"] = 2;
    placasCarro["QRS-9012"] = 3;

    placasCarro["QRS-9055"] = 1;


    // Imprime todas as placas de carro e seus respectivos IDs
    for (const auto &par : placasCarro) {
        cout << "Placa: " << par.first << ", ID: " << par.second << endl;
    }

    return 0;
}
