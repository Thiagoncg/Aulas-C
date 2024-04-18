#include <iostream>
#include <string>

struct Aluno
{
    std::string nome;
    int idade;
    float nota;
};

int main()
{
    Aluno aluno1;
    aluno1.nome = "Alice";
    aluno1.idade = 20;
    aluno1.nota = 7.5;

    // Insira seu código aqui
    // A
    // if (aluno1.idade > 18 && aluno1.nota > 7.0)
    // {
    //     std::cout << aluno1.nome << " é maior de idade e sua nota é maior que 7.0." << std::endl;
    // }

    // B
    // if (aluno1.idade > 18 || aluno1.nota > 7.0)
    // {
    //     std::cout << aluno1.nome << " é maior de idade ou sua nota é maior que 7.0." << std::endl;
    // }

    // C
    // if (aluno1.idade < 18 && aluno1.nota > 7.0)
    // {
    //     std::cout << aluno1.nome << " é menor de idade e sua nota é maior que 7.0." << std::endl;
    // }

    // D
    if (aluno1.idade > 18)
    {
        if (aluno1.nota > 7.0)
        {
            std::cout << aluno1.nome << " é maior de idade e sua nota é maior que 7.0." << std::endl;
        }
    }

    // E
    // if (aluno1.idade > 18)
    // {
    //     std::cout << aluno1.nome << " é maior de idade." << std::endl;
    // }
    // if (aluno1.nota > 7.0)
    // {
    //     std::cout << aluno1.nome << " tem nota maior que 7.0." << std::endl;
    // }

    return 0;
}
