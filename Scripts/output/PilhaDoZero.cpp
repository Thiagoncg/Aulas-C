#include <iostream>>
#include <stdexcept>
#include <string>
// Pilha implementação

using namespace std;

const int MAX = 100;

class PilhaDoZero
{

private:
    string pilha[MAX];
    int topo = -1;

public:
    bool vazia()
    {
        return topo == -1;
    }

    bool cheia()
    {
        return topo == MAX;
    }

    void empilharVetor()
    {
        if (!cheia)
        {
            topo++;
            pilha[topo];
            cout << " elemento inserido" << elemento << endl;
        }
        else
        {
            throw underflow_error("elemento não pode ser inserido");
        }
    }

    void desempilharElemento()
    {
        if (!vazia)
        {
            string elemento = pilha[topo];
            topo--;
            return elemento;
        }
        else
        {
            throw underflow_error("pilha vazia!");
        }
    }

    void mostrarElementos()
    {
        cout << "Elementos da pilha" << endl;
        for (int i = topo; i >= 0; i--)
        {
            cout << pilha[i] << endl;
        }
    }
};

int main()
{
    PilhaDoZero p;
    string elemento;

    int opcao;

    do
    {
        cout << "\n escolha as opções" << endl;
        cout << " 1 = Inserir elemento" << endl;
        cout << " 2 = Deletar elemento" << endl;
        cout << " 3 = Mostrar elementos" << endl;
        cout << " 4 = Sair" << endl;

        switch (opcao)
        {
        case 1:
            cout << "insira o elemento na pilha";
            cin >> elemento;

            try
            {
                p.empilharVetor();
            }
            catch (const std::exception &e)
            {
                cout << "erro";
            }

            break;

        case 2:
            cout << "insira o elemento na pilha";
            cin >> elemento;

            try
            {
                p.desempilharElemento();
            }
            catch (const std::exception &e)
            {
                cout << "erro";
            }

        case 3:
            cout << "insira o elemento na pilha";
            cin >> elemento;

            try
            {
                p.mostrarElementos();
            }
            catch (const std::exception &e)
            {
                cout << "erro";
            }

            break;

        default:
            break;
        }

        /* code */
    } while (opcao != 4);
    return 0;
}