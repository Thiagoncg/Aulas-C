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

// Função para calcular a média das notas dos alunos
float calcularMedia(Aluno alunos[], int tamanho) {
    float soma = 0.0;
    for (int i = 0; i < tamanho; i++) {
        soma += alunos[i].nota;
    }
    return soma / tamanho;
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

    // Calculando e exibindo a média das notas da Sala
    float media = calcularMedia(alunos, 3);
    cout << "A média das notas é: " << media << endl;

    return 0;
}
