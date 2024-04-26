#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Item {
    std::string nome;
    double preco;

};

int main() {
    std::vector<Item> listaDeCompras;
    char continuar = 'S';
    while (continuar == 'S' || continuar == 's') {
        Item item;
        std::cout << "Digite o nome do item: ";
        std::cin >> item.nome;
        std::cout << "Digite o preço do item: ";
        std::cin >> item.preco;
        listaDeCompras.push_back(item);

        std::cout << "Deseja adicionar outro item? (S/N) ";
        std::cin >> continuar;
    }

    double total = 0;
    std::ofstream arquivo("listaDeCompras.txt");
    for (const auto& item : listaDeCompras) {
        total += item.preco;
        arquivo << "Item: " << item.nome << ", Preço: " << item.preco << "\n";
    }
    arquivo << "Total: " << total << "\n";

    std::cout << "A lista de compras foi salva no arquivo 'listaDeCompras.txt'.\n";
    return 0;
}
