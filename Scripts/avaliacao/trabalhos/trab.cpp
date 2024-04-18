// Trabalho Lab1 Professor Thiago
//  Matheus Abilio da Silva Camargo Cod:841929
//  Maria Fernanda Faria Kurukava Cod:841877
#include <iostream>
#include <vector>
#include <string>
using namespace std;
// Estrutura para armazenar os dados de uma pessoa
struct Pessoa
{
    string nome;
    int idade;
    double peso;
    double altura;
};
// Função para calcular o IMC
double calcularIMC(double peso, double altura)
{
    return peso / (altura * altura);
}
// Função para avaliar o IMC e atribuir uma mensagem
string avaliarIMC(double imc)
{
    if (imc < 18.5)
    {
        return "Abaixo do peso. Você deve ganhar peso.";
    }
    else if (imc >= 18.5 && imc < 25)
    {
        return "Parabens! Seu peso esta saudavel.";
    }
    else if (imc >= 25 && imc < 30)
    {
        return "Sobrepeso. Você pode estar em risco. Consulte um medico.";
    }
    else
    {
        return "Obesidade. É importante consultar um medico.";
    }
}
// Função para cadastrar uma pessoa
void cadastrarPessoa(vector<Pessoa> &pessoas)
{
    Pessoa novaPessoa;
    cout << "Digite o nome da pessoa: ";
    getline(cin, novaPessoa.nome);
    cout << "Digite a idade da pessoa: ";
    cin >> novaPessoa.idade;
    cout << "Digite o peso da pessoa (em kg): ";
    cin >> novaPessoa.peso;
    cout << "Digite a altura da pessoa (em metros): ";
    cin >> novaPessoa.altura;

    cin.ignore();
    pessoas.push_back(novaPessoa);
    cout << "Pessoa cadastrada com sucesso!" << endl;
}
// Função da lista de pessoas
void listarPessoas(const vector<Pessoa> &pessoas)
{
    if (pessoas.empty())
    {
        cout << "Nenhuma pessoa cadastrada ainda." << endl;
        return;
    }
    cout << "Lista de pessoas cadastradas:" << endl;
    for (const auto &pessoa : pessoas)
    {
        cout << "Nome: " << pessoa.nome << endl;
        cout << "Idade: " << pessoa.idade << endl;
        double imc = calcularIMC(pessoa.peso, pessoa.altura);
        cout << "IMC: " << imc << " - " << avaliarIMC(imc) << endl;
        cout << endl;
    }
}
// Função de pesquisa de pessoa por nome
void pesquisarPessoa(const vector<Pessoa> &pessoas)
{
    if (pessoas.empty())
    {
        cout << "Nenhuma pessoa cadastrada ainda." << endl;
        return;
    }
    string nome;
    cout << "Digite o nome da pessoa que deseja pesquisar: ";
    getline(cin, nome);
    bool encontrou = false;
    for (const auto &pessoa : pessoas)
    {
        if (pessoa.nome == nome)
        {
            cout << "Nome: " << pessoa.nome << endl;
            cout << "Idade: " << pessoa.idade << endl;
            double imc = calcularIMC(pessoa.peso, pessoa.altura);
            cout << "IMC: " << imc << " - " << avaliarIMC(imc) << endl;
            encontrou = true;
            break;
        }
    }
    if (!encontrou)
    {
        cout << "Pessoa nao encontrada." << endl;
    }
}
int main()
{
    vector<Pessoa> pessoas;
    int opcao;
    do
    {
        cout << "\nBem-vindo qual opçao deseja..:" << endl;
        cout << "1. Cadastrar pessoa" << endl;
        cout << "2. Lista de pessoas cadastradas" << endl;
        cout << "3. Pesquisar pessoa por nome" << endl;
        cout << "4. Sair" << endl;
        cout << "Escolha uma opçao: ";
        cin >> opcao;
        cin.ignore();
        switch (opcao)
        {
        case 1:
            cadastrarPessoa(pessoas);
            break;
        case 2:
            listarPessoas(pessoas);
            break;
        case 3:
            pesquisarPessoa(pessoas);
            break;
        case 4:
            cout << "Encerrando o programa." << endl;
            break;
        default:
            cout << "Opçao invalida. Escolha uma opçao valida." << endl;
        }
    } while (opcao != 4);
    return 0;
}