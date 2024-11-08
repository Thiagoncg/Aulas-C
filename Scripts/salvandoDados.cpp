#include <iostream>
#include <fstream>
#include <vector>
#include<string>

using namespace std;

struct Item
{
    string nome;
    double preco;
};

int main(){
    vector<Item> listaDeCompras;
    char continuar = 'S';

    while (continuar == 'S' || continuar == 's')
    {
        Item item;

        cout << "Digite o item";
        cin >> item.nome;
        cout << "Digitte o preço do item";
        cin >> item.preco;

        listaDeCompras.push_back(item);

        cout <<"Deseja continuar ? (S / N)";
        cin >> continuar;
    }
    double total = 0;
    ofstream arquivo("listaDeCompras.txt");
    for (const auto& item : listaDeCompras) 
    {
        total += item.preco;
        arquivo << "Item: " << item.nome 
        << "Preço: "<< item.preco << "\n";

    }
    arquivo << "Total: " << total << "\n";
    cout << " A lista de compras foi salva no arquivo'listaDeCompras.txt. \n";
    return 0; 
    
}

