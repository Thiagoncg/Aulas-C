#include <iostream>
#include <vector>
using namespace std;

// Função de busca sequencial;
int buscaSequencial(vector<int> &arr, int x)
{
    // Percorre todo o vetor ate encontrar o elemeto desejado
    for (int i = 0; i < arr.size(); i++)
    {
        // Se o elemento atual é igual ao elemento procurado, mostra o indice
        if (arr[i] == x)
        {
            return i;
        }
    }
    // Caso eu não encontre o eelemento
    return -1;
}

int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int x = 40;
    int resultado = buscaSequencial(arr, x);
    (resultado == -1) ? cout << "Elemento não encontrado \n"
                      : cout << "Elemento encontrado no indice" << resultado << "\n";
    return 0;
}
