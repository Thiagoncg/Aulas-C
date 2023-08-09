#include <iostream>
#include <string>
#include <windows.h>




int main() {
    SetConsoleOutputCP(CP_UTF8);
    // Declaração de variáveis
    int x = 10;
    int y = 20;

    // Operadores de comparação
    bool igual = (x == y);            // Verifica se x é igual a y
    bool diferente = (x != y);        // Verifica se x é diferente de y
    bool maiorQue = (x > y);          // Verifica se x é maior que y
    bool menorQue = (x < y);          // Verifica se x é menor que y
    bool maiorOuIgual = (x >= y);     // Verifica se x é maior ou igual a y
    bool menorOuIgual = (x <= y);     // Verifica se x é menor ou igual a y

    // Saída dos resultados
    std::cout << "x é igual a y: " << igual << std::endl;
    std::cout << "x é diferente de y: " << diferente << std::endl;
    std::cout << "x é maior que y: " << maiorQue << std::endl;
    std::cout << "x é menor que y: " << menorQue << std::endl;
    std::cout << "x é maior ou igual a y: " << maiorOuIgual << std::endl;
    std::cout << "x é menor ou igual a y: " << menorOuIgual << std::endl;

    return 0;
}
// Exercícios:
// Pergunta: Escreva um programa em C++ que solicita ao usuário dois números inteiros 
// e verifica se o primeiro número é maior do que o segundo. Imprima o resultado.
