#include <iostream>

int main() {
    int idade = 90;
    std::cout << "Digite sua idade: "; // Exibe uma mensagem na tela
    std::cin >> idade; // Lê o valor digitado pelo usuário e armazena na variável idade
    std::cout << "Sua idade é: " << idade << std::endl; // Exibe a idade informada pelo usuário
    return 0;
}