#include <iostream>
#include "fila.h"

using namespace std;

int main()
{
    fila fila1;
    int opcao;
    TipoItem item;

    cout << "PROGRAMA QUE INSERE DADOS DE ALUNO\n";

    do
    {
        cout << "0 para programa\n";
        cout << "1 inserir \n";
        cout << "2 remover \n";
        cout << "3 imprimir \n";

        cin >> opcao;
        if (opcao == 1)
        {
            cout<<"digite o elemetno\n";
            cin >> item;
            fila1.inserir(item);
        }
        else if (opcao == 2)
        {
        }
        else if (opcao == 3)
        {
        }
    } while (opcao != 0);

    return 0;
};