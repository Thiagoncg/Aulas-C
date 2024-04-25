#include <iostream>
#include <vector>
#include <cstdlib> // Para a função rand()
#include <ctime> // Para a função time()

int main() {
    srand(time(0)); // Inicializa o gerador de números aleatórios

    std::vector<std::string> nomes = {"Enzo", "Lucas", "Luiz", "Murilo", "Felipe","Rafel", "Devid", "Rodrigo", "Mateus", "Gabriel"};

    int indice = rand() % nomes.size(); // Gera um índice aleatório

    std::cout << "Nome sorteado: " << nomes[indice] << std::endl;

    return 0;
}
