#include <iostream>
#include <stack> // Biblioteca para usar pilha em C++
using namespace std;

int main() {
    stack<int> pilha; // Declaração de uma pilha de inteiros

    char continuar;
    do {
        int elemento;
        cout << "Digite o elemento que deseja inserir na pilha: ";
        cin >> elemento;

        pilha.push(elemento); // Insere o elemento na pilha

        cout << "Elemento " << elemento << " inserido na pilha." << endl;

        cout << "Deseja inserir outro elemento? (S/N): ";
        cin >> continuar;
    } while (continuar == 'S' || continuar == 's');

    return 0;
}

