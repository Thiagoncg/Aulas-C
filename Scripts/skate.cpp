#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definição da estrutura Skate que armazenará as informações de cada skate
struct Skate {
    string marca;
    string modelo;
    int ano;
};

// Vetor para armazenar os skates cadastrados
vector<Skate> skates;

// Função para cadastrar um novo skate
void cadastrarSkate() {
    Skate skate;
    cout << "Marca: ";
    cin.ignore(); // Ignora os caracteres em buffer para evitar problemas na leitura da próxima linha
    getline(cin, skate.marca);
    cout << "Modelo: ";
    getline(cin, skate.modelo);
    cout << "Ano: ";
    cin >> skate.ano;

    skates.push_back(skate); // Adiciona o skate ao vetor de skates
    cout << "Skate cadastrado com sucesso!\n";
}

// Função para exibir a lista de skates cadastrados
void exibirSkates() {
    if (skates.empty()) { // Verifica se o vetor de skates está vazio
        cout << "Nenhum skate cadastrado.\n";
        return;
    }

    cout << "Lista de skates cadastrados:\n";
    for (const auto& skate : skates) { // Loop para percorrer os skates cadastrados
        cout << "Marca: " << skate.marca << "\n";
        cout << "Modelo: " << skate.modelo << "\n";
        cout << "Ano: " << skate.ano << "\n";
        cout << "-------------------------------\n";
    }
}

int main() {
    int opcao;

    do {
        cout << "=========== Menu ===========\n";
        cout << "1 - Cadastrar Skate\n";
        cout << "2 - Exibir Skates\n";
        cout << "0 - Sair\n";
        cout << "============================\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarSkate(); // Chama a função para cadastrar um novo skate
                break;
            case 2:
                exibirSkates(); // Chama a função para exibir a lista de skates cadastrados
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
