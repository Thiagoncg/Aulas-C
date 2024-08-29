#include <iostream>
using namespace std;

int main() {


    int idade = 25;
    float altura = 1.80;
    char sexo = 'M';
    bool estaChovendo = false;
    double saldoBancario = 10.00;
    //string nome = "Thiago";
    //string sobreNome = "Garcia";

    string nomeCompleto = "Thiago sGarcia";


   cout << "Digite sua idade: "; // Exibe uma mensagem na tela
   cin >> idade; // Lê o valor digitado pelo usuário e armazena na variável idade
   cout << "Sua idade é: " << idade << std::endl; // Exibe a idade informada pelo usuário
   cout << "NOme completo: " << nomeCompleto << std::endl; // Exibe a idade informada pelo usuário
    return 0;
}