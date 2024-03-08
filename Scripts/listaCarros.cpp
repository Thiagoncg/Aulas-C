#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    //Criando a lista de carros
    list<string>listaCarros = {" Corsa ", " GolBolinha ", " Fiat ", "Palio"};

    //Procuro o carro na minha lista de carros
    auto it = find(listaCarros.begin(), listaCarros.end(), "GolBolinha" );

    //Verifica se o carro foi encontrado
    if(it != listaCarros.end()){

        // troca o carro
        *it = "fusca";
    }

    //mostra todos os carros da minha lista
    for (const string& carro : listaCarros)
    {
        cout << carro << "";
    }
    cout << endl;   

    return 0;
}