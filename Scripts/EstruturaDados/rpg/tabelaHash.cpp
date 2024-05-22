#include <iostream>
#include <vector>

using namespace std;

// Estrutura para armazenar os dados do personagem
struct Personagem {
    string nome;
    int vida;
    int forca;
};

// Função hash simples
int funcaoHash(string chave, int tamanhoTabela) {
    int valor = 0;
    for (char c : chave) {
        valor += c;
    }
    return valor % tamanhoTabela;
}

int main() {
    // Criação de uma tabela hash usando um vetor de Personagens
    int tamanhoTabela = 100;
    vector<Personagem> tabela(tamanhoTabela);

    // Criação de um personagem
    Personagem heroi;
    heroi.nome = "Super Thiago";
    heroi.vida = 100;
    heroi.forca = 50;

    // Salvando o personagem na tabela hash
    int indice = funcaoHash(heroi.nome, tamanhoTabela);
    tabela[indice] = heroi;

    // Acessando os dados do personagem
    cout << "Nome: " << tabela[indice].nome << endl;
    cout << "Vida: " << tabela[indice].vida << endl;
    cout << "Força: " << tabela[indice].forca << endl;

    return 0;
}
