#include <iostream>

using namespace std;

int main()
{
    const int TAMANHO_LINHA = 100;
    const int TAMANHO_COLUNA = 100;

    // CRIA UMA MATRIZ 5 * 5;
    char matriz[TAMANHO_LINHA][TAMANHO_COLUNA];

    // PREENCHER A MATRIZ *
    for (int linha = 0; linha < TAMANHO_LINHA; ++linha)
    {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; ++coluna)
        {
            matriz[linha][coluna] = '*';
        }
    }

    // IMPRIMI A MATRIZ NA TELA
    for (int linha = 0; linha < TAMANHO_LINHA; ++linha)
    {
        for (int coluna = 0; coluna < TAMANHO_COLUNA; ++coluna)
        {
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
    return 0;
}