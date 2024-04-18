#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> nomes = {"Beatriz", "Alice", "Carlos", "Alexandre"};

    // Ordena os nomes em ordem alfabética
    std::sort(nomes.begin(), nomes.end());

    // Imprime os nomes e suas posições
    for (int i = 0; i < nomes.size(); i++) {
        std::cout << "Posicao " << i + 1 << ": " << nomes[i] << std::endl;
    }

    return 0;
}

// Estrutura de dados . cesare crosara cardoso.
