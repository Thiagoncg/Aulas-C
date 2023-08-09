#include <iostream>

int main() {
    // Declaração de variáveis
    int a = 10;
    int b = 5;

    // Operações matemáticas
    int soma = a + b;         // Soma de a e b
    int diferenca = a - b;    // Subtração de a por b
    int produto = a * b;      // Multiplicação de a por b
    int quociente = a / b;    // Divisão de a por b

    // Operadores de atribuição composta
    a += 2;  // Equivalente a: a = a + 2;
    b *= 3;  // Equivalente a: b = b * 3;

    // Saída dos resultados
    std::cout << "Soma: " << soma << std::endl;
    std::cout << "Diferença: " << diferenca << std::endl;
    std::cout << "Produto: " << produto << std::endl;
    std::cout << "Quociente: " << quociente << std::endl;

    // Saída dos valores atualizados de 'a' e 'b'
    std::cout << "a atualizado: " << a << std::endl;
    std::cout << "b atualizado: " << b << std::endl;

    return 0;
}
//Exercícios: Pergunta: Escreva um programa em C++ 
// que solicita ao usuário dois números inteiros e realiza as 
// seguintes operações: soma, subtração, multiplicação e divisão dos 
// números. Imprima os resultados.
