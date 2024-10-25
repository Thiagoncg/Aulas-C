#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int idade;
    float nota;
};

// Função para exibir os dados de um aluno
void exibirAluno(Aluno aluno) {
    cout << "Nome: " << aluno.nome << endl;
    cout << "Idade: " << aluno.idade << endl;
    cout << "Nota: " << aluno.nota << endl;
}

int main() {
    Aluno aluno1;
    aluno1.nome = "Maria";
    aluno1.idade = 21;
    aluno1.nota = 9.2;
    

    // Chamando a função
    exibirAluno(aluno1);
    

    return 0;
}
