#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Declaração das variáveis
    string nome;
    string nomeCompleto;
    int idade;
    float altura;
    char diMaior;
    double saldo_bancario;

    int numeroA;
    int numeroB;
    int soma;

    // Solicitação dos dados ao usuário
    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "Digite o nome completo: ";
    cin.ignore(); // Limpar o buffer de entrada
    getline(cin, nomeCompleto);

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite a sua altura (em metros): ";
    cin >> altura;

    cout << "Você é maior de idade (S ou N)? ";
    cin >> diMaior;

    cout << "Qual o seu saldo bancário? ";
    cin >> saldo_bancario;

    // Exibição dos dados cadastrados
    cout << "\nDADOS CADASTRADOS:\n";
    cout << "Nome: " << nome << endl;
    cout << "Nome completo: " << nomeCompleto << endl;
    cout << "Idade: " << idade << " anos\n";
    cout << "Altura: " << altura << " metros\n";
    cout << "Maior de idade: " << diMaior << endl;
    cout << "Saldo bancário: R$" << saldo_bancario << endl;

    return 0;
}
