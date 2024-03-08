#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

const int MAX = 100;

class PilhaInfo
{
private:
    string pilha[MAX];
    int topo;

public:
    // Construtor pilha
    PilhaInfo()
    {
        topo = -1;
    }

    // verifica se pilha esta vazia
    bool vazia()
    {
        return topo == -1;
    }

    bool cheia()
    {
        return topo == MAX - 1;
    }

    // empilha os elementos
    void empilha(const string &elemento)
    {
        if (cheia)
        {
            topo++;
            pilha[topo] = elemento;
            cout << "elemento inserido na pilha" << elemento << endl;
        }
        else
        {
            throw overflow_error("pilha esta cheia");
        }
    }

    // Inserir elemento no topo da pilha
    string desempilha()
    {
        if (!vazia)
        {
            string elemento = pilha[topo];
            topo--;
            return elemento;
        }
    }

    // mostrar os elementos da pilha
    void mostrarElementos()
    {
        cout << "Mostrar elementos" << endl;
        for (int i = topo; i >= 0; i--)
        {
            cout << pilha[i] << endl;
        }
    }
};

int main()
{
    PilhaInfo p;
    string elemento;
    int opcao;

    do
    {

        cout << "Escolha uma opção" << endl;
        cout << "1 Inserir elemento" << endl;
        cout << "2 Retirar elemento" << endl;
        cout << "3 Mostrar elementos" << endl;
        cout << "4 Sai do programa maluco" << endl;

        switch (opcao)
        {
        case 1:
            cout << "insira o elemento na pilha";
            p.empilha(elemento);
            break;

        case 2:
            cout << "Remover elemento da pilha";
            p.desempilha();
            
            break;
        case 3:
            cout << "Mostrar o elementos";
            p.mostrarElementos();
            break;
        case 4:
            cout << "sair";

            break;

        default:
        cout<<"opção não encontrada"<<endl;
            break;
        }
    } while (opcao != 4);
    return 0;
}
