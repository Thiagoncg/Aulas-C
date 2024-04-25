#include <iostream>
#include <vector>
using namespace std;

int minhaBuscaBinaria(vector<int>& arr, int valor)
{
    int esquerda = 0;
    int direita = arr.size() - 1;
    while (esquerda <= direita)
    {
        int meio = esquerda + (direita - esquerda) / 2;

        //O elemento esta no meio - retorna o elemento
        if (arr[meio] == valor)
        {
            esquerda = meio + 1;
        }
        //Elemento é maior, ignora metade esquerda
        if(arr[meio] < valor)
        {
            esquerda = meio - 1;
        }
        //ignoro a parte da direita
        else
        {
            direita = meio - 1;
        }        
    }
    //Elemento não encontrado
    return -1;
    
}
int main()
{
    vector<int> arr = {2, 3, 4, 10, 40};
    int valor = 10;
    int resultado = minhaBuscaBinaria(arr, valor);

    (resultado == -1) ? cout << "Elemento não esta na lista\n"
                    : cout << "elemento encontrado" << resultado << "\n";
    return 0;
}