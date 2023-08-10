#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    // Declarando e inicializando um vetor de inteiros com 5 elementos
    int vetorInteiros[5] = {10, 20, 30, 40, 50};

    // Declarando e inicializando um array de doubles com 3 elementos
    double arrayDoubles[3] = {3.14, 2.71, 1.618};

    // Declando e inicializando um vetor de "strings" com 5 elementos
    string carros[5] = {"bmw", "fordKa", "mustang", "corvet", "ferrari"};
    size_t count = sizeof(carros) / sizeof(carros[0]);

    // Acessando os elementos
    cout << "MOSTRA O CARRO NA POSIÇÃO 2: " << carros[2] << "\n";

    // ALTERANDO O ELEMENTO DA POSIÇÃO 2
    carros[2] = "Fusca";

    // Mostra o elemento alterado
    cout << "AGORA O CARRO DA POSIÇÃO 2 É " << carros[2] << "\n";

    //MOSTRA TODOS OS CARROS CADASTRADOS
    cout <<"LISTA DE TODOS OS CARRO \n";
    for (size_t i = 0; i < count; i++)
    {
        cout << carros[i] << "\n";
    }
    

    return 0;
}