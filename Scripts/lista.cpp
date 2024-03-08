#include <iostream>
#include <list>
#include <algorithm> // Incluir o cabeçalho para std::find

using namespace std;

int main() {
    // Criar uma lista de modelos de carros
    list<string> modelosDeCarros = {"ford Ka", "Gol", "Civic", "Corolla", "HB20"};

    // Encontrar o modelo de carro que você deseja substituir usando std::find
    auto it = find(modelosDeCarros.begin(), modelosDeCarros.end(), "Gol");

    // Verificar se o modelo de carro foi encontrado antes de tentar substituí-lo
    if (it != modelosDeCarros.end()) {
        // Substituir o modelo de carro encontrado
        *it = "Onix";  // Substituir "Gol" por "Onix"
    }

    // Imprimir a lista de modelos de carros após a substituição
    for (const string& modelo : modelosDeCarros) {
        cout << modelo << " ";
    }
    cout << endl;

    return 0;
}
