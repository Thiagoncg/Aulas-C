#include <iostream>
#include <fstream>
#include <vector>
#include <string>

struct Item
{
    std::string nome;
    double preco;
};

int main()
{
    std::vector<Item> listaDeCompras;
    char continuar = 'S';
    while (continuar == 'S' || continuar == 's')
    {
        Item item;
        std::cout << "Digite o nome do produto";
        std::cin >> item.nome;

        std::cout << "Digite o valor do produto";
        std::cin >> item.preco;

        listaDeCompras.push_back(item);

        std::cout << "Deseja continuar(S/N)";
    }

    double total = 0;
    std::ofstream arquivo("listaDeCompras.txt");
    for (const auto& item : listaDeCompras)
    {
        total += item.preco;
        arquivo << "Item" << item.nome << ", Valor "<< item.preco <<"\n";
    }

    arquivo << " TOTAL: " << total << "\n";

    std:: cout <<"A lista de compras salva 'listaDeCompras.txt' . \n";
    return 0;
    
}
