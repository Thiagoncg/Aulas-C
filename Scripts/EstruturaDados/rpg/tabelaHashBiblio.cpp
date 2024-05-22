#include <iostream>
#include <unordered_map>

using namespace std;

// Estrutura para armazenar os dados do personagem
struct Personagem {
    string nome;
    int vida;
    int forca;
};

int main() {
    // Criação de uma tabela hash usando unordered_map - Biblioteca de manipulação
    //Embora esta forma existe quero a criação de uma função, não usar este metodo.
    unordered_map<string, Personagem> tabela;

    // Criação de um personagem
    Personagem heroi;
    heroi.nome = "Herói";
    heroi.vida = 100;
    heroi.forca = 50;

    // Salvando o personagem na tabela hash
    tabela[heroi.nome] = heroi;

    // Acessando os dados do personagem
    cout << "Nome: " << tabela["Herói"].nome << endl;
    cout << "Vida: " << tabela["Herói"].vida << endl;
    cout << "Força: " << tabela["Herói"].forca << endl;

    return 0;
}
