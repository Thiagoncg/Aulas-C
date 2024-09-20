#include <iostream>
using namespace std;

//este exemplo mostra a criação de uma struct a criação de uma instancia desta struct.
//a modificação dos mebros desta struct  a exibição dos dados desta struct.

struct Aluno {
    string nome = "jose";
    int idade = 30;
    float nota = 9.8;
};

int main() {
    // Criando uma instância da struct Aluno
    Aluno aluno1;

    // Acessando e modificando os membros
    // aluno1.nome = "Carlos";
    // aluno1.idade = 20;
    // aluno1.nota = 8.5;

    // Exibindo os dados do aluno
    cout << "Nome: " << aluno1.nome << endl;
    cout << "Idade: " << aluno1.idade << endl;
    cout << "Nota: " << aluno1.nota << endl;

    return 0;
}
