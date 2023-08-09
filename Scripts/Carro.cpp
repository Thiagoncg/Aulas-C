#include <iostream>
#include <string>
using namespace std;

main()
{

    cout << "LOCADORA DE CARROS!\n";
    string marca = "BMW";
    string modelo = "X1";
    int ano = 2023;
    string cor = "Prata";
    bool alugado = true;
    double tabelaFip = 2568.32;
    float quilometragem = 50.00f;

    cout << "MOSTRAR QUILOMETRAGEM: " << quilometragem << " ";
    //Simula que o carro andando e aumentado a quilometragem
    while (quilometragem < 100.00f)
    {
        cout << "Carro pode circular: "<< quilometragem << " ";
        quilometragem++;
    }
    cout << "Levar o carro para a revisão periódica : " << quilometragem << " ";

    //Verifica se o carro possui quilometragm maior que 100.00
    if (quilometragem >= 100.00f)
    {
        cout << "Carro não pode ser alugado ";
    }
    else
    {
        cout << "Carro pode ser alugado";
    }

    return 0;
}