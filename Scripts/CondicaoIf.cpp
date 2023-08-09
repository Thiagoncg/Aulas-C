#include <iostream>
#include <string>
using namespace std;

main()
{

    cout << "LOCADORA DE CARROS! condicao if \n";
    string marca = "BMW";
    string modelo = "X7"; 
    int ano = 2023;
    string cor = "Prata";
    bool alugado = true;
    double tabelaFip = 2568.32;
    float qilometragem = 150.00f;
   
    
    if (qilometragem >= 100.00f)
    {
        cout << "Carro não pode ser alugado ";
    }
    else
    {
        cout << "Carro pode ser alugado";
    }
    return 0;
}