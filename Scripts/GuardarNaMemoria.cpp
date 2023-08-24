#include <iostream>
#include <string>
#include <vector>

using namespace std;

// guardar dados de pessoas
struct Pessoa {
    string nome;
    float altura;
    int idade;
};

// Vetor para armazenar os skates cadastrados
vector<Pessoa> pessoas;

// Função para cadastrar uma nova pessoa
// Função para cadastrar um novo skate
void cadastrarPessoa() {
    Pessoa pessoa;
    cout << "Nome da Pessoa: ";
    cin.ignore(); // Ignora os caracteres em buffer para evitar problemas na leitura da próxima linha
    getline(cin, pessoa.nome);

    cout << "Altura: ";
    cin >> pessoa.altura;

    cout << "Idade: ";
    cin >> pessoa.idade;

    pessoas.push_back(pessoa); // Adiciona o skate ao vetor de skates
    cout << "Skate cadastrado com sucesso!\n";
}

// Função para exibir a lista de Pessoas cadastrados
void exibirPessoas() {
    if (pessoas.empty()) { // Verifica se o vetor de pessoas está vazio
        cout << "Nenhuma pessoa cadastrada.\n";
        return;
    }

    cout << "Lista todas as pessoas cadastradas:\n";
    for (const auto& pessoa : pessoas) { // Loop para percorrer as pessoas cadastrados
        cout << "Nome: " << pessoa.nome << "\n";
        cout << "Altura: " << pessoa.altura << "\n";
        cout << "Idade: " << pessoa.idade << "\n";
        cout << "-------------------------------\n";
    }
}

int main() {
    int opcao;

    do {
        cout << "=========== Menu ===========\n";
        cout << "1 - Cadastrar Pessoa\n";
        cout << "2 - Exibir Pessoas\n";
        cout << "0 - Sair\n";
        cout << "============================\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarPessoa(); // Chama a função para cadastrar uma nova Pessoa
            case 2:
                exibirPessoas(); // Chama a função para exibir a lista de Pessoas cadastrados
                break;
            case 0:
                cout << "Saindo...\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao != 0);

    return 0;
}