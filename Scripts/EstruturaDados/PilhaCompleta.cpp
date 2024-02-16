#include <iostream>
#include <stdexcept> // Para exceções padrão
#include <string>
using namespace std;

const int MAX = 100; // capacidade máxima da pilha

class Pilha {
private:
    string pilha[MAX]; // vetor que armazena os elementos da pilha
    int topo; // índice do topo da pilha
public:
    // construtor da pilha
    Pilha() {
        topo = -1; // indica que a pilha está vazia
    }

    // método que verifica se a pilha está vazia
    bool vazia() {
        return topo == -1; // retorna verdadeiro se o topo for -1
    }

    // método que verifica se a pilha está cheia
    bool cheia() {
        return topo == MAX - 1; // retorna verdadeiro se o topo for MAX - 1
    }

    // método que insere um elemento no topo da pilha
    void empilha(const string& elemento) {
        if (!cheia()) { // verifica se a pilha não está cheia
            topo++; // incrementa o topo
            pilha[topo] = elemento; // armazena o elemento no topo
            cout << "Elemento inserido na pilha: " << elemento << endl;
        } else {
            throw overflow_error("Pilha cheia!"); // lançar uma exceção de estouro
        }
    }

    // método que remove um elemento do topo da pilha
    string desempilha() {
        if (!vazia()) { // verifica se a pilha não está vazia
            string elemento = pilha[topo]; // guarda o elemento do topo
            topo--; // decrementa o topo
            return elemento; // retorna o elemento removido
        } else {
            throw underflow_error("Pilha vazia!"); // lançar uma exceção de subfluxo
        }
    }

    // método que mostra os elementos da pilha
    void mostrarElementos() {
        cout << "Elementos da pilha:" << endl;
        for (int i = topo; i >= 0; i--) {
            cout << pilha[i] << endl;
        }
    }
};

int main() {
    Pilha p;
    string elemento;
    int opcao;

    do {
        cout << "\nEscolha uma opção:" << endl;
        cout << "1. Inserir elemento na pilha" << endl;
        cout << "2. Retirar elemento da pilha" << endl;
        cout << "3. Mostrar elementos da pilha" << endl;
        cout << "4. Sair" << endl;
        cout << "Opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Insira um elemento na pilha: ";
                cin >> elemento;
                try {
                    p.empilha(elemento);
                } catch (const exception& e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            case 2:
                try {
                    cout << "Elemento desempilhado: " << p.desempilha() << endl;
                } catch (const exception& e) {
                    cout << "Erro: " << e.what() << endl;
                }
                break;
            case 3:
                p.mostrarElementos();
                break;
            case 4:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}
