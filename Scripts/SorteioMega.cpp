#include <iostream>
#include <random>
#include <vector>
#include <algorithm>

int main() {
    const int totalNumbers = 60;
    const int numbersToPick = 6;

    // Configurando o gerador de números aleatórios
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, totalNumbers);

    std::vector<int> pickedNumbers;

    // Sorteando os números
    while (pickedNumbers.size() < numbersToPick) {
        int randomNumber = dis(gen);
        
        // Verificando se o número já foi sorteado
        if (std::find(pickedNumbers.begin(), pickedNumbers.end(), randomNumber) == pickedNumbers.end()) {
            pickedNumbers.push_back(randomNumber);
        }
    }

    // Ordenando os números sorteados
    std::sort(pickedNumbers.begin(), pickedNumbers.end());

    // Exibindo os números sorteados
    std::cout << "Números sorteados: ";
    for (int number : pickedNumbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
