#include <iostream>

// Definindo a estrutura do nó
struct No
{
    int valor;
    No *proximo;
};

// Classe Pilha
class Pilha
{
private:
    No *topo;

public:
    Pilha() : topo(nullptr) {}

    // Função para inserir elemento na pilha
    void push(int val)
    {
        No *novo_no = new No{val, topo};
        topo = novo_no;
    }

    // Função para remover elemento da pilha
    int pop()
    {
        if (topo == nullptr)
        {
            std::cerr << "Pilha vazia!" << std::endl;
            return -1; // Pilha vazia
        }
        No *no_a_remover = topo;
        topo = topo->proximo;
        int valor = no_a_remover->valor;
        delete no_a_remover;
        return valor;
    }

    // Função para verificar se a pilha está vazia
    bool isEmpty()
    {
        return topo == nullptr;
    }

    // Destrutor para desalocar memória
    ~Pilha()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

int main()
{
    Pilha pilha;

    // Adicionando elementos à pilha
    pilha.push(10);
    pilha.push(20);
    pilha.push(30);
    pilha.push(40);
    pilha.push(50);
    pilha.push(60);
    pilha.push(70);
    pilha.push(80);
    pilha.push(90);
    pilha.push(100);
    pilha.push(110);                                      
    pilha.push(120);
    pilha.push(130);
    pilha.push(140);
    pilha.push(150);


    // Removendo elementos da pilha
    std::cout << pilha.pop() << std::endl; // Deve imprimir 30
    std::cout << pilha.pop() << std::endl; // Deve imprimir 20

    return 0;
}
