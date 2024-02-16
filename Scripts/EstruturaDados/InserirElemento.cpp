#include <iostream>
#include <stack> // Biblioteca para usar pilha em C++
using namespace std;

int main() {
    stack<int> pilha; // Declaração de uma pilha de inteiros

    int elemento;
    cout << "Digite o elemento que deseja inserir na pilha: ";
    cin >> elemento;

    pilha.push(elemento); // Insere o elemento na pilha

    cout << "Elemento " << elemento << " inserido na pilha." << endl;

    return 0;
}
