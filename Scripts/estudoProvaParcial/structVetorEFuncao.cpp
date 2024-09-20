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
    // Criando um vetor de structs
    Aluno alunos[3];

    // Inicializando o vetor
    alunos[0] = {"Carlos", 20, 8.5};
    alunos[1] = {"Maria", 22, 9.0};
    alunos[2] = {"João", 19, 7.8};

    // Exibindo os dados de cada aluno
    for (int i = 0; i < 3; i++) {
        exibirAluno(alunos[i]);
        cout << "------------------" << endl;
    }

    return 0;
}