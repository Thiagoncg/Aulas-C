#include <iostream>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    float nota;
};

int main() {
    Aluno alunos[5];  // Vetor para armazenar 5 alunos
    float somaNotas = 0.0;
    
    // Loop para inserir os dados dos 5 alunos
    for (int i = 0; i < 5; i++) {
        cout << "Digite o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Digite a nota do aluno " << i + 1 << ": ";
        cin >> alunos[i].nota;
        somaNotas += alunos[i].nota;  // Soma as notas para calcular a média
    }
    
    // Calculando a média
    float media = somaNotas / 5;
    
    // Exibindo a média
    cout << "\nA média das notas é: " << media << endl;
    
    return 0;
}
