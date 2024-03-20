#include <iostream>
#include <string>

struct Pessoa {
    std::string nome;
    int idade;
    Pessoa* proximo;
};

class FilaEncadeada {
public:
    FilaEncadeada() : frente(nullptr), tras(nullptr) {}

    ~FilaEncadeada() {
        while (!estaVazia()) {
            remover();
        }
    }

    void adicionar(std::string nome, int idade) {
        Pessoa* novaPessoa = new Pessoa{nome, idade, nullptr};
        if (tras != nullptr) {
            tras->proximo = novaPessoa;
        }
        tras = novaPessoa;
        if (frente == nullptr) {
            frente = novaPessoa;
        }
    }

    void listar() {
        Pessoa* atual = frente;
        while (atual != nullptr) {
            std::cout << "Nome: " << atual->nome << ", Idade: " << atual->idade << std::endl;
            atual = atual->proximo;
        }
    }

    void remover() {
        if (frente != nullptr) {
            Pessoa* temp = frente;
            frente = frente->proximo;
            if (frente == nullptr) {
                tras = nullptr;
            }
            delete temp;
        } else {
            std::cout << "Fila vazia!" << std::endl;
        }
    }

    bool estaVazia() {
        return frente == nullptr;
    }

private:
    Pessoa* frente;
    Pessoa* tras;
};

void mostrarMenu() {
    std::cout << "1. Inserir pessoa na fila" << std::endl;
    std::cout << "2. Deletar pessoa da fila" << std::endl;
    std::cout << "3. Listar pessoas na fila" << std::endl;
    std::cout << "4. Sair" << std::endl;
}

int main() {
    FilaEncadeada fila;
    int opcao;
    std::string nome;
    int idade;

    do {
        mostrarMenu();
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

        switch (opcao) {
            case 1:
                std::cout << "Digite o nome: ";
                std::cin >> nome;
                std::cout << "Digite a idade: ";
                std::cin >> idade;
                fila.adicionar(nome, idade);
                break;
            case 2:
                fila.remover();
                break;
            case 3:
                fila.listar();
                break;
            case 4:
                std::cout << "Saindo..." << std::endl;
                break;
            default:
                std::cout << "Opção inválida!" << std::endl;
        }
    } while (opcao != 4);

    return 0;
}
