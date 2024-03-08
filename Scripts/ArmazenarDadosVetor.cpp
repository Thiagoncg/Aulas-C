#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> nomes; // Vetor para armazenar nomes

    // Adicionar nomes ao vetor
    nomes.push_back("BMW x6");
    nomes.push_back("BMW x6");
    nomes.push_back("BMW x6");
    nomes.push_back("BMW x6");

    // Apresentar os nomes armazenados no vetor
    std::cout << "Nomes armazenados:" << std::endl;
    for (const std::string& nome : nomes) {
        std::cout << nome << std::endl;
    }

    return 0;
}
