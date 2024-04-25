#include <iostream>
#include <random>

using namespace std;
//Solução indicada
int main(){
    // Criand um gerador de numeros aleatorios chamado 
    //random device Usa o rardware para criar um numero 
    //aleatório, numero não deterministico
    random_device rd; 
    // Função Mersenne Twister - Função que é usada como 
    //gerador de semente chamado  mt19937
    mt19937 mt(rd());
    //Fornecido pela biblioterca randon, melhor forma de distribuir os numeros  
    uniform_int_distribution<int> dist(0, 99);

    for (int i = 0; i < 10; i++)
    {
        cout << "Os resultados do bingo foram: " << dist(mt) << ":" << endl;
    }


    //1º) Crie um programa que gere um jogo para a mega sena.
    //2º) Crie um programa que gere 10 jogos para a mega sena.
    //3º) Crie um programa que leia uma lista de 10 pessoas e sorteie uma pessoa da lista 

    
}