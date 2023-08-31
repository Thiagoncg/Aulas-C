#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int valor1;
    int valor2;
    int valor3;

    srand(time(0));// gerador de uma cemente. esta função armazena a quantidade de segundos desde a 0 horas desde 1970.
    //Problema a precisão é baixa, pode ser que eu estaja criando uma simulação que rode dentro do mesmo segundo
    //isso fara com que tenhamos a mesma sememte ocasionando o mesmo valor.
    // rand()%100
    // rand modulo 100;


    valor1 = rand() % 10; //0 1 2 3 4 5 6 7 8 9 
    valor2 = 20 + rand() % 50; //20 21 22 23 24 ... 50
    valor3 = 1 + rand() % 10; // 1 2 3 4 5 6 7 8 9 10

    cout << "O valor sorteado foi: " << valor1 << endl;
    cout << "O valor sorteado foi: " << valor2 << endl;
    cout << "O valor sorteado foi: " << valor3 << endl;

    for (size_t i = 0; i < 10; i++)
    {
       cout << "Os Valores sorteados do bingo foram: "<< rand()% 100 << endl << ":";
    }
    

    return 0;
}
